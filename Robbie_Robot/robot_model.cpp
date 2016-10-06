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
}

void Robot_model::set_weight(double lbs)
{
	weight = lbs;
}*/

void Robot_model::set_cost(double part_cost)
{
	cost += part_cost;
}

double Robot_model::get_cost()
{
	return cost;
}

int Robot_model::get_part_num()
{
	return part_num;
}

void Robot_model::set_model_num(int num)
{
	model_num = num;
}

void Robot_model::set_weight(int lbs)
{
	weight += lbs;
}

int Robot_model::get_model_num()
{
	return model_num;
}