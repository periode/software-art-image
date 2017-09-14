#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup("color"); //create the gui object and give it a title
    gui.add(value1.setup("value 1", 0.01, 0, 40)); //it creates a slider object, and adds it to the gui
    gui.add(value2.setup("value 2", 10, 0, 255));
    gui.add(value3.setup("value 3", 100, 0, 255));
    gui.add(value4.setup("value 4", 1, 0, 255));
    
    numVertices = 200;
    for(int i = 0; i < numVertices; i++){
        offsets.push_back(ofRandom(2));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    backgroundColor.setHsb(value1, value2, value3);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofSetColor(ofColor(value2, value3, value4));
    
    
    if(isSaving){
        ofBeginSaveScreenAsPDF("print-"+ofToString(ofGetElapsedTimeMicros())+".pdf");
    }
    
   
    
    ofPushMatrix();
    ofTranslate(200, 200);
    ofBeginShape();
    //this is where we draw all the points of our circle
    float radius = 100;
    float step = TWO_PI/numVertices;
    for(int i = 0; i < numVertices; i++){
        ofVertex(cos(i*step)*radius*offsets[i], sin(i*step)*radius+offsets[i]);
    }
    ofEndShape();
    ofPopMatrix();
    
    if(isSaving){
        ofEndSaveScreenAsPDF();
        isSaving = false;
    }
    
    
    
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 'r'){
        offsets.clear();
        
        for(int i = 0; i < numVertices; i++){
            offsets.push_back(ofRandom(value1));
        }
    }
    
    if(key == 's'){
        isSaving = true;
    }

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
