#pragma once

#include "ofMain.h"
#include "Mouser.h"

class Boid
{
	/* Play with these constants to tweak the seeking. */
	const float MAX_SPEED = 7;
	const float MAX_FORCE = 0.25;
	const float SLOW_APPROACH_RADIUS = 100;

	/* Want bigger Boids? Tiny ones? */
	const float DRAW_RADIUS = 10;
	const float DRAW_STROKE = 5;

	/* Private Properties */
	ofVec2f location;
	ofVec2f velocity;
	ofVec2f acceleration;
	ofColor color;
	Mouser* mouse;

public:
	void setup(float x, float y, ofColor color, Mouser &mouse);
	ofVec2f seek(ofVec2f targetLocation);
	void update();
	void draw();
	ofVec2f getLocation();
private:
	float headingInDegrees();
};

