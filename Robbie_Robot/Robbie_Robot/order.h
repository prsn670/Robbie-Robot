#pragma once
#ifndef _ORDER_H
#define _ORDER_H

#include "stdafx.h"
#include "vector"

using namespace std;
class Order {

private:
	vector<int> model_ind;//index of model ordered
	vector<int> qty; //quantity of model ordered
	string cust_name;//customer name
	string date;//date of order
	string sales_assoc;//name of sales associate
	int order_num;//order number
	double price;//sub total
	
public:
	void set_indices(int ind, int amt);//sets the indexes for model_ind and qty
	Order(string name, string date, string sa_name) : cust_name(name), date(date), sales_assoc(sa_name) {};
	
};



#endif // !_ORDER_H

