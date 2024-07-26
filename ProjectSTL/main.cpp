#include<iostream>
#include <vector>
#include "Staff.h"
#include "SalesManager.h"
#include "SalesMan.h"
#include "Manager.h"
#include "Func.h"
#include "SysUI.h"

using namespace std;

int main()
{
	vector<Staff*> infoVec;
	infoVec.push_back(new SalesMan("001", "tom", 18, "SalesMan", "������ְ", 3000));
	infoVec.push_back(new SalesMan("002", "join", 19, "SalesMan", "������ְ", 3200));
	infoVec.push_back(new Manager("003", "lucy", 20, "Manager", "������ְ"));
	infoVec.push_back(new SalesManager("004", "lucy", 21, "SalesManager", "������ְ", 5000));



	SysUi ui(infoVec);
	ui.show();


}

