#include "stdafx.h"
#include "list_robot.h"
#include "store.h"
#include "iostream"
#include "iomanip"

using namespace std;
void list_arm(class Store& store)
{
	for (int i = 0; i < store.arm.size(); i++)
		{
			cout << i + 1 << ". " << store.arm[i]->get_name() << endl << endl;
		}
}

void list_batt(class Store& store)
{
	for (int i = 0; i < store.batt.size(); i++)
	{
		cout << i + 1 << ". " << store.batt[i]->get_name() << endl << endl;
	}
}

void list_head(class Store& store)
{
	for (int i = 0; i < store.head.size(); i++)
	{
		cout << i + 1 << ". " << store.head[i]->get_name() << endl << endl;
	}
}

void list_loco(class Store& store)
{
	for (int i = 0; i < store.loco.size(); i++)
	{
		cout << i + 1 << ". " << store.loco[i]->get_name() << endl << endl;
	}
}

void list_tor(class Store& store)
{
	for (int i = 0; i < store.tor.size(); i++)
	{
		cout << i + 1 << ". " << store.tor[i]->get_name() << endl << endl;
	}
}

void list_models(class Store& store)//lists models with associated parts
{
	cout << "Model Name     " << "Arm     " << "Battery     " << "Head      " << "Locomotor     " << "Torso     " << "Price     " << endl << endl;
	
	for (int i = 0; i < store.rob.size(); i++)
	{
		cout << i + 1 << ". " << setw(12) << left << store.rob[i]->get_name() << setw(8) << left << store.arm[store.rob[i]->get_index(1)]->get_name()
			<< setw(12) << left << store.batt[store.rob[i]->get_index(2)]->get_name() << setw(10) << left << store.head[store.rob[i]->get_index(3)]->get_name()
			<< setw(14) << left << store.loco[store.rob[i]->get_index(4)]->get_name() << setw(10) << left << store.tor[store.rob[i]->get_index(5)]->get_name() 
			<<'$' << setw(10) << left << (store.rob[i]->get_cost()) * 1.15 << endl << endl;
	}
}

void list_last_order(class Store& store)
{
	cout << "Here is your new order!" << endl << endl;
	cout << "Order Number: " << store.ord.back()->get_ord_num() << endl;
	cout << "Customer: " << store.ord.back()->get_name() << endl;
	cout << "Sales Associate: " << store.ord.back()->get_assoc() << endl << endl << endl;
	cout << "Qty    " << "Model Name     " << "Price     " << endl;
	for (int i = 0; i < store.ord.back()->get_size(); i++)
	{
		cout << setw(7) << left << store.ord.back()->get_qty(i) << left << setw(12) << store.rob[store.ord.back()->get_model_index(i)]->get_name();
		cout << setw(10) << left << (store.rob[store.ord.back()->get_model_index(i)]->get_cost())*1.15*store.ord.back()->get_qty(i) << endl << endl;
	}
}
void list_all_order(class Store& store)
{

}