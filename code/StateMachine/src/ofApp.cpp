#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    _currentState = Start_State;
    _oldState = Start_State;
    _isTransitioning = false;
    
    _radiusSmoothing = 0.1;
    _centerSmoothing = 0.1;
    
    ofLog() << "Start state: " << _currentState << endl;
        
    ofSetBackgroundColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // Update the target values based on the current state
    switch (_currentState) {
        case Start_State: {
            // Initialize our values
            _currentCenter.x = ofGetWidth() / 2;
            _currentCenter.y = ofGetHeight() / 2;
            _targetCenter = _currentCenter;
            
            _currentRadius = 20;
            _targetRadius = _currentRadius;
        }
        break;
            
        case Waving_State: {
            _targetCenter.x = ofMap(sin(ofGetElapsedTimef()), -1, 1, ofGetWidth() * 0.25, ofGetWidth() * 0.75);
        }
        break;
            
        case Still_State: {
            // Nada
        }
        break;
            
        case Pulsing_State: {
            _targetRadius = ofMap(sin(ofGetElapsedTimef()), -1, 1, 15, 50);
        }
        break;
            
    }
    
    // If we're transitioning, smooth the position
    if (_isTransitioning) {
        // We use exponential smoothing, but you could also lerp, etc.
        _currentRadius = _radiusSmoothing * _currentRadius + (1 - _radiusSmoothing) * _targetRadius;
        _currentCenter.x = _centerSmoothing * _currentCenter.x + (1 - _centerSmoothing) * _targetCenter.x;
        _currentCenter.y = _centerSmoothing * _currentCenter.y + (1 - _centerSmoothing) * _targetCenter.y;
        
        // Check if the transition time is over
        if (ofGetElapsedTimef() > (_transitionStartTime + _transitionLength)) {
            // Transition is over
            _isTransitioning = false;
        }
        
    } else {
        // Not transitioning, so take the values directly without
        // any smoothing
        _currentRadius = _targetRadius;
        _currentCenter = _targetCenter;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    // Draw the circle from the current values
    ofSetColor(ofColor::darkRed);
    ofDrawCircle(_currentCenter, _currentRadius);
    
    // Some debugging info
    ofSetColor(200);
    ofDrawBitmapString("Current state: " + ofToString(_currentState), 20, ofGetHeight() - 40);
    ofDrawBitmapString("Old state: " + ofToString(_oldState), 20, ofGetHeight() - 20);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    /*
     * Keys:
     * 0-3 - change state immediately, no smoothing
     * 5-7 - change state with transition smoothing
     */

    switch (key) {
        case '0':
            changeToState(Start_State);
            break;
            
        case '1':
            changeToState(Waving_State);
            break;
            
        case '2':
            changeToState(Still_State);
            break;
            
        case '3':
            changeToState(Pulsing_State);
            break;
            
        case '5':
            transitionToState(Waving_State, 3);
            break;

        case '6':
            transitionToState(Still_State, 3);
            break;

        case '7':
            transitionToState(Pulsing_State, 3);
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


//--------------------------------------------------------------
/// Change state immediately
void ofApp::changeToState(State newState){
    _oldState = _currentState;
    _currentState = newState;
    _isTransitioning = false;
}

//--------------------------------------------------------------
/// Transition to new state with transition time
void ofApp::transitionToState(State newState, float transitionSeconds){
    _oldState = _currentState;
    _currentState = newState;
    _transitionLength = transitionSeconds;
    _transitionStartTime = ofGetElapsedTimef();
    _isTransitioning = true;
}

