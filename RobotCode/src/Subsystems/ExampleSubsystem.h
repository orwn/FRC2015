#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ExampleSubsystem: public Subsystem
{
private:
	Jaguar* j;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	ExampleSubsystem();
	void InitDefaultCommand();
	void Spin();

};

#endif
