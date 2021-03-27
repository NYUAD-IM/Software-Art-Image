#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofLog(OF_LOG_NOTICE, "Setting up");
    isDebugging = false;
    
    // White background
    ofSetBackgroundColor(255, 255, 255);
    
    // Smoother circles
    ofSetCircleResolution(100);
    
    columns = 5;
    rows = 5;
}

//--------------------------------------------------------------
void ofApp::update(){
    // Calculate the cell sizes based off the current parameters
    cellWidth = float(ofGetWindowWidth()) / columns;
    cellHeight = float(ofGetWindowHeight()) / rows;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // Iterate through each position in the grid
    int gridIndex = 0;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < columns; col++) {
            
            // Find the center of this grid position
            float centerX = col * cellWidth + cellWidth / 2;
            float centerY = row * cellHeight + cellHeight / 2;
            
            // Draw something for the current cell that varies
            // with the index in the grid
            ofSetColor(0, 0, 10 + gridIndex * 5);
            ofDrawCircle(centerX, centerY, 10 + gridIndex * 1);
            
            gridIndex += 1;
        }
    }
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'd') {
        // Toggle debug output
        isDebugging = !isDebugging;
        
        if (isDebugging) {
            ofSetLogLevel(OF_LOG_VERBOSE);
            ofLog(OF_LOG_NOTICE,"Debugging ENABLED");
        } else {
            ofSetLogLevel(OF_LOG_NOTICE);
            ofLog(OF_LOG_NOTICE,"Debugging disabled");
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
