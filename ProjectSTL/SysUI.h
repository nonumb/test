#pragma once
#include<iostream>
#include "Func.h"
using namespace std;

class SysUi
{
private:
	Func func;
public:
	SysUi(Func func) :func(func)
	{
		this->func = func;
	}
	void show()
	{
		cout << "欢迎使用菁英教育员工管理系统!" << endl;
		cout << "已读取当前目录文件staff.txt中的员工数据，请选择如下功能编号：" << endl;
		while (true)
		{
			cout << "---------------------------------------------------" << endl;
			cout << "选择功能：    (1)查询所有员工信息     (2)查询员工信息" << endl;
			cout << "(3)查询人数   (4)标记待解雇员工       (5)解雇已标记员工" << endl;
			cout << "(6)添加员工	  (7)修改员工信息         (0)保存并退出" << endl;
			cout << "---------------------------------------------------" << endl;
			cout << "选择: ";
			int i;
			cin >> i;
			switch (i) {
			case 1:
			{
				cout << "所有员工信息如下： " << endl;
				func.showAllInfo();
				break;
			}
			case 2:
			{
				cout << "选择关键词(按0退出):(1)根据员工号(2)根据姓名，输入整数数字: " << endl;
				int j;
				cin >> j;
				if (j == 0) break;
				if (j == 1) {
					cout << "请输入员工号： ";
					string id2;
					cin >> id2;
					func.showInfoById(id2);

					// 根据id查找员工信息
				}
				else if (j == 2) {
					cout << "请输入员工姓名： ";
					string name2;
					cin >> name2;
					func.showInfoByName(name2);

					// 根据na查找员工信息
				}
				break;
			}
			case 3:
				//查询人数
				func.showCount();
				break;
			case 4:
			{
				cout << "选择关键词(按0退出):(1)根据员工号(2)根据姓名，输入整数数字: " << endl;
				int j;
				cin >> j;
				if (j == 0) break;
				if (j == 1) {
					cout << "请输入员工号： ";
					string id4;
					cin >> id4;
					func.markStatusById(id4);
					// 根据id进行标记
					cout << "已标记" << endl;
				}
				else if (j == 2) {
					cout << "请输入员工姓名： ";
					string name4;
					cin >> name4;
					func.markStatusByName(name4);
					// 根据na进行标记
					cout << "已标记" << endl;
				}
				break;
			}
			case 5:
				/* 遍历sta容器，查询并删除*/
				func.removeStaff();
				cout << "完成操作" << endl;

				break;
			case 6:
			{
				cout << "请输入工号，姓名，年龄，职位，销售额(管理人员不需要)，如果想退出请输入'#" << endl;
				string id6, name6, job6;
				int age6;
				double sales6;

				cout << "请输入员工号： ";
				string l;
				cin >> l;
				if (l == "#")
				{
					cout << "退出创建" << endl;
					break;
				}
				else
				{
					id6 = l;
				}

				cout << "请输入员工姓名： ";
				cin >> l;
				if (l == "#")
				{
					cout << "退出创建" << endl;
					break;
				}
				else
				{
					name6 = l;
				}

				cout << "请输入员工年龄： ";
				cin >> l;
				if (l == "#")
				{
					cout << "退出创建" << endl;
					break;
				}
				else
				{
					age6 = stoi(l);
				}

				cout << "请输入员工职位序号(1,Manager 2,Salesman 3,Salesmanager)： ";
				cin >> l;
				if (l == "#")
				{
					cout << "退出创建" << endl;
					break;
				}
				else
				{
					job6 = l;
				}

				if (job6 == "1")
				{
					func.addStaff(new Manager(id6, name6, age6, "Manager","正常在职"));
				}
				if (job6 == "2")
				{
					cout << "请输入销售额:";
					cin >> l;
					if (l == "#")
					{
						cout << "退出创建" << endl;
						break;
					}
					else
					{
						sales6 = stoi(l);
					}
					func.addStaff(new SalesMan(id6, name6, age6, "SalesMan","正常在职", sales6));

				}
				if (job6 == "3")
				{
					cout << "请输入销售额:";
					cin >> l;
					if (l == "#")
					{
						cout << "退出创建" << endl;
						break;
					}
					else
					{
						sales6 = stoi(l);
					}
					func.addStaff(new SalesManager(id6, name6, age6, "SalesManager", "正常在职",sales6));

				}

				cout << "员工信息已录入" << endl;
				break;
				
			}
			case 7:
			{
				cout << "请输入员工号： ";
				string id7;
				cin >> id7;
				cout << "请输入要修改的信息编号：（1 员工号 2姓名 3年龄 4职位 5销售额(Manager没有),退出请输入0" << endl;
				int j7;
				cin >> j7;
				if (j7 == 0) break;
				if (j7 == 1) 
				{
					string idUpdate = "";
					cout << "请输入员工号： ";
					cin >> idUpdate;
					func.updateId(id7, idUpdate);

				}
				else if (j7 == 2) 
				{
					string nameUpdate = "";
					cout << "请输入员工姓名： ";
					cin >> nameUpdate;
					func.updateName(id7, nameUpdate);
				}
				else if (j7 == 3) 
				{
					int ageUpdate;
					cout << "请输入员工年龄： ";
					cin >> ageUpdate;
					func.updateAge(id7, ageUpdate);
				}
				else if (j7 == 4) 
				{
					int n;
					cout << "请输入员工职位序号(1,Manager 2,Salesman 3,Salesmanager)： ";
					cin >> n;
					if (n==1)					
						func.updateJob(id7, "Manager");					
					if (n == 2)					
						func.updateJob(id7, "SalesMan");					
					if (n == 3)					
						func.updateJob(id7, "SalesManager");					
				}
				else if (j7 == 5) 
				{
					double salesUpdate;
					cout << "请输入销售额:";
					cin >> salesUpdate;
					func.updateSales(id7, salesUpdate);
				}
				break;
			}
			case 0:
				cout << "正在保存员工信息..." << endl;
				// 保存员工信息到文件
				cout << "保存成功！" << endl;
				return;



			}
		}
	}
};

