#include "stdafx.h"
/*#include "robot_model.h"
#include "robot_torso.h"
#include "robot_arm.h"
#include "robot_battery.h"
#include "robot_head.h"
#include "robot_locomotor.h"*/
#include "store.h"

//Stores created components and model in vector.


void Store::store_arm(string str, double lbs, double money, int part, string desc, int pow)
{
	arm.push_back(new Arm(str, lbs, money, part, desc, pow));
}

void Store::store_batt(string str, double lbs, double money, int part, string desc, int nrg)
{
	batt.push_back(new Battery(str, lbs, money, part, desc, nrg));
}

void Store::store_head(string str, double lbs, double money, int part, string desc)
{
	head.push_back(new Head(str, lbs, money, part, desc));
}

void Store::store_locomotor(string str, double lbs, double money, int part, string desc, int speed, int pow)
{
	loco.push_back(new Locomotor(str, lbs, money, part, desc, speed, pow));
}

void Store::store_torso(string str, double lbs, double money, int part, string desc, int amt)
{
	tor.push_back(new Torso(str, lbs, money, part, desc, amt));
}

void Store::store_model(string str, double lbs, double money, int part, string desc)
{
	rob.push_back(new Robot_model(str, lbs, money, part, desc));
	
}