#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxFFmpegRecorder.h"

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
    
        void saveImage(string filename);
        string timestampedFilename();
    
        /// Get the value of a sine wave at the given frequency, at the current time
        float sineAtFrequency(float frequency);
    

    
    bool isDebugging;
    bool isDrawGUI;
    
    // GUI
    ofxPanel gui;
    ofxColorSlider leftColor;
    ofxColorSlider rightColor;
    ofxColorSlider middleColor;
    
    /// Ratio of small rectangle to large
    ofParameter<float> middleHeightRatio;
    ofParameter<float> middleWidthRatio;
    
    ofParameter<bool> shouldAnimate;
    ofParameter<float> hueFrequency;
    ofParameter<float> hueDegrees;
    
    // Screengrab image
    ofImage screenImage;
    
    /// Actual color of the middle rectangle
    ofColor currentMiddleColor;
		
    
    
    
    // Video recording
    ofxFFmpegRecorder m_Recorder;

    bool isRecordingVideo;
    
    ofFbo                recordFbo;
    ofPixels             recordPixels;
    
};
