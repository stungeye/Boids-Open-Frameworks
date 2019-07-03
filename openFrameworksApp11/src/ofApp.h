#pragma once

#include "ofMain.h"
#include "boid.h"
#include "Mouser.h"

class ofApp : public ofBaseApp{

	// One Boid (a Seeker) and a Mouser.
	Boid theBoid;
	Mouser theMouse;

	public:
		void setup();
		void update();
		void draw();
};
