#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(50);
    ofSetCircleResolution(50);
    ofSetBackgroundColor(ofColor::darkGray);

    // Initial position - centered
    position.set(ofGetWidth()/2, ofGetHeight()/2, 0);
    
    // 1 pixel per second
    speed.set(1,0);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // Move the position by the speed
    position += speed;
    
    // Check if off screen and wrap around
    // How would you allow the circle to go completely
    // off screen before reseting the position?
    if (position.x > ofGetWidth()) {
        position.x -= ofGetWidth();
    }
    if (position.x < 0) {
        position.x += ofGetWidth();
    }
    if (position.y > ofGetHeight()) {
        position.y -= ofGetHeight();
    }
    if (position.y < 0) {
        position.y += ofGetHeight();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(ofColor::lightBlue);
    ofDrawCircle(position, 40);
    
    ofSetColor(ofColor::white);
    ofDrawBitmapString("Speed: " + ofToString(speed), 20, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // Arrow keys change velocity
    
    switch (key) {
        case OF_KEY_UP: {
            speed.y -= 1;
            break;
        }
        case OF_KEY_DOWN: {
            speed.y += 1;
            break;
        }
        case OF_KEY_LEFT: {
            speed.x -= 1;
            break;
        }
        case OF_KEY_RIGHT: {
            speed.x += 1;
            break;
        }
            
        case 'r': {
            // Reset
            speed = ofVec2f(0,0);
            position = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);
        }
    }
    ofLog() << "New speed: " << speed << endl;
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
