#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(240, 240, 240);
    for (int i=0; i<NUM_CIRCLES; i++) {
        angle[i]=ofRandom(0,TWO_PI);
    }
}

//--------------------------------------------------------------
void testApp::update(){
    for (int i=0; i < flowers.size(); i++){
		flowers[i].updateMe();
	}
}

//--------------------------------------------------------------
void testApp::draw(){
    for (int i=0; i < flowers.size(); i++){
		flowers[i].drawMe();
	}
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    Flower tempFlower;
    tempFlower.pos = ofPoint(x, y);
    flowers.push_back(tempFlower);// add an element in Flower vector called tempFlower
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
