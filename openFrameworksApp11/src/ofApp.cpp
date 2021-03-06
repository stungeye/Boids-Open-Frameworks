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
			the_mouse,            // the Mouser
			boids,				 // the boids vector
			params
		));
	}
}

//--UPDATE------------------------------------------------------------
void ofApp::update(){
	// Update the mouse and the boids.
	the_mouse.update();
	for (auto& boid : boids) {
		boid.update();
	}
}

//--DRAW------------------------------------------------------------
void ofApp::draw(){
	// Draw the mouse and the boids.
	the_mouse.draw();
	for (const auto& boid : boids) {
		boid.draw();
	}

	if (show_gui) {
		params.draw();
	}
}

void ofApp::keyReleased(int key) {
	if (key == 'g') {
		show_gui = !show_gui;
		
		if (show_gui) {
			ofShowCursor();
		} else {
			ofHideCursor();
		}
	}
}
