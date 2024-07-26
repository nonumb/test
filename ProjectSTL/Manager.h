#pragma once
#include "Staff.h"

using namespace std;

class Manager : public Staff
{

public:
	Manager(string id, string name, int age, string job, string status) :Staff(id, name, age, job, status){	}
	void show()
	{
		cout << "×´Ì¬:" << status << " ±àºÅ:" << id << " ÐÕÃû:" << name << " ÄêÁä:" << age << "¸ÚÎ»:" << job << endl;
	}
};