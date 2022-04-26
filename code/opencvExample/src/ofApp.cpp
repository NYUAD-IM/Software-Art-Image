#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	#ifdef _USE_LIVE_VIDEO
        vidGrabber.setVerbose(true);
    
    
        // Code to list devices from
        // https://github.com/openframeworks/openFrameworks/tree/master/examples/video/videoGrabberExample
    
        //get back a list of devices.
        vector<ofVideoDevice> devices = vidGrabber.listDevices();

        // Look for builtin camera
        char builtinName[] = "FaceTime HD Camera";
        int builtinID = -1;

        for(size_t i = 0; i < devices.size(); i++){
            if(devices[i].bAvailable){
                //log the device
                ofLogNotice() << devices[i].id << ": " << devices[i].deviceName;
                
                // Check if this is the builtin Mac camera
                if (!strncmp(devices[i].deviceName.c_str(), builtinName, strlen(builtinName))) {
                    // Name starts with "FaceTime..."
                    builtinID = i;
                }
                
            }else{
                //log the device and note it as unavailable
                ofLogNotice() << devices[i].id << ": " << devices[i].deviceName << " - unavailable ";
            }
        }

        // Default to first camera
        int cameraID;
    
        if (builtinID >= 0) {
            ofLogNotice() << "Found FaceTime camera with ID " << cameraID;
            cameraID = builtinID;
        } else {
            // Use first camera - change the ID here to use a different camera
            cameraID = 0;
        }
        
        ofLogNotice() << "Using camera " << cameraID << " - " << devices[cameraID].deviceName << endl;
        vidGrabber.setDeviceID(cameraID);

        // Set the requested width / height
        // My Facetime camera did not support 320x240
        vidWidth = 640;
        vidHeight = 480;
    
        vidGrabber.setup(vidWidth, vidHeight);
	#else
    
        vidWidth = 320;
        vidHeight = 240;
        vidPlayer.load("fingers.mov");
        vidPlayer.play();
        vidPlayer.setLoopState(OF_LOOP_NORMAL);
	#endif

    colorImg.allocate(vidWidth,vidHeight);
	grayImage.allocate(vidWidth,vidHeight);
	grayBg.allocate(vidWidth,vidHeight);
	grayDiff.allocate(vidWidth,vidHeight);

	bLearnBakground = true;
	threshold = 80;
}

//--------------------------------------------------------------
void ofApp::update(){
	ofBackground(100,100,100);

    bool bNewFrame = false;

	#ifdef _USE_LIVE_VIDEO
       vidGrabber.update();
	   bNewFrame = vidGrabber.isFrameNew();
    #else
        vidPlayer.update();
        bNewFrame = vidPlayer.isFrameNew();
	#endif

	if (bNewFrame){

		#ifdef _USE_LIVE_VIDEO
            colorImg.setFromPixels(vidGrabber.getPixels());
	    #else
            colorImg.setFromPixels(vidPlayer.getPixels());
        #endif

        grayImage = colorImg;
		if (bLearnBakground == true){
			grayBg = grayImage;		// the = sign copys the pixels from grayImage into grayBg (operator overloading)
			bLearnBakground = false;
		}

		// take the abs value of the difference between background and incoming and then threshold:
		grayDiff.absDiff(grayBg, grayImage);
		grayDiff.threshold(threshold);

		// find contours which are between the size of 20 pixels and 1/3 the w*h pixels.
		// also, find holes is set to true so we will get interior contours as well....
		contourFinder.findContours(grayDiff, 20, (vidWidth*vidHeight)/3, 10, true);	// find holes
	}

}

//--------------------------------------------------------------
void ofApp::draw(){

	// draw the incoming, the grayscale, the bg and the thresholded difference
	ofSetHexColor(0xffffff);
	colorImg.draw(20,20);
	grayImage.draw(360,20);
	grayBg.draw(20,280);
	grayDiff.draw(360,280);

	// then draw the contours:

	ofFill();
	ofSetHexColor(0x333333);
	ofDrawRectangle(360,540,vidWidth,vidHeight);
	ofSetHexColor(0xffffff);

	// we could draw the whole contour finder
	//contourFinder.draw(360,540);

	// or, instead we can draw each blob individually from the blobs vector,
	// this is how to get access to them:
    for (int i = 0; i < contourFinder.nBlobs; i++){
        contourFinder.blobs[i].draw(360,540);
		
		// draw over the centroid if the blob is a hole
		ofSetColor(255);
		if(contourFinder.blobs[i].hole){
			ofDrawBitmapString("hole",
				contourFinder.blobs[i].boundingRect.getCenter().x + 360,
				contourFinder.blobs[i].boundingRect.getCenter().y + 540);
		}
    }

	// finally, a report:
	ofSetHexColor(0xffffff);
	stringstream reportStr;
	reportStr << "bg subtraction and blob detection" << endl
			  << "press ' ' to capture bg" << endl
			  << "threshold " << threshold << " (press: +/-)" << endl
			  << "num blobs found " << contourFinder.nBlobs << ", fps: " << ofGetFrameRate();
	ofDrawBitmapString(reportStr.str(), 20, 600);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	switch (key){
		case ' ':
			bLearnBakground = true;
			break;
		case '+':
			threshold ++;
			if (threshold > 255) threshold = 255;
			break;
		case '-':
			threshold --;
			if (threshold < 0) threshold = 0;
			break;
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
