#include "ofxTimeStep.h"

ofxTimeStep::ofxTimeStep(): m_TimeStep(0.0f)
{
	m_Step = std::chrono::high_resolution_clock::now();
	reset();
}

void ofxTimeStep::update() 
{
	m_TimeStep = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - m_Step).count();
	m_Step = std::chrono::high_resolution_clock::now();
}

float ofxTimeStep::lastFrameSeconds() {
	return m_TimeStep * 0.001;
}

float ofxTimeStep::lastFrameMicros()
{
	return m_TimeStep * 0.01;
}

float ofxTimeStep::lastFrameMillis() {
	return m_TimeStep;
}

float ofxTimeStep::timerMinutes() {
	return std::chrono::duration_cast<std::chrono::minutes>(std::chrono::high_resolution_clock::now() - m_Start).count();
}

float ofxTimeStep::timerSeconds() {
	return std::chrono::duration_cast<std::chrono::seconds>(std::chrono::high_resolution_clock::now() - m_Start).count();
}

float ofxTimeStep::timerMicros() {
	return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - m_Start).count();
}

float ofxTimeStep::timerMillis()
{
	return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - m_Start).count();
}

void ofxTimeStep::reset() {
	m_Start = std::chrono::high_resolution_clock::now();
}
