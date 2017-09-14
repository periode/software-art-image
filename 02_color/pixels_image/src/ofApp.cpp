#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    img.load("airport.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //we want to go through all the pixels in our image
    for(int x = 0; x < img.getWidth(); x++){
        for(int y = 0; y < img.getHeight(); y++){
            ofColor col = img.getColor(x, y);
            
            if(col.r < 255){
                col.r+= 2*(x/img.getWidth())*10*speed;
            }else{
                col.r = 0;
            }
            
            if(col.g < 255){
                col.g += 1.5*speed;
            }else{
                col.g = 0;
            }
            
            if(col.b < 255){
                col.b += 0.5*speed;
            }else{
                col.b = 0;
            }
            
            img.setColor(x, y, col);
        }
    }
    
    img.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    img.draw(0, 0);
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
