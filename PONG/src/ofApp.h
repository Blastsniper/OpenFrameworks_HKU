#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include "ofMain.h"
#include "ofEvents.h"

class ofApp : public ofBaseApp {

public:

int ofArduino1;
int ofArduino2;

    void setup();
    void update();
    void draw();
	void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		bool bFirst;
		string typeStr;
		string control1string;

private:
    ofArduino	arduino;
ofTrueTypeFont myfont;
    void setupArduino(const int & version);
    void digitalPinChanged(const int & pinNum);
    void analogPinChanged(const int & pinNum);

			ofTrueTypeFont  franklinBook14;
		ofTrueTypeFont	verdana14;
		ofTrueTypeFont	verdana30;

		ofTrueTypeFont  franklinBook14A;
		ofTrueTypeFont	verdana14A;


};

