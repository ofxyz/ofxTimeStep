#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
	ts.update();
	targetFPS = ofMap(sin(ofGetElapsedTimef()), -1, 1, 10, 60);
	ofSetFrameRate(targetFPS);
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(255, 255, 0);
	ofDrawBitmapString("Target FPS (Modulated): " + std::to_string(targetFPS), 25, 30);
	ofDrawBitmapString("Actual FPS: " + std::to_string(ofGetFrameRate()), 25, 50);
	ofDrawBitmapString("TimeStep (Cents): " + std::to_string(ts.getTimeStep()), 25, 70);
	ofDrawBitmapString("TimeStep (Millis): " + std::to_string(ts.getMillis()), 25, 90);
	ofDrawBitmapString("TimeStep (Seconds): " + std::to_string(ts.getSeconds()), 25, 110);

	static float x_without_ts = -200;
	static float x_with_ts = -200;
	
	x_without_ts += 5;
	x_with_ts += (5 * ts.getTimeStep());

	if (x_without_ts > ofGetWidth()) x_without_ts = -200;
	if (x_with_ts > ofGetWidth()) x_with_ts = -200;

	ofSetColor(255, 0, 0);
	ofDrawRectangle(x_without_ts, 120, 200, 200);

	ofSetColor(0, 255, 0);
	ofDrawRectangle(x_with_ts, 120, 200, 200);

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
