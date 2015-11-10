#include "ofApp.h"
#define control1 2
#define control2 3
#define PIN_LED 12
#define PIN_POTMETER 0

void ofApp::setup() {
    // set listener - call ofApp::setupArduino when arduino is ready for use
    ofAddListener(arduino.EInitialized, this, &ofApp::setupArduino);
 ofBackground(25,25,25);
    // connect to the Arduino
    // use the same device name used in the Arduino IDE
    arduino.connect("COM3");
    arduino.sendFirmwareVersionRequest(); // workaround for ofArduino/firmata bug
   verdana14.loadFont("verdana.ttf", 14, true, true);
	verdana14.setLineHeight(18.0f);
	verdana14.setLetterSpacing(1.037);

}

void ofApp::update() {
    arduino.update();

}

void ofApp::draw() {
//ofLog(OF_LOG_NOTICE,"control1 is=" + ofArduino1, 10);


ofSetColor(225);

	verdana14.drawString(typeStr, 30, 111);
std::string control1string1 = std::to_string(ofArduino1);


// an array of chars
//sprintf(control1str, "control1: %f", ofArduino1);
// printf("control1", control1string);
verdana14.drawString(control1string, 100,100);
ofLog(OF_LOG_NOTICE,control1string, 10);





}

void ofApp::setupArduino(const int& version) {
    // remove listener because we don't need it anymore
    ofRemoveListener(arduino.EInitialized, this, &ofApp::setupArduino);

    // print firmware name and version to the console
    ofLogNotice() << "Arduino firmware found: " << arduino.getFirmwareName()
                  << " v" << arduino.getMajorFirmwareVersion() << "."  << arduino.getMinorFirmwareVersion();

    arduino.sendDigitalPinMode(PIN_LED, ARD_OUTPUT);

    arduino.sendAnalogPinReporting(PIN_POTMETER, ARD_ANALOG);
    arduino.sendAnalogPinReporting(control1, ARD_ANALOG);
    arduino.sendAnalogPinReporting(control2, ARD_ANALOG);

    // set listeners for pin events
    ofAddListener(arduino.EDigitalPinChanged, this, &ofApp::digitalPinChanged);
    ofAddListener(arduino.EAnalogPinChanged, this, &ofApp::analogPinChanged);
}

void ofApp::digitalPinChanged(const int& pinNum) {
    // get value with arduino.getDigital(pinNum)
    ofLogNotice() << "Digital Pin " << pinNum << " value: " << arduino.getDigital(pinNum) << endl;
}

void ofApp::analogPinChanged(const int& pinNum) {
    // get value with arduino.getAnalog(pinNum));
    ofLogNotice() << "Analog Pin " << pinNum << " value: " << arduino.getAnalog(pinNum) << endl;
  ofArduino1=arduino.getAnalog(control1);
ofArduino2=arduino.getAnalog(control2);

}


void ofApp::mousePressed(int x, int y, int button) {
    // switch the LED on
    arduino.sendDigital(PIN_LED, ARD_HIGH);
}

void ofApp::mouseReleased(int x, int y, int button) {
    // switch the LED off
    arduino.sendDigital(PIN_LED, ARD_LOW);
}
void ofApp::keyPressed(int key){

	if(key == OF_KEY_DEL || key == OF_KEY_BACKSPACE){
		typeStr = typeStr.substr(0, typeStr.length()-1);
	}
	else if(key == OF_KEY_RETURN ){
		typeStr += "\n";
	}else{
		if( bFirst ){
			typeStr.clear();
			bFirst = false;
		}
		typeStr.append(1, (char)key);
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


//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
