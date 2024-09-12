ofxTimeStep
===========

![thumb](ofxaddons_thumbnail.png)

Get your steps in time regardless of frame rate.

  - Call `update()` every frame
  - Use `getSeconds()`, `getMicros()`, `getMillis()` to get the frame delta.


Use as timer:

	ofxTimeStep timer;
	timer.elapsedMillis();
	timer.reset();

> Did you see ofGetLastFrameTime()?

