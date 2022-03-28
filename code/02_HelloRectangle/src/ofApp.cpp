#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(150, 17, 20);
    
    // Set initial sizes and colors
    rectangleWidth = 200;
    rectangleHeight = 80;
    redValue = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // Cycle rectangle color
    redValue += 1;
    if (redValue > 255) {
        redValue = 0;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(redValue,140,0);
    ofDrawRectangle(10, 20, rectangleWidth, rectangleHeight);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    /*
     * Supported keys:
     * - l / k change rectangle width
     */
    
    if (key == 'l') {
        rectangleWidth += 1;
    } else if (key == 'k') {
        rectangleWidth -= 1;
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
