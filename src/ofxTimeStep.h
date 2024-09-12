#pragma once

#include <chrono>

// Version 0.5

class ofxTimeStep
{
public:
	ofxTimeStep();

	void update(); // Call every frame
	float lastFrameSeconds();
	float lastFrameMicros();
	float lastFrameMillis();

	// Use as timer
	float timerMinutes();
	float timerSeconds();
	float timerMicros();
	float timerMillis();
	void reset();

private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_Step;
	std::chrono::time_point<std::chrono::high_resolution_clock> m_Start;
	float m_TimeStep;
};
