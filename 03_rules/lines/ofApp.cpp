#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    
    
    string verse = "andrija klaric";
    int seed = 0;
    
    for(int i = 0; i < verse.size(); i++){
        seed += (int)verse[i];
    }
    
    for(int y = 0; y < numberOfThreads; y++){// create each thread
        
        ofPolyline line;
        
        for(int x = 0; x < resolution; x++){//create each point in a thread
            line.curveTo(ofPoint(y*3+noiseCoeff*ofNoise(y*noiseStep*22.010002, x*noiseStep, seed), x));
        }
        
        threads.push_back(line);
    }
    
    
    initial_points = line.getVertices();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
//    line.clear();
//    
//    for(int i = 0; i < initial_points.size(); i++){
//        initial_points[i].set(ofNoise(i*0.1)*noiseCoeff, i);
//        line.curveTo(initial_points[i]);
//    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0);
    
    ofPushMatrix();
    ofTranslate(ofGetWindowWidth()*0.5, ofGetWindowHeight()*0.5);
    
    for(int i = 0; i < threads.size(); i++){
        threads[i].draw();
    }
    
    
    ofPopMatrix();
    
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
