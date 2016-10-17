#include "stdafx.h"
#include "build_order.h"
#include "store.h"
#include "iostream"

using namespace std;

void build_order(class Store& store)
{
	string name, date, sa_name;
	int ind = -1, amt;
	bool valid = false;
	cout << "Please insert the name of the customer: ";
	getline(cin, name);
	cout << "Please enter the date of ";
	getline(cin, date);
	cout << "Please enter the name of the sales associate creating the order: ";
	getline(cin, sa_name);
	store.ord.push_back(new Order(name, date, sa_name));
	name.clear();

	while (ind == -1)
	{
		cout << "Please enter the name of the model the customer would like to order: ";
		getline(cin, name);
		for (int i = 0; i < store.rob.size(); i++)
		{
			if (name.compare(store.rob[i]->get_name()) == 0)
			{
				ind = i;
				break;
			}
		}
		if (ind == -1)
		{
			cout << "Robot model not found, please enter another model" << endl << endl;
		}
	}

	while (!valid)
	{
		cout << "Please enter the quantity the customer wants to order: ";
		cin >> amt;

		if (amt > 0)
		{
			valid = true;
		}

		else
		{
			cout << "Invalid amount, please try again" << endl << endl;
		}
	}

	store.ord.back()->set_indices(ind, amt);
}