#include <iostream>

#include "ofApp.h"

//--SETUP------------------------------------------------------------
void ofApp::setup(){
	ofHideCursor();               // Hide the OS mouse pointer.
	ofBackground(ofColor::white); // Set a white background.

	// Setup the Boid. The Mouser is built in the header file.
	theBoid.setup(
		ofGetHeight() / 2,   // middle x position 
		ofGetWidth() / 2,    // middle y position
		ofColor::darkorange, // fill color
		theMouse             // the Mouser
	);
}

//--UPDATE------------------------------------------------------------
void ofApp::update(){
	// Update the mouse and the boid.
	theMouse.update();
	theBoid.update();
}

//--DRAW------------------------------------------------------------
void ofApp::draw(){
	// Draw the mouse and the boid.
	theMouse.draw(theBoid.getLocation());
	theBoid.draw();
}
