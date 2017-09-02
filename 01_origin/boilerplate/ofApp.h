#pragma once //this line makes sure that you are only compiling the necessary files once

#include "ofMain.h" //this line tells the compiler that some of the code that we are going to use is going to be in ofMain.h, another header file that belongs to OF, and that we should usually not touch.


class ofApp : public ofBaseApp{ //basic definition of a class
    
    //here we declare all of our variables and functions
    //either as private or public. most of the time, you will want them to be public
	public:
    
        //these are very similar to Processing/P5 functions
		void setup();
		void update();
		void draw();
    
    
        //all of these are helper functions provided by OF
        //if you don't want them in your code, you need to delete them
        //both in this .h file and in the .cpp file
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    float circleRadius; //one variable we will use, so we declare it here
    ofVec2f circlePosition; //a 2-dimensional vector variable, similar to PVector
    ofColor circleColor; //a variable that holds color information
};
