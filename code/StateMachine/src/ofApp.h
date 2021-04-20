#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
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
    
    int _currentState;
    int _oldState;
    bool _isTransitioning;
    float _transitionLength;
    float _transitionStartTime;
    
    ofPoint _currentCenter;
    ofPoint _targetCenter;
    float _centerSmoothing;
    
    float _currentRadius;
    float _targetRadius;
    float _radiusSmoothing;
};
