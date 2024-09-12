#pragma once

#include <chrono>

// Version 0.3

class ofxTimeStep
{
public:
	ofxTimeStep();

	void update(); // Call every frame
	float getSeconds();
	float getMicros();
	float getMillis();

	// Use as timer
	float elapsedMillis();
	void reset();

private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_Step;
	std::chrono::time_point<std::chrono::high_resolution_clock> m_Start;
	float m_TimeStep;
};
