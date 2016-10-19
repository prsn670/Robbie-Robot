#pragma once
#ifndef _STORE_H
#define _STORE_H

#include "stdafx.h"
#include "robot_model.h"
#include "robot_arm.h"
#include "robot_battery.h"
#include "robot_head.h"
#include "robot_locomotor.h"
#include "robot_torso.h"
#include "order.h"

class Store{
public:
	vector<Robot_model*> rob;
	vector<Arm*> arm;
	vector<Battery*> batt;
	vector<Head*> head;
	vector<Locomotor*> loco;
	vector<Torso*> tor;
	vector<Order*> ord;
	

	void store_arm(string str, double lbs, double money, int part, string desc, int pow);
	void store_batt(string str, double lbs, double money, int part, string desc, int nrg);
	void store_head(string str, double lbs, double money, int part, string desc);
	void store_locomotor(string str, double lbs, double money, int part, string desc, int speed, int pow);
	void store_torso(string str, double lbs, double money, int part, string desc, int amt);
	void store_model(string str, double lbs, double money, int part, string desc);
	
	

	
};


#endif // !_STORE_H

