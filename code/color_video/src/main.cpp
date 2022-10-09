#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    int height = 800;
    
    /// Set the aspect ratio of the window
    // float aspectRatio = 1.5; // 3:2
    float aspectRatio = 1.; // the classic square
    
    int width = height * aspectRatio;
	ofSetupOpenGL(1920,1080,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
