#include "stdafx.h"
#include "robot_model.h"
#include "menu.h"
#include "store.h"
#include "iostream"
#include "vector"

using namespace std;


int main()
{
	char ch;
	Store store;
	main_menu(store);
	
	for(int i = 0; i < 1; i++)
	{
		//cout << "Your new robot model " << store.rob[i]->get_name() << "is comprised of:" << endl;
		cout << "Torso: " << store.tor[i]->get_name() << endl;
		cout << "head: " << store.head[i]->get_name() << endl;
		cout << "Arms: " << store.arm[i]->get_name() << endl;
		cout << "Locomotor: " << store.loco[i]->get_name() << endl;
		cout << "Battery: " << store.batt[i]->get_name() << endl;
	}

	cin >> ch;
	return 0;
}

