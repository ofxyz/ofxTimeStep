#include "ofxTimeStep.h"

ofxTimeStep::ofxTimeStep(): m_TimeStep(0.0f){
	reset();
}

void ofxTimeStep::update() 
{
	m_TimeStep = elapsed();
	reset();
}

float ofxTimeStep::getTimeStep()
{
	return m_TimeStep;
}

float ofxTimeStep::elapsed()
{
	return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - m_Start).count() * 0.0000001f;
}

void ofxTimeStep::reset() {
	m_Start = std::chrono::high_resolution_clock::now();
}
