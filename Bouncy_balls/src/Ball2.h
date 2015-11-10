
#define _BALL2

#include "ofMain.h"

class Ball2 {

public:

    Ball2();

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
