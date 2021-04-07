#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    position.set(ofGetWidth()/2, ofGetHeight()/2);
    circleColor = ofColor::red;
    drawColor = circleColor;
    radius = 60;
}

//--------------------------------------------------------------
void ofApp::update(){
    float animationTime = ofGetElapsedTimef();

    // We have three transition points, based off the
    // elapsed time
    float firstChangeTime = 2;
    float secondChangeTime = 5;
    float thirdChangeTime = 10;
    
    // Pause before first change
    if (animationTime < firstChangeTime) {
        // Nothing
        drawColor = circleColor;
        
    // The first change is to pink
        
    } else if (animationTime < secondChangeTime) {
        circleColor = ofColor::pink;
        drawColor = circleColor;
        
    // The second change is a ramp to green until the next change
    // time
    } else if (animationTime < thirdChangeTime) {
        
        // How many seconds since the start of the change?
        float timeSinceSecond = animationTime - secondChangeTime;
        
        // How far (as a percentage) are we to the next change?
        float percentageToThird = timeSinceSecond / (thirdChangeTime - secondChangeTime);
        
        // Interpolate the color based on the percentage through the
        // animation
        drawColor = circleColor.getLerped(ofColor::green, percentageToThird);
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(drawColor);
    ofDrawCircle(position, radius);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
