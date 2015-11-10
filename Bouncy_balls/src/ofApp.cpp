#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup() {
    for (int i=0; i<1; i++) {
        Ball2 newBall2;
        newBall2.setup();
        Ball2 newBall2;
        newBall2.setup();
        balls2.push_back(newBall2);
    }
}

//--------------------------------------------------------------
void ofApp::update() {
    for (int i=0; i<balls.size(); i++) {
        balls[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw() {
    for (int i=0; i<balls.size(); i++) {
        balls2[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int a) {
   Ball2 newBall2;
        newBall2.setup();

        balls2.push_back(newBall2);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
