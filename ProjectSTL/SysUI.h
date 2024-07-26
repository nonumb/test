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
		cout << "��ӭʹ��ݼӢ����Ա������ϵͳ!" << endl;
		cout << "�Ѷ�ȡ��ǰĿ¼�ļ�staff.txt�е�Ա�����ݣ���ѡ�����¹��ܱ�ţ�" << endl;
		while (true)
		{
			cout << "---------------------------------------------------" << endl;
			cout << "ѡ���ܣ�    (1)��ѯ����Ա����Ϣ     (2)��ѯԱ����Ϣ" << endl;
			cout << "(3)��ѯ����   (4)��Ǵ����Ա��       (5)����ѱ��Ա��" << endl;
			cout << "(6)���Ա��	  (7)�޸�Ա����Ϣ         (0)���沢�˳�" << endl;
			cout << "---------------------------------------------------" << endl;
			cout << "ѡ��: ";
			int i;
			cin >> i;
			switch (i) {
			case 1:
			{
				cout << "����Ա����Ϣ���£� " << endl;
				func.showAllInfo();
				break;
			}
			case 2:
			{
				cout << "ѡ��ؼ���(��0�˳�):(1)����Ա����(2)����������������������: " << endl;
				int j;
				cin >> j;
				if (j == 0) break;
				if (j == 1) {
					cout << "������Ա���ţ� ";
					string id2;
					cin >> id2;
					func.showInfoById(id2);

					// ����id����Ա����Ϣ
				}
				else if (j == 2) {
					cout << "������Ա�������� ";
					string name2;
					cin >> name2;
					func.showInfoByName(name2);

					// ����na����Ա����Ϣ
				}
				break;
			}
			case 3:
				//��ѯ����
				func.showCount();
				break;
			case 4:
			{
				cout << "ѡ��ؼ���(��0�˳�):(1)����Ա����(2)����������������������: " << endl;
				int j;
				cin >> j;
				if (j == 0) break;
				if (j == 1) {
					cout << "������Ա���ţ� ";
					string id4;
					cin >> id4;
					func.markStatusById(id4);
					// ����id���б��
					cout << "�ѱ��" << endl;
				}
				else if (j == 2) {
					cout << "������Ա�������� ";
					string name4;
					cin >> name4;
					func.markStatusByName(name4);
					// ����na���б��
					cout << "�ѱ��" << endl;
				}
				break;
			}
			case 5:
				/* ����sta��������ѯ��ɾ��*/
				func.removeStaff();
				cout << "��ɲ���" << endl;

				break;
			case 6:
			{
				cout << "�����빤�ţ����������䣬ְλ�����۶�(������Ա����Ҫ)��������˳�������'#" << endl;
				string id6, name6, job6;
				int age6;
				double sales6;

				cout << "������Ա���ţ� ";
				string l;
				cin >> l;
				if (l == "#")
				{
					cout << "�˳�����" << endl;
					break;
				}
				else
				{
					id6 = l;
				}

				cout << "������Ա�������� ";
				cin >> l;
				if (l == "#")
				{
					cout << "�˳�����" << endl;
					break;
				}
				else
				{
					name6 = l;
				}

				cout << "������Ա�����䣺 ";
				cin >> l;
				if (l == "#")
				{
					cout << "�˳�����" << endl;
					break;
				}
				else
				{
					age6 = stoi(l);
				}

				cout << "������Ա��ְλ���(1,Manager 2,Salesman 3,Salesmanager)�� ";
				cin >> l;
				if (l == "#")
				{
					cout << "�˳�����" << endl;
					break;
				}
				else
				{
					job6 = l;
				}

				if (job6 == "1")
				{
					func.addStaff(new Manager(id6, name6, age6, "Manager","������ְ"));
				}
				if (job6 == "2")
				{
					cout << "���������۶�:";
					cin >> l;
					if (l == "#")
					{
						cout << "�˳�����" << endl;
						break;
					}
					else
					{
						sales6 = stoi(l);
					}
					func.addStaff(new SalesMan(id6, name6, age6, "SalesMan","������ְ", sales6));

				}
				if (job6 == "3")
				{
					cout << "���������۶�:";
					cin >> l;
					if (l == "#")
					{
						cout << "�˳�����" << endl;
						break;
					}
					else
					{
						sales6 = stoi(l);
					}
					func.addStaff(new SalesManager(id6, name6, age6, "SalesManager", "������ְ",sales6));

				}

				cout << "Ա����Ϣ��¼��" << endl;
				break;
				
			}
			case 7:
			{
				cout << "������Ա���ţ� ";
				string id7;
				cin >> id7;
				cout << "������Ҫ�޸ĵ���Ϣ��ţ���1 Ա���� 2���� 3���� 4ְλ 5���۶�(Managerû��),�˳�������0" << endl;
				int j7;
				cin >> j7;
				if (j7 == 0) break;
				if (j7 == 1) 
				{
					string idUpdate = "";
					cout << "������Ա���ţ� ";
					cin >> idUpdate;
					func.updateId(id7, idUpdate);

				}
				else if (j7 == 2) 
				{
					string nameUpdate = "";
					cout << "������Ա�������� ";
					cin >> nameUpdate;
					func.updateName(id7, nameUpdate);
				}
				else if (j7 == 3) 
				{
					int ageUpdate;
					cout << "������Ա�����䣺 ";
					cin >> ageUpdate;
					func.updateAge(id7, ageUpdate);
				}
				else if (j7 == 4) 
				{
					int n;
					cout << "������Ա��ְλ���(1,Manager 2,Salesman 3,Salesmanager)�� ";
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
					cout << "���������۶�:";
					cin >> salesUpdate;
					func.updateSales(id7, salesUpdate);
				}
				break;
			}
			case 0:
				cout << "���ڱ���Ա����Ϣ..." << endl;
				// ����Ա����Ϣ���ļ�
				cout << "����ɹ���" << endl;
				return;



			}
		}
	}
};

