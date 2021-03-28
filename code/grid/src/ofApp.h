#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        // Our custom functions
        void drawShape(int gridIndex);
    
        void saveImage(string filename);
        string timestampedFilename();
    
    // Grid settings
    int columns;
    int rows;
    
    // Calculated values
    float cellWidth;
    float cellHeight;
    
    // Toggle for debug information
    bool isDebugging;
    bool isDrawGUI;
    
    // GUI
    ofxPanel gui;
    ofParameterGroup gridGroup;
    ofParameter<int> columnsSlider;
    ofParameter<int> rowsSlider;
    
    // Screengrab image
    ofImage screenImage;
                       
        
};
