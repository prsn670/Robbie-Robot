#include "stdafx.h"
#include "build_robot.h"
#include "robot_model.h"
#include "robot_torso.h"
#include "robot_arm.h"
#include "robot_battery.h"
#include "robot_head.h"
#include "robot_locomotor.h"
#include "iostream"
#include "vector"

using namespace std;

void build_base()//build the common data for each component
{
	string str, desc;
	double lbs, money;
	int part;
	static int i = 0;
	string enter_data[] = { "Please enter data for torso component\n", "Please enter data for head component\n", "Please enter data for arm component\n", "Please enter data for locomotor component\n", "Please enter data for battery component\n" };
	
	cout << enter_data[i];
	cout << "Please enter the name of the part: ";
	getline(cin, str);
	cout << "Please enter the weight of the item: ";
	cin >> lbs;
	cin.ignore(100, '/n');
	cout << "Please enter the cost of the item: ";
	cin >> money;
	cout << "Please enter the part number of the item: ";
	cin >> part;
	cin.ignore(100, '\n');
	cout << "Please enter a brief description of the item: ";
	getline(cin, desc);

	if (i == 0)
	{
		build_torso(str, desc, lbs, money, part);
		++i;
	}

	else if (i == 0)
	{
		
		++i;
	}
}

void build_model()//collects data for model specific data
{
	int num;
	cout << "Please enter the model number: ";
	cin >> num;
}

void build_arm(string str, string desc, double lbs, double money, int part) //collect data specific to arm
{

}

void build_battery(string str, string desc, double lbs, double money, int part)//collect data specific to battery

{

}

void build_locomotor(string str, string desc, double lbs, double money, int part) //collect data specific to locomotor
{

}

void build_torso(string str, string desc, double lbs, double money, int part) //collect data specific to torso
{

}