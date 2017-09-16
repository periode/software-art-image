#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //setting up the GUI
    panel.setup("noise controls");
    panel.add(noiseStep.setup("step", 0.05, 0.001, 1)); //the step is the amount by which we increment from value to value
    panel.add(noiseCoeff.setup("coeff", 1, 0.1, 40)); //the coeff is the amount by which we multiply the computed noise value
    panel.add(noiseVal.setup("x", 0, 0, 10)); //the value is the additional dimension we go through
    
    panel.add(is1D.setup("1D", false)); //boolean toggle for 1D noise
    panel.add(is2D.setup("2D", true)); //boolean toggle for 2D noise
    
    
    //setting up the line attributes for 1-dimensional noise
    line.setStrokeWidth(2.0);
    line.setColor(ofColor::black);
    line.setFilled(false);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    if(is1D){
        line.clear();
        for(float i = 20; i < ofGetWidth()-20; i = i + 1){
            //the line we draw has a Y component that is based on the computed 2D noise value
            line.lineTo(i, (ofNoise(i*noiseStep, noiseVal)-0.5)*noiseCoeff);
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    
    if(is1D){
        ofPushMatrix();
        ofTranslate(0, ofGetHeight()*0.5f);
        line.draw();
        ofPopMatrix();
    }
    
    if(is2D){
        ofFill();
        int columns = 64;
        float xStep = ofGetWidth()/columns;
        int rows = 64;
        float yStep = ofGetHeight()/rows;
        for(int x = 0; x < columns; x++){
            for(int y = 0; y < rows; y++){
                //the rectangles we draw in a 2D array have a shade of gray based on the computed 3D noise
                ofSetColor(ofNoise(x*noiseStep, y*noiseStep, noiseVal)*255*noiseCoeff);
                
                ofDrawRectangle(x*xStep, y*yStep, xStep, yStep);
            }
        }
    }
    
    
    //we don't forget to draw the GUI
    panel.draw();
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
