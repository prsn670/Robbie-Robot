#include "stdafx.h"
#include "build_order.h"
#include "store.h"
#include "list_robot.h"
#include "iostream"

using namespace std;

void build_order(class Store& store)
{
	string name, date, sa_name;
	int ind = -1, amt;
	bool valid = false, order = false;
	char ch;
	cin.ignore(100, '\n');
	cout << "Please insert the name of the customer: ";
	getline(cin, name);
	cout << "Please enter the date of ";
	getline(cin, date);
	cout << "Please enter the name of the sales associate creating the order: ";
	getline(cin, sa_name);
	store.ord.push_back(new Order(name, date, sa_name, 0));
	store.ord.back()->set_ord_num(store.ord.size());//sets order number based on size of vector
	name.clear();

	while (!order)
	{
		ch = 'a';
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
		store.ord.back()->set_price(store.rob[ind]->get_cost() * amt);//sets price of robot
		
		while (ch != 'y' && ch != 'n')
		{
			cout << "Ordering more? (Y/N): ";
			cin >> ch;
			if (tolower(ch) == 'y')
			{
				cin.ignore(100, '/n');
			}
			else if (tolower(ch) == 'n')
			{
				order = true;
			}
			else
			{
				cout << "Invalid entry, please type 'y' or 'n'" << endl << endl;
				cin.ignore(100, '/n');
			}
		}
	}
	list_last_order(store);
}