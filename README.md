# The Seeker - Boid Seeks Mouse

Mouse seeking behavious modeled using location, velocity and acceleration. 

Built with an intent to learn the [openFrameworks C++ creative coding toolkit](https://openframeworks.cc/).

![SeekerBoid.exe Demo](seeker.gif)

# Source Code

A C++ program written in the standard `setup/update/draw` [openFrameworks](https://openframeworks.cc/) style:

* ofApp.cpp - The app setup along with its update/draw loop.
* ofApp.h - Two variables for the main app: `Boid theBoid` and `Mouser theMouse`

### The Boid Source

* boid.cpp - Seeking behaviour and the code to draw the seeker as a circle with line nose: O- 
* boid.h - Object props for location, velocity and acceleration. Constants to change behaviour and draw.

### The Mouser Source

* Mouser.cpp - A circular pointer that tracks the x/y location of the mouse.
* Mouser.h - Object prop for location. Constants to change the way the mouse pointer is drawn.

### Main Line

* main.cpp - The openFramework generated mainline.
