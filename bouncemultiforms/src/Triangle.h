#ifndef _Triangle
#define _Triangle

#include "ofMain.h"

class Triangle {

public:

    Triangle();

    void setup();
    void update();
    void draw();

    // variables
    float x;
    float y;
    float speedY;
    float speedX;
    int radius;
    ofColor color;

private:

};
#endif
