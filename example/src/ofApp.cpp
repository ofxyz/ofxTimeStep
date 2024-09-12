#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	ofGetBackgroundAuto();
}

//--------------------------------------------------------------
void ofApp::update(){
	ts.update();
	step += ts.getMillis();

	if (step > 300) {
		targetFPS = ceil(ofMap(sin(ofGetElapsedTimef()), -1, 1, 10, 60));
		step -= 300;
	}

	ofSetFrameRate(targetFPS);
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofClear(0, 0, 0);
	ofSetColor(0, 255, 0);
	ofDrawBitmapString("Target FPS: " + std::to_string(targetFPS) + " (Modulated)", 25,  30);
	ofDrawBitmapString("Actual FPS: " + std::to_string((int)ofGetFrameRate())     , 25,  50);
	ofDrawBitmapString("TimeStep (Seconds): " + std::to_string(ts.getSeconds() )  , 25,  80);
	ofDrawBitmapString("TimeStep (Micros) : " + std::to_string(ts.getMicros()  )  , 25, 100);
	ofDrawBitmapString("TimeStep (Millis) : " + std::to_string(ts.getMillis()  )  , 25, 120);

	static float x_without_ts = -200;
	static float x_with_ts = -200;
	
	x_without_ts += 2;
	x_with_ts += (10 * ts.getMicros());

	if (x_without_ts > ofGetWidth()) x_without_ts = -200;
	if (x_with_ts > ofGetWidth()) x_with_ts = -200;

	ofSetColor(255, 0, 0);
	ofDrawRectangle(x_without_ts, 150, 200, 200);

	ofSetColor(0, 0, 255);
	ofDrawRectangle(x_with_ts, 150, 200, 200);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
