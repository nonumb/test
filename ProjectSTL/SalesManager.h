#pragma once
#include "Staff.h"
#include "SetSales.h"


using namespace std;

class SalesManager : public Staff , public SetSales
{
private:
	double sales;
public:
	SalesManager(string id, string name, int age, string job, string status, double sales) :Staff(id, name, age, job, status)
	{
		this->sales = sales;
	}
	void show()
	{
		cout << "×´Ì¬:" << status << " ±àºÅ:" << id << " ÐÕÃû:" << name << " ÄêÁä:" << age
			<< "¸ÚÎ»:" << job << " ÏúÊÛ¶î:" << sales << endl;
	}	
	void updateSales(double salesUpdate) override
	{
		sales = salesUpdate;
	}
};