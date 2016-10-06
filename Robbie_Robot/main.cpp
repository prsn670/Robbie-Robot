#include "stdafx.h"
#include "robot_model.h"
#include "robot_torso.h"
#include "robot_arm.h"
#include "robot_battery.h"
#include "robot_head.h"
#include "robot_locomotor.h"
#include "iostream"
#include "vector"

using namespace std;

/*void add(Robot_model R, vector<Robot_model> rob, Torso T, vector<Torso> tor);*/

int main()
{
	char ch;
	string enter_data[] = { "Please enter data for torso component\n", "Please enter data for head component\n", "Please enter data for arm component\n", "Please enter data for locomotor component\n", "Please enter data for battery component\n" , "Please enter model information\n"};
	vector<Robot_model*> rob;
	vector<Torso*> tor;
	vector<Arm*> arm;
	vector<Battery*> batt;
	vector<Head*> head;
	vector<Locomotor*> loco;

	string str, desc;
	double lbs, money;
	int part, amt, pow, speed, nrg;
	int i = 0;
	
	while (i < 6)
	{
		if (i < 5)
		{
			cout << enter_data[i];
			cout << "Please enter the name of the part: ";
			getline(cin, str);
			cout << "Please enter the weight of the item: ";
			cin >> lbs;
			cout << "Please enter the cost of the item: ";
			cin >> money;
			cout << "Please enter the part number of the item: ";
			cin >> part;
			cout << "Please enter a brief description of the item: ";
			getline(cin, desc);
			
			
		}

		if (i == 0)
		{
			cin.ignore(100, '\n');
			cout << "Please enter the number of batteries needed for this torso: ";
			cin >> amt;
			tor.push_back(new Torso(str, lbs, money, part, desc, amt));
			str.clear(); desc.clear();
			++i;
		}

		else if (i == 1)
		{
			head.push_back(new Head(str, lbs, money, part, desc));
			str.clear(); desc.clear();
			++i;
		}

		else if (i == 2)
		{
			cin.ignore(100, '\n');
			cout << "Please enter the power consumption of the arm: ";
			cin >> pow;
			arm.push_back(new Arm(str, lbs, money, part, desc, pow));
			str.clear(); desc.clear();
			++i;
		}

		else if (i == 3)
		{
			cin.ignore(100, '\n');
			cout << "Please enter the power consumption of the locomotor: ";
			cin >> pow;
			cout << "Please enter the max speed of the locomotor: ";
			cin >> speed;

			loco.push_back(new Locomotor(str, lbs, money, part, desc, speed, pow));
			str.clear(); desc.clear();
			++i;
		}

		else if (i == 4)
		{
			cin.ignore(100, '\n');
			cout << "Please enter the amount of energy stored in the battery: ";
			cin >> nrg;
			batt.push_back(new Battery(str, lbs, money, part, desc, nrg));
			str.clear(); desc.clear();
			++i;
		}

		else if (i == 5)
		{
			
			cout << enter_data[i];
			cout << "Please enter the name of this robot: ";
			getline(cin, str);

			cout << "Please enter a model number for this robot: ";
			cin >> part;

			cin.ignore(100, '\n');
			cout << "Please enter a brief description of the item: ";
			getline(cin, desc);

			rob.push_back(new Robot_model(str, 0, 0, 0, desc));
			rob[0]->set_model_num(part);
			++i;
		}
		cin.ignore(100, '\n');
		cout << endl;

	}

	
	


	
	//add(Robot_model ("Anil", 5), rob, Torso("Parshad", 1, 1), tor); for future use
	//rob.push_back(new Robot_model("Anil", 5));
	//tor.push_back(new Torso("Parshad", 1, 1));

	//add(Robot_model("Arianna", 5), rob, Torso("Grande", 1, 1), tor);

	//rob.push_back(new Robot_model("Arianna", 5));
	//tor.push_back(new Torso("Grande", 1, 1));
	//vector<Robot_model>::iterator i = rob.begin();
	for(int i = 0; i < 1; i++)
	{
		cout << "Your new robot model " << rob[i]->get_name() << "is comprised of:" << endl;
		cout << "Torso: " << tor[i]->get_name() << endl;
		cout << "head: " << head[i]->get_name() << endl;
		cout << "Arms: " << arm[i]->get_name() << endl;
		cout << "Locomotor: " << loco[i]->get_name() << endl;
		cout << "Battery: " << batt[i]->get_name() << endl;
	}

	cin >> ch;
	return 0;
}

/*void add(Robot_model R, vector<Robot_model*> rob, Torso T, vector<Torso*> tor)
{
	rob.push_back(R);
	tor.push_back(T);
}*/