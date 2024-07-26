#pragma once
#include <type_traits>
class Func
{
public:
	Func(vector<Staff*> infoVec)
	{
		this->infoVec = infoVec;
	}
	//func 1
	void showAllInfo()
	{
		for (auto& i : infoVec)		
			i->show();		
	}
	//func 2
	void showInfoById(string id)
	{
		for (auto& i : infoVec)
		{
			if (i->getId()==id)
			{
				i->show();
				break;
			}
		}
	}
	void showInfoByName(string name)
	{
		for (auto& i : infoVec)
		{
			if (i->getName() == name)			
				i->show();			
		}
	}
	//func 3
	void showCount()
	{
		cout << "��������" << infoVec.size()<<endl;
		int staffCount[3] = {0};
		for (auto& i : infoVec)
		{
			if (i->getJob()=="Manager")			
				staffCount[0]++;				
			if (i->getJob() == "SalesManager")			
				staffCount[1]++;
			if (i->getJob() == "SalesMan")			
				staffCount[2]++;
		}
		cout << "����Ա��" << staffCount[2] << endl << "���۾���" << staffCount[1] << endl << "����" << staffCount[0] << endl;
	}
	//func 4
	void markStatusById(string id)
	{
		for (auto& i : infoVec)
		{
			if (i->getId() == id)
			{
				i->updateStatus();
				break;
			}
		}
	}
	void markStatusByName(string name)
	{
		for (auto& i : infoVec)		
			if (i->getName() == name)			
				i->updateStatus();		
		cout << "�ѱ��" << endl;
	}
	//func 5
	void removeStaff()
	{
		for (auto it = infoVec.begin(); it != infoVec.end();)
		{
			if ((*it)->getStatus()=="����͵�")
			{
				it = infoVec.erase(it);
			}
			else
			{
				it++;
			}
		}
	}
	// func 6
	void addStaff( Staff* staff)
	{
		infoVec.push_back(staff);
	}

	// func 7

	void updateId(string id,string idUpdate)
	{
		for (auto& i : infoVec)
		{
			if (i->getId() == id)
			{
				i->updateId(idUpdate);
				break;
			}
		}
	}
	void updateName(string id, string nameUpdate)
	{
		for (auto& i : infoVec)
		{
			if (i->getId() == id)
			{
				i->updateName(nameUpdate);
				break;
			}
		}
	}
	void updateAge(string id, int ageUpdate)
	{
		for (auto& i : infoVec)
		{
			if (i->getId() == id)
			{
				i->updateAge(ageUpdate);
				break;
			}
		}
	}
	void updateJob(string id, string jobUpdate)
	{
		for (auto& i : infoVec)
		{
			if (i->getId() == id)
			{
				//ֻ��������Ա�����۾���֮��ת��
				i->updateJob(jobUpdate);
				break;
			}
		}
	}
	void updateSales(string id, double salesUpdates)
	{
		for (auto& i : infoVec)
		{
			if (i->getId() == id)
			{
				dynamic_cast<SetSales*>(i)->updateSales(salesUpdates);
				break;
			}
		}
	}

private:
	vector<Staff*> infoVec;

};