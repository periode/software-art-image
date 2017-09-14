#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{
    
    ofxPanel gui;
    ofxSlider<float> value1;
    ofxSlider<float> value2;
    ofxSlider<float> value3;
    ofxSlider<float> value4;
    
    ofColor backgroundColor;
    
    vector<float> offsets;
    int numVertices;
    
    bool isSaving = false;

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
		
};
