#include "menu.h"
#include "stdafx.h"
#include "iostream"
#include "build_robot.h"
#include "list_robot.h"

using namespace std;


void create_part_sub(class Store &store)
{
	bool valid = false;
	int selection;
	while (!valid)
	{
		cout << "1. Create Robot Arm" << endl;
		cout << "2. Create Robot Battery" << endl;
		cout << "3. Create Robot Head" << endl;
		cout << "4. Create Robot Locomotor" << endl;
		cout << "5. Create Robot Torso" << endl;
		cout << "6. Back" << endl;

		cout << "Please make your selection: ";

		cin >> selection;
		
		

		if (selection >= 1 && selection <= 5)
		{
			build_base(selection, store);
			valid = true;
		}

		else if (selection == 6)
		{
			return;
		}

		else
		{
			cout << "Invalid entry." << endl << endl;
			valid = false;
		}
	}
}

void create_menu(class Store &store)
{
	bool valid = false;
	int selection;
	while(!valid)
	{ 
		cout << "1. Create Robot Model" << endl;
		cout << "2. Create Robot Part" << endl;
		cout << "3. Back" << endl << endl;

		cout << "Please make your selection: ";

		cin >> selection;
		

		if (selection == 1)
		{
			build_model(store);
			valid = true;
		}

		else if (selection == 2)
		{
			create_part_sub(store);
			valid = true;
		}

		else if (selection == 3)
		{
			return;
		}

		else
		{
			cout << "Invalid entry." << endl << endl;
			valid = false;
		}
	}
}

/*void create_robot_model_sub()
{
	bool valid = false;
	int selection;
	while (!valid)
	{
		cout << "1. Create model from existing parts" << endl;
		cout << "1. Create model from  parts" << endl;
	}
}*/



void list_menu(class Store& store)
{

}

void order_menu(class Store& store)
{

}

void main_menu(class Store &store)
{
	
	int selection = 0;
	while(selection != 3)
	{
		cout << "1. Create" << endl;
		cout << "2. Order" << endl;
		cout << "3. Quit" << endl;

		cin >> selection;

		if (selection == 1)
		{
			create_menu(store);
		}

		else if (selection == 2)
		{
			list_models(store);
		}

		else if (selection == 3)
		{
			return;
		}
		else if (selection == 99)//easter egg creates 2 parts of each type
		{
			build_arm("arm1", 2, 25, 12, "an arm", store);
			build_arm("arm2", 3, 35, 15, "an arm also", store);
			build_head("head1", 5, 30, 11, "Another part", store);
			build_head("head2", 5, 30, 11, "head-ass", store);
			build_battery("battery1", 1, 25, 58, "good battery", store);
			build_battery("battery2", 2, 40, 58, "beter battery", store);
			build_locomotor("loco1", 15, 50, 88, "likes to move it move it", store);
			build_locomotor("loco2", 15, 50, 39, "snorlax", store);
			build_torso("Chest", 30, 100, 50, "Upper body", store);
			build_torso("Torso2", 30, 150, 78, "Upper body", store);
		}
	}
}
