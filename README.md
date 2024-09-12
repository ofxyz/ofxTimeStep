ofxTimeStep
===========

![thumb](ofxaddons_thumbnail.png)

Get your steps in time regardless of frame rate.

  - Call `update()` every frame
  - Use `lastFrameSeconds()`, `lastFrameMicros()`, `lastFrameMillis()` to get the frame delta.


Use as timer:

	ofxTimeStep timer;
	timer.timerMillis();
	timer.reset();

> Did you see ofGetLastFrameTime()?
