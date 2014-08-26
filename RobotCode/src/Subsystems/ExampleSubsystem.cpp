#include "ExampleSubsystem.h"
#include "../RobotMap.h"
#include "../Commands/ExampleCommand.h"

ExampleSubsystem::ExampleSubsystem() :
		Subsystem("ExampleSubsystem")
{
	j = new Jaguar(0);
}

void ExampleSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.

	SetDefaultCommand(new ExampleCommand());
}

void ExampleSubsystem::Spin()
{
	this->j->Set(0.4);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

