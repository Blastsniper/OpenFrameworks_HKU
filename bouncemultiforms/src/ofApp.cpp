#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup() {
    for (int i=0; i<1; i++) {


    }
}

//--------------------------------------------------------------
void ofApp::update() {
    for (int i=0; i<balls.size(); i++) {
        balls[i].update();
    }
       for (int i=0; i<Triangles.size(); i++) {
        Triangles[i].update();
    }
       for (int i=0; i<Squares.size(); i++) {
        Squares[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw() {
    for (int i=0; i<balls.size(); i++) {
        balls[i].draw();
    }
        for (int i=0; i<Triangles.size(); i++) {
        Triangles[i].draw();
    }
        for (int i=0; i<Squares.size(); i++) {
        Squares[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

if (key == 'a') {
int randomNumber = (int) ofRandom(0,3);

if (randomNumber == 1){
     Ball newBall;
        newBall.setup();

        balls.push_back(newBall);
        }
        else if (randomNumber == 2){
                    Triangle newTriangle;
        newTriangle.setup();

        Triangles.push_back(newTriangle);
        }
        else {
                Square newSquare;

        newSquare.setup();

        Squares.push_back(newSquare); }

}
if (key == 'd'){
if (balls.size() > 0)
{
balls.erase( balls.begin() );
}
if (Triangles.size() > 0 ){
Triangles.erase( Triangles.begin() );
}
if (Squares.size() > 0){
Squares.erase( Squares.begin() );}
}








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
