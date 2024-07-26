#pragma once
#include <iostream>
#include <string>

using namespace std;

class Staff
{
protected:
	string id;
	string name;
	int age;
	string job;
	string status;
public:
	Staff(string id, string name, int age, string job, string status)
	{
		this->id = id;
		this->name = name;
		this->age = age;
		this->job = job;
		this->status = status;
	}
	int getAge()
	{
		return this->age;
	}
	string getJob()
	{
		return this->job;
	}
	string getStatus()
	{
		return this->status;
	}
	string getId()
	{
		return this->id;
	}
	string getName()
	{
		return this->name;
	}
	void updateStatus( )
	{
		this->status = "´ý½â¹ÍµÄ";
	}
	void updateId(string id)
	{
		this->id = id;
	}
	void updateName(string name)
	{
		this->name = name;
	}
	void updateAge(int age)
	{
		this->age = age;
	}
	void updateJob(string job)
	{
		this->job = job;
	}
	virtual void show() = 0;
};