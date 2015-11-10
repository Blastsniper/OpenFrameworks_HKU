#ifndef _Square
#define _Square

#include "ofMain.h"

class Square {

public:

    Square();

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
