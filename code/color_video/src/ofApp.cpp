#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    isDrawGUI = false;
    isDebugging = false;
    
    ofSetBackgroundColor(255);
    
    // Defaults, from experimentation
    ofColor defaultLeftColor(101, 38, 61);
    ofColor defaultRightColor(72, 140, 130);
    ofColor defaultMiddleColor(120, 123, 197);
    float defaultMiddleHeightRatio = 0.25;
    float defaultMiddleWidthRatio = 0.25;
    
    // Setup GUI with default values
    gui.setup();
    gui.add(leftColor.setup("Left Color",
                            defaultLeftColor,
                            ofColor(0, 0),
                            ofColor(255, 255)));
    gui.add(rightColor.setup("Right Color",
                             defaultRightColor,
                             ofColor(0, 0),
                             ofColor(255, 255)));
    gui.add(middleColor.setup("Middle Color",
                             defaultMiddleColor,
                             ofColor(0, 0),
                             ofColor(255, 255)));
    gui.add(middleHeightRatio.set("Middle height ratio", defaultMiddleHeightRatio, 1/100., 1));
    gui.add(middleWidthRatio.set("Middle width ratio", defaultMiddleWidthRatio, 1/100., 1));

    
    gui.add(shouldAnimate.set("Animate", false));
    gui.add(hueFrequency.set("Hue frequency", 0.05, 0, 0.5)); // Cycles / second
    gui.add(hueDegrees.set("Hue degrees", 50, 0, 180));
    
    setupFbo();

}

