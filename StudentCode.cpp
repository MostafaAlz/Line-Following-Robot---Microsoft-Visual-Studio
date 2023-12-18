#include <iostream>
#include "StudentCode.h"
#include "Rover.h"

using namespace std;

void StudentCode(bool sensor1, bool sensor2, bool sensor3, bool sensor4, bool sensor5)
{
	int leftWheel;
	int rightWheel;

	// -------- Insert code to affect control here --------------

	if (sensor1 == false && sensor2 == false && sensor3 == false && sensor4 == false && sensor5 == false)
	{

		leftWheel = 2;
		rightWheel = 2;
	}
	else if (sensor1 == false && sensor2 == false && sensor3 == false && sensor4 == false && sensor5 == true)
	{
		leftWheel = 2;
		rightWheel = 0;
	}
	else if (sensor1 == false && sensor2 == false && sensor3 == false && sensor4 == true && sensor5 == true)
	{
		leftWheel = 2;
		rightWheel = 0;
	}
	else if (sensor1 == false && sensor2 == false && sensor3 == true && sensor4 == true && sensor5 == true)
	{
		leftWheel = 2;
		rightWheel = 0;
	}
	else if (sensor1 == false && sensor2 == true && sensor3 == true && sensor4 == true && sensor5 == true)
	{
		leftWheel = 2;
		rightWheel = 0;
	}
	else if (sensor1 == true && sensor2 == true && sensor3 == true && sensor4 == true && sensor5 == true)
	{
		leftWheel = 2;
		rightWheel = 0;
	}
	else if (sensor1 == true && sensor2 == false && sensor3 == false && sensor4 == true && sensor5 == true)
	{
		leftWheel = 2;
		rightWheel = 0;
	}
	else if (sensor1 == false && sensor2 == false && sensor3 == false && sensor4 == true && sensor5 == false)
	{
		leftWheel = 2;
		rightWheel = 2;
	}
	else if (sensor1 == false && sensor2 == false && sensor3 == true && sensor4 == true && sensor5 == false)
	{
		leftWheel = 0;
		rightWheel = 2;
	}
	else if (sensor1 == false && sensor2 == true && sensor3 == true && sensor4 == true && sensor5 == false)
	{
		leftWheel = 0;
		rightWheel = 2;
	}
	else if (sensor1 == true && sensor2 == true && sensor3 == true && sensor4 == true && sensor5 == false)
	{
		leftWheel = 1;
		rightWheel = 2;
	}
	else if (sensor1 == true && sensor2 == true && sensor3 == true && sensor4 == false && sensor5 == false)
	{
		leftWheel = 0;
		rightWheel = 2;
	}
	else if (sensor1 == false && sensor2 == true && sensor3 == true && sensor4 == false && sensor5 == false)
	{
		leftWheel = 2;
		rightWheel = 2;
	}
	else if (sensor1 == true && sensor2 == true && sensor3 == false && sensor4 == false && sensor5 == false)
	{
		leftWheel = 0;
		rightWheel = 2;
	}
	else if (sensor1 == true && sensor2 == false && sensor3 == false && sensor4 == false && sensor5 == false)
	{
		leftWheel = 0;
		rightWheel = 2;
	}
	else if (sensor1 == false && sensor2 == true && sensor3 == false && sensor4 == false && sensor5 == false)
	{
		leftWheel = 2;
		rightWheel = 2;
	}
	// ----------------------------------------------------------------

	cout << "[" << sensor1 << "|" << sensor2 << "|" << sensor3 << "|" << sensor4 << "|" << sensor5 << "],[" << leftWheel << "|" << rightWheel << "]" << endl;

	// comment out for continuous execution
	cout << "<enter> to continue: ";
	cin.ignore();

	Control(leftWheel, rightWheel);
}
