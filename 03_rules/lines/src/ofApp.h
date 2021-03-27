#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
    ofPolyline line;
    vector<ofPolyline> threads;
    vector <glm::vec3> initial_points;
    
    int resolution = 100;
    int numberOfThreads = 100;
    
    float noiseStep = 0.01;
    float noiseCoeff = 10;

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
