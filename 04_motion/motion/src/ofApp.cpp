#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    int number_of_movements = 3;
    for(int i = 0; i < number_of_movements; i++){
        movement.push_back(0);
    }
    
    start.set(ofRandom(ofGetWindowWidth()), ofRandom(ofGetWindowHeight()));
    finish.set(ofRandom(ofGetWindowWidth()), ofRandom(ofGetWindowHeight()));

}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    movement[0] = (height % ofGetWindowHeight());
    height += 10;
    
    //sin goes between -1 and 1
    //we need to "normalize it", i.e. to have it between 0 and 1
    //which means that we first add 1, then we divide it by half
    float sin_value = (sin(ofGetElapsedTimef())+1)*0.5;
    
    //now we multiply that range of 0-1 by the height in order to get the full range
    movement[1] = sin_value*ofGetWindowHeight();
    
    
    //LINEAR INTERPOLATION
    movement[2] = ofLerp(0, ofGetWindowHeight(), lerpValue);
    lerpValue += 0.01;
    
    ofLog() << ofToString(lerpValue);
    
    if(lerpValue > 1){
        lerpValue = 0;
        start.set(finish.x, finish.y);
        finish.set(ofRandom(ofGetWindowWidth()), ofRandom(ofGetWindowHeight()));
    }
    
    circlePoint.set(ofLerp(start.x, finish.x, pow(lerpValue, 2)), ofLerp(start.y, finish.y, pow(lerpValue, 2)));
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofSetColor(240, 50, 80);
    
//    for(int i = 0; i < movement.size(); i++){
//        ofDrawBitmapString(ofToString(movement[i]), 100*i, 10);
//        ofDrawRectangle(100+100*i, movement[i], 50, 50);
//    }
    
    ofDrawRectangle(circlePoint.x, circlePoint.y, 40, 40);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
