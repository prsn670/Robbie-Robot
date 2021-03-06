#include "stdafx.h"
#include "robot_model.h"

string Robot_model::get_name()
{
	return name;
}

double Robot_model::get_weight()
{
	return weight;
}

/*void Robot_model::set_name(string str)
{
	name = str;
}*/

void Robot_model:: set_weight(double lbs)
{
	weight = lbs;
}

void Robot_model::set_cost(double part_cost)
{
	cost = part_cost;
}

double Robot_model::get_cost()
{
	return cost;
}

int Robot_model::get_part_num()
{
	return part_num;
}


int Robot_model::get_index(int selection)
{
	if (selection == 1)
	{
		return arm_index;
	}

	else if (selection == 2)
	{
		return batt_index;
	}

	else if (selection == 3)
	{
		return head_index;
	}

	else if (selection == 4)
	{
		return loco_index;
	}

	else if (selection == 5)
	{
		return tor_index;
	}
}

void Robot_model::set_index(int selection, int index)
{
	if (selection == 1)
	{
		arm_index = index - 1;
	}

	else if (selection == 2)
	{
		batt_index = index - 1;
	}

	else if (selection == 3)
	{
		head_index = index - 1;
	}

	else if (selection == 4)
	{
		loco_index = index - 1;
	}

	else if (selection == 5)
	{
		tor_index = index - 1;
	}
}