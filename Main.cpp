#include <iostream>
#include "Simulation.h"

using namespace std;

int main(int argc, char** argv)
{
	Simulation simulation;

	simulation.SetWindowSize(916, 916);
	simulation.SetTitle("Line Following Example");
	simulation.SetWindowPosition(100, 100);
	simulation.SetClock(33);

	simulation.InitializeSimulation(argc, argv);
	simulation.Run();

	return 0;
}