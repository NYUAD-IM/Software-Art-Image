#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    /*
    int height = 800;
    
    /// Set the aspect ratio of the window
    // float aspectRatio = 1.5; // 3:2
    float aspectRatio = 1; // the classic square
    
    int width = height * aspectRatio;
	ofSetupOpenGL(width,height,OF_WINDOW);			// <-------- setup the GL context
    */
    
    ofSetupOpenGL(1024, 768, OF_WINDOW);

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
