#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    isDrawGUI = false;
    isDebugging = false;
    
    ofSetBackgroundColor(255);
    

    gui.setup();
    gui.add(leftColor.setup("Left Color",
                            ofColor(100, 100, 140),
                            ofColor(0, 0),
                            ofColor(255, 255)));
    gui.add(rightColor.setup("Right Color",
                             ofColor(100, 100, 140),
                             ofColor(0, 0),
                             ofColor(255, 255)));
    gui.add(middleColor.setup("Middle Color",
                             ofColor(100, 100, 140),
                             ofColor(0, 0),
                             ofColor(255, 255)));
    gui.add(middleRatio.set("Middle size ratio", 0.2));

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int largeWidth = ofGetWidth() / 2;
    int largeHeight = ofGetHeight();
    
    int middleWidth = largeWidth * middleRatio;
    int middleHeight = largeHeight * middleRatio;

    
    // Left rectangle
    ofSetColor(leftColor);
    ofDrawRectangle(0, 0, largeWidth, largeHeight);
    
    // Right rectangle
    ofSetColor(rightColor);
    ofDrawRectangle(largeWidth, 0, largeWidth, largeHeight);
    
    // Middle rectangles //
    ofSetColor(middleColor);
    
    // Draw middle rectangles centered within large rectangles
    int top = largeHeight / 2 - middleHeight / 2;
    int left = largeWidth / 2 - middleWidth / 2;
    ofDrawRectangle(left, top, middleWidth, middleHeight);
    left += largeWidth;
    ofDrawRectangle(left, top, middleWidth, middleHeight);
    

    if (isDrawGUI) {
        gui.draw();
    }
}


//--------------------------------------------------------------
// CUSTOM FUNCTIONS
void ofApp::saveImage(string filename) {
    screenImage.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
    screenImage.save(filename);
}

string ofApp::timestampedFilename() {
    return ofGetTimestampString("color-%Y%m%d-%H%M%S-%i.png");
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
            
        case 'd':
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
            
            
        case 'g':
            // Toggle GUI
            isDrawGUI = !isDrawGUI;
            break;
            
            
        case 's':
            // Take screenshot
            string filename = this->timestampedFilename();
            ofLog(OF_LOG_NOTICE, "Saving image to %s", filename.c_str());
            this->saveImage(filename);
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
