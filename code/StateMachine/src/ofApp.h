#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
    /// All the different states we have in our sketch
    enum State {
        Start_State = 0,
        Waving_State = 1,
        Still_State = 2,
        Pulsing_State = 3,
        Last_State = 4
    };

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
    
        void changeToState(State newState);
        void transitionToState(State newState, float transitionSeconds);
    
    /// We keep track of the current state and the state we came from
    int _currentState;
    int _oldState;
    
    /// We allow for a transition time for the motion to be smoothed from the previous state
    bool _isTransitioning;
    float _transitionLength;
    float _transitionStartTime;
    
    /// The current center of the circle, this can lag behind the target position
    ofPoint _currentCenter;
    /// Where the circle is going to based off the current state
    ofPoint _targetCenter;
    /// The amount of smoothing to apply during the transition
    float _centerSmoothing;
    
    /// Current radius, can lag behind the target radius
    float _currentRadius;
    float _targetRadius;
    float _radiusSmoothing;
};
