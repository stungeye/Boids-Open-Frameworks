#include <iostream>

#include "ofApp.h"

//--SETUP------------------------------------------------------------
void ofApp::setup(){
	ofHideCursor();               // Hide the OS mouse pointer.
	ofBackground(ofColor::white); // Set a white background.

	// Setup the Boids. The Mouser is built in the header file.
	boids.reserve(NUMBER_OF_BOIDS);

	for (auto i = 0; i < NUMBER_OF_BOIDS; ++i) {
		boids.push_back(Boid(
			ofRandomHeight(),
			ofRandomWidth(),
			ofColor::darkorange, // fill color
			theMouse,            // the Mouser
			boids				 // the boids vector
		));
	}
}

//--UPDATE------------------------------------------------------------
void ofApp::update(){
	// Update the mouse and the boids.
	theMouse.update();
	for (auto& boid : boids) {
		boid.update();
	}
}

//--DRAW------------------------------------------------------------
void ofApp::draw(){
	// Draw the mouse and the boids.
	theMouse.draw();
	for (const auto& boid : boids) {
		boid.draw();
	}
}
