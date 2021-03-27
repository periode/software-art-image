#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    
    //first you need to load the specific image you want as a texture into your ofTexture object. make sure that image is a power of 2 (256x256/512x512/etc.)
    //by default, openframeworks looks into the data/ folder that is created with your project when you tell it to load things
    ofLoadImage(petalTexture, "petal.jpg");
    
    
    //here we set the type of mesh that we want
    //by drawing triangle strips, we're essentially asking it to be filled
    triangleMesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
    
    
    //all of these consist in adding (1) a vertex and (2) to what point on the texture should that vertex correspond. it's like setting up a table, and then pinning a tablecsloth on top of it.
    
    //if you want to play with the tint, alpha, you can set individual colors per vertex. if you don't want to have to edit textures all the time, you can also set a particular color PER VERTEX. the mesh will then transition from color to color very smoothly. try uncommenting the addColor lines
    
    
    triangleMesh.addVertex(ofVec3f(10, 10, 0));
    triangleMesh.addColor(ofColor(255, 255, 255, 255)); //fully visible
    triangleMesh.addTexCoord(ofVec2f(0, 0)); //pin the top left corner of our texture to that vertex
    

    triangleMesh.addVertex(ofVec3f(500, 500, 0));
    triangleMesh.addColor(ofColor(255, 255, 255, 120)); //half alpha
    triangleMesh.addTexCoord(ofVec2f(0, 512));//pin the top right corner of our texture to that vertex


    triangleMesh.addVertex(ofVec3f(130, 320, 0));
    triangleMesh.addColor(ofColor(255, 255, 255, 20)); //almost no alpha
    triangleMesh.addTexCoord(ofVec2f(512, 512));//pin the bottom right corner of our texture to that vertex
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //we want to use that texture
    petalTexture.bind();
    //we want to draw that mesh
    triangleMesh.draw();
    //now we don't want to use that texture anymore
    petalTexture.unbind();
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
