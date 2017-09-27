#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //1 - OPENFRAMEWORKS
    // >> COMPILES
    
    //2 - VERTEX SHADER
    // >> WHERE THINGS ARE (vertices)
    
    //3 - FRAGMENT SHADER
    // >> WHAT THINGS SHOULD LOOK LIKE (pixels);
    
    //we load our shader, which should be in 'bin/data/'
    shader.load("position.vert", "appearance.frag");
    
    //we need to feed it data, so we create a plane, that we will then process
    plane.set(1024, 768, 40, 40);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofTranslate(ofGetWindowWidth()*0.5, ofGetWindowHeight()*0.5);
    
    
    //begin using our shader
    shader.begin();
    
    //pass it to our uniform variable uTime, declared in both frag and vert shaders
    shader.setUniform1f("uTime", ofGetElapsedTimef());
    
    //once we've processed all the data, draw the plane
    plane.draw();
    
    //and make sure we finish properly
    shader.end();
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
