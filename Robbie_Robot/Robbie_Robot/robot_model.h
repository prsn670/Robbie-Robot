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
	/*Arm **arm_ptr;
	Battery **batt_ptr;
	Head **head_ptr;
	Locomotor **loco_ptr;
	Torso **tor_ptr;*/
	int arm_index; //the following stores the index of part that is associated with the model
	int batt_index;
	int head_index;
	int loco_index;
	int tor_index;


protected:
	string name;
	double cost;
	double weight;
	int part_num;
	string description;
	

public:
	//void set_name(string str);
	string get_name();
	double get_weight();
	double get_cost();
	int get_index(int selection);
	void set_cost(double part_cost);
	void set_weight(double lbs);
	int get_part_num();
	void set_index(int selection, int index);
	Robot_model(string str, double lbs, double money, int part, string desc) : name(str), weight(lbs), cost(money), part_num(part), description(desc) {};

};
#endif // !_ROBOT_PARTS_H
