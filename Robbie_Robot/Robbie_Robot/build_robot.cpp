#include "stdafx.h"
#include "build_robot.h"
#include "iostream"
#include "store.h"
#include "vector"
#include "list_robot.h"

using namespace std;

void build_base(int selection, class Store& store)//build the common data for each component
{
	
	string str, desc;
	double lbs, money;
	int part;
	//static int i = 0;
	//string enter_data[] = { "Please enter data for torso component\n", "Please enter data for head component\n", "Please enter data for arm component\n", "Please enter data for locomotor component\n", "Please enter data for battery component\n" };
	
	
	
	//cout << enter_data[i];
	cout << "Please enter the name of the part: ";
	cin.ignore(100, '\n');
	getline(cin, str);
	cout << "Please enter the weight of the item: ";
	cin >> lbs;
	cout << "Please enter the cost of the item: ";
	cin >> money;
	cout << "Please enter the part number of the item: ";
	cin >> part;
	cin.ignore(100, '\n');
	cout << "Please enter a brief description of the item: ";
	getline(cin, desc);

	if (selection == 1)
	{
		build_arm(str, lbs, money, part, desc, store);
		
	}

	else if (selection == 2)
	{
		build_battery(str, lbs, money, part, desc, store);
	}

	else if (selection == 3)
	{
		build_head(str, lbs, money, part, desc, store);
		
	}

	else if (selection == 4)
	{
		build_locomotor(str, lbs, money, part, desc, store);
	}

	else if (selection == 5)
	{
		build_torso(str, lbs, money, part, desc, store);
	}
}

void build_model(class Store& store)//collects data for model specific data
{
	int part, index;
	double lbs, money;
	string desc, name;
	cout << "Please enter the model number: ";
	cin >> part;
	cout << "Please enter a brief description of the robot model: ";
	cin.ignore(100, '\n');
	getline(cin, desc);
	cout << "Please enter a name for the robot model: ";
	getline(cin, name);
	store.store_model(name, 0, 0, part, desc);
	list_tor(store);
	cout << "Please select a torso for the robot model: ";
	cin >> index;
	store.rob.back()->set_index(5, index);
	list_loco(store);
	cout << "Please select a locomotor for your model: ";
	cin >> index;
	store.rob.back()->set_index(4, index);
	list_head(store);
	cout << "Please select a head for your model: ";
	cin >> index;
	store.rob.back()->set_index(3, index);
	list_batt(store);
	cout << "Please select a battery for your model: ";
	cin >> index;
	store.rob.back()->set_index(2, index);
	list_arm(store);
	cout << "Please select an arm for your model: ";
	cin >> index;
	store.rob.back()->set_index(1, index); //this line and above ask for parts that make up new model
	lbs = store.arm[store.rob.back()->get_index(1)]->get_weight() + (store.batt[store.rob.back()->get_index(2)]->get_weight() * (store.tor[store.rob.back()->get_index(5)]->get_battery())) + store.head[store.rob.back()->get_index(3)]->get_weight() + store.loco[store.rob.back()->get_index(4)]->get_weight() + store.tor[store.rob.back()->get_index(5)]->get_weight();
	money = store.arm[store.rob.back()->get_index(1)]->get_cost() + ((store.batt[store.rob.back()->get_index(2)]->get_cost())*(store.tor[store.rob.back()->get_index(5)]->get_battery())) + store.head[store.rob.back()->get_index(3)]->get_cost() + store.loco[store.rob.back()->get_index(4)]->get_cost() + store.tor[store.rob.back()->get_index(5)]->get_cost();
	store.rob.back()->set_weight(lbs);
	store.rob.back()->set_cost(money);

}

void build_arm(string str, double lbs, double money, int part, string desc, class Store& store)//collect data specific to arm
{
	
	int pow;
	cout << "Please enter the power consumption of the arm: ";
	cin >> pow;
	store.store_arm(str, lbs, money, part, desc, pow);
}

void build_battery(string str, double lbs, double money, int part, string desc, class Store& store) //collect data specific to battery
{
	
	int nrg;
	cout << "Please enter the amount of energy stored in the battery: ";
	cin >> nrg;
	store.store_batt(str, lbs, money, part, desc, nrg);
	
}

void build_head(string str, double lbs, double money, int part, string desc, class Store& store)
{
	store.store_head(str, lbs, money, part, desc);
}

void build_locomotor(string str, double lbs, double money, int part, string desc, class Store& store) //collect data specific to locomotor
{
	
	int pow, speed;
	cout << "Please enter the power consumption of the locomotor: ";
	cin >> pow;
	cout << "Please enter the max speed of the locomotor: ";
	cin >> speed;
	store.store_locomotor(str, lbs, money, part, desc, speed, pow);
}

void build_torso(string str, double lbs, double money, int part, string desc, class Store& store) //collect data specific to torso
{
	
	int amt;
	cout << "Please enter the number of batteries needed for this torso: ";
	cin >> amt;

	store.store_torso(str, lbs, money, part, desc, amt);
}