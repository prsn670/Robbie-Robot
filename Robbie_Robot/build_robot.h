#pragma once
#ifndef _BUILD_ROBOT_H
#define _BUILD_ROBOT_H

#include "stdafx.h"
#include "robot_model.h"
#include "robot_torso.h"
#include "robot_arm.h"
#include "robot_battery.h"
#include "robot_head.h"
#include "robot_locomotor.h"
#include "iostream"

using namespace std;


void build_base();//build the common data for each component


void build_model();//collect data specific to model

void build_arm(string str, string desc, double lbs, double money, int part); //collect data specific to arm

void build_battery(string str, string desc, double lbs, double money, int part);//collect data specific to battery

void build_locomotor(string str, string desc, double lbs, double money, int part); //collect data specific to locomotor

void build_torso(string str, string desc, double lbs, double money, int part); //collect data specific to torso
#endif // !_BUILD_ROBOT_H
