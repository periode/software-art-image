#include "ofApp.h" //here we tell OF what is our related header file

//---------------------here we initialize our variables
void ofApp::setup(){
    
    circleRadius = 100.0;
    
    circlePosition.set(ofGetWidth()*0.5, ofGetHeight()*0.5);
    
    circleColor.set(84, 158, 231);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(200, 180, 65);
    
    //you need to say what kind of coloring you want (equivalent to just having a stroke or not
    ofFill();
    
    //then you specify the color
    ofSetColor(circleColor);
    
    //then you draw the circle, specifying x, y, rad, rad
    ofDrawCircle(circlePosition.x, circlePosition.y, circleRadius, circleRadius);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
