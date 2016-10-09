#include "menu.h"
#include "stdafx.h"
#include "iostream"
#include "build_robot.h"

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
			/*create_robot_model_sub();*/
			build_model();
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
	int selection;
	cout << "1. Create" << endl;
	cout << "2. List" << endl;
	cout << "3. Quit" << endl;

	cin >> selection;

	if (selection == 1)
	{
		create_menu(store);
	}
	
}
