#pragma once
#ifndef _ROBOT_model_H
#define _ROBOT_MODEL_H

#include "stdafx.h"
#include "string"
#include "vector"

using namespace std;


class Robot_model
{
	
private:
	int model_num;
	

protected:
	string name;
	double cost;
	double weight;
	int part_num;
	string description;
	

public:
	//void set_name(string str);
	//void set_weight(double lbs);
	string get_name();
	double get_weight();
	double get_cost();
	int get_model_num();
	void set_cost(double part_cost);
	void set_model_num(int num);
	void set_weight(int lbs);
	int get_part_num();
	Robot_model(string str, double lbs, double money, int part, string desc) : name(str), weight(lbs), cost(money), part_num(part), description(desc) {};

};
#endif // !_ROBOT_PARTS_H
