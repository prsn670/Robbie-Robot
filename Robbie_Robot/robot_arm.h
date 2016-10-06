#pragma once
#ifndef _ROBOT_ARM_H
#define	_ROBOT_ARM_H
#include "robot_model.h"
#include "stdafx.h"

class Arm : public Robot_model
{
private:
	int power;

public:
	int get_power();
	Arm(string str, double lbs, double money, int part, string desc, int pow) : Robot_model(str, lbs, money, part, desc), power(pow) {}
};
#endif // !_ROBOT_ARM_H
