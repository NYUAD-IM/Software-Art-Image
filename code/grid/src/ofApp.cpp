#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofLog(OF_LOG_NOTICE, "Setting up");
    isDebugging = false;
    isDrawGUI = false; // turn on with 'g'
    
    // White background
    ofSetBackgroundColor(255, 255, 255);
    
    // Smoother circles
    ofSetCircleResolution(100);
    
    // Initial grid setup
    columns = 5;
    rows = 5;
    
    // Setup GUI
    gridGroup.setName("Grid settings");
    gridGroup.add(columnsSlider.set("Columns", columns, 1, 25));
    gridGroup.add(rowsSlider.set("Rows", 5, rows, 25));
    gui.setup(gridGroup);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    columns = columnsSlider;
    rows = rowsSlider;
    
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
            ofSetColor(gridIndex * 20, 0, 0);
            ofDrawCircle(centerX + 0.2 * gridIndex, centerY, 10 + gridIndex * 1);
            
            gridIndex += 1;
        }
    }
    
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
    return ofGetTimestampString("grid-%Y%m%d-%H%M%S-%i.png");
}

//--------------------------------------------------------------
// EVENTS


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'd') {
        // do something
    } else if (key == 'e') {
        // something
    }
    
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