//--------------------------------------------------------------
void ofApp::update(){
    // Set middle color based on GUI
    currentMiddleColor = middleColor;
    
    if (shouldAnimate) {
        // Animate hue of center rectangle
        // We want to move through an arc of hueDegrees
        // in 1/hueFrequency seconds
        
        // Get the current hue as an angle (0..360.)
        float middleHue = currentMiddleColor.getHueAngle();
        
        // The hue offset is calculated from a sine wave and sweeps
        // hueDegrees on each side of the middle hue
        float hueOffset = sineAtFrequency(hueFrequency) * hueDegrees;
        // ofLog() << ofGetElapsedTimeMillis() % 1000 << ": " << sineAtFrequency(hueFrequency) << " " << hueOffset << endl;
        
        currentMiddleColor.setHueAngle(middleHue + hueOffset);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // Calculate sizes of rectangles
    int largeWidth = ofGetWidth() / 2;
    int largeHeight = ofGetHeight();
    
    int middleHeight = largeHeight * middleHeightRatio;
    int middleWidth = largeWidth * middleWidthRatio;

    // For recording
    recordFbo.begin();
    ofClear(0,0,0,255);
    
    // Left rectangle
    ofSetColor(leftColor);
    ofDrawRectangle(0, 0, largeWidth, largeHeight);
    
    // Right rectangle
    ofSetColor(rightColor);
    ofDrawRectangle(largeWidth, 0, largeWidth, largeHeight);
    
    // Middle rectangles //
    ofSetColor(currentMiddleColor);
    
    // Draw middle rectangles centered within large rectangles
    int top = largeHeight / 2 - middleHeight / 2;
    int left = largeWidth / 2 - middleWidth / 2;
    ofDrawRectangle(left, top, middleWidth, middleHeight);
    left += largeWidth;
    ofDrawRectangle(left, top, middleWidth, middleHeight);
    

    if (isDrawGUI) {
        gui.draw();
    }
    
    recordFbo.end();
    
    if( m_Recorder.isRecording() ) {
        recordFbo.readToPixels(recordPixels);
        
        if (recordPixels.getWidth() > 0 && recordPixels.getHeight() > 0) {
            m_Recorder.addFrame(recordPixels);
        }
        
        // Draw dot to show recording
        float recordRadius = 10;
        float recordMargin = 20;
        recordFbo.begin();
        ofSetColor(255, 0, 0);
        ofDrawCircle(ofGetWidth() - recordRadius - recordMargin, recordMargin + recordRadius, recordRadius);
        recordFbo.end();
    }
    
    // Show the output on the screen
    recordFbo.draw(0,0,recordFbo.getWidth(),recordFbo.getHeight());
}

//--------------------------------------------------------------
// CUSTOM FUNCTIONS
void ofApp::setupFbo()
{
    // Setup video
    ofLog() << ofGetWidth() << "x" << ofGetHeight() << endl;
    m_Recorder.setup(true, false, glm::vec2(ofGetWidth(), ofGetHeight()));
    m_Recorder.setOverWrite(true);
    
    #if defined(TARGET_OSX)
    // You need to copy ffmpeg into your data folder
    m_Recorder.setFFmpegPath(ofToDataPath("ffmpeg"));
    #elif defined(TARGET_WIN32)
    m_Recorder.setFFmpegPath(ofToDataPath("ffmpeg/win/ffmpeg.exe"));
    #endif
    
    isRecordingVideo = false;
    
    recordFbo.allocate( ofGetWidth(), ofGetHeight(), GL_RGB );

}


void ofApp::saveImage(string filename) {
    screenImage.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
    screenImage.save(filename);
}

string ofApp::timestampedFilename() {
    return ofGetTimestampString("color-%Y%m%d-%H%M%S-%i.png");
}

float ofApp::sineAtFrequency(float frequency) {
    // One cycle of a sine wave is 360 degrees = 2*pi radians
    // We want to go through one full cycle in 1/frequency seconds.
    //
    // e.g. a 2Hz sine wave oscillates twice per second, so we
    //      need to go through 2*2*pi radians in one second
    
    float radiansPerCycle = 2*PI;
    float millisPerCycle = 1000 / frequency;
    
    // The modulo operator gives us the remainder, so e.g.
    // with ofGetElapsedTimeMillis() % 100 we will get a number
    // that increases from 0 to 99 over 100 milliseconds
    int millisIntoCycle = ofGetElapsedTimeMillis() % (int)millisPerCycle;

    float percentageIntoCycle = millisIntoCycle / millisPerCycle;
    
    return sin(percentageIntoCycle * radiansPerCycle);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
            
        case 'd': {
            // Toggle debug output
            isDebugging = !isDebugging;
            
            if (isDebugging) {
                ofSetLogLevel(OF_LOG_VERBOSE);
                ofLog(OF_LOG_NOTICE,"Debugging ENABLED");
            } else {
                ofSetLogLevel(OF_LOG_NOTICE);
                ofLog(OF_LOG_NOTICE,"Debugging disabled");
            }
            break;
        }
            
            
        case 'g': {
            // Toggle GUI
            isDrawGUI = !isDrawGUI;
            break;
        }
            
        case 's': {
            // Take screenshot
            string filename = this->timestampedFilename();
            ofLog(OF_LOG_NOTICE, "Saving image to %s", filename.c_str());
            this->saveImage(filename);
            break;
        }
            
        case 'f': {
            ofToggleFullscreen();
            
            // After the screen size changes we need to change the
            // size of our drawing/recording area
            setupFbo();
            break;
        }
            
        case ' ': {
            if( m_Recorder.isRecording() ) {
                // stop
                ofLog(OF_LOG_NOTICE, "STOP recording video");
                m_Recorder.stop();
                isRecordingVideo = false;
            } else {
                ofLog(OF_LOG_NOTICE, "Start recording video");
                ofLog() << ofGetWidth() << "x" << ofGetHeight() << endl;

            #if defined(TARGET_OSX)
                m_Recorder.setOutputPath( ofToDataPath(ofGetTimestampString() + ".mp4", true ));
            #else
                m_Recorder.setOutputPath( ofToDataPath(ofGetTimestampString() + ".avi", true ));
            #endif

                m_Recorder.setVideoCodec("libx264");
                m_Recorder.setBitRate(8000);

                isRecordingVideo = true;
                m_Recorder.startCustomRecord();
            }
            break;
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
