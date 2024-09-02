#pragma once

#include <chrono>

class ofxTimeStep
{
public:
	ofxTimeStep();

	// New Frame ...
	void update();

	float getTimeStep();

private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_Start;
	float m_TimeStep;
	float elapsed();
	void reset();
};
