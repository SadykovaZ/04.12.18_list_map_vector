#include <string>
#include<iostream>
#include <iterator>
#include <algorithm>
#include<vector>
#include<Windows.h>
#include<time.h>
#include<list>
#include<map>

using namespace std;
bool compareLen(const string& a, const string& b)
{
	return (a.size() < b.size());
}
bool forRemove(int a)
{
	return (a > 500);
}
//typedef map<string, int> MyMap;
//typedef MyMap::iterator Iter;

typedef multimap<string,vector<int>> MyMap;
typedef MyMap::iterator Iter;

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	/*vector<string> str = { "�������", "������", "����", "��������", "����" };

	cout << "� ���������� �������: " << endl;
	sort(str.begin(), str.end());
	ostream_iterator<string> out(cout, "\n");
	copy(str.begin(), str.end(), out);
	cout << endl;

	cout << "� �������� ���������� �������: " << endl;
	sort(str.begin(), str.end(), greater<string>());
	ostream_iterator<string> out1(cout, "\n");
	copy(str.begin(), str.end(), out1);
	cout << endl;

	cout << "���������� �� �����: " << endl;
	sort(str.begin(), str.end(), compareLen);
	ostream_iterator<string> out2(cout, "\n");
	copy(str.begin(), str.end(), out2);
	cout << endl;

	cout << endl;

	vector<int> v;
	for (size_t i = 1; i <= 10; i++)
	{
		v.push_back(i*i);
	}
	sort(begin(v), end(v), greater<int>());

	ostream_iterator<int> out4(cout, " ");
	cout << "Vector: ";
	copy(v.begin(), v.end(), out4);
	cout << endl;
	cout << endl;

	vector<int> v1;
	for (size_t i = 0; i <= 9; i++)
	{
		v1.push_back(i);
	}

	v1.insert(v1.begin()+9, 3, 50);

	ostream_iterator<int> out5(cout, " ");
	cout << "Vector: ";
	copy(v1.begin(), v1.end(), out5);

	cout << endl;
	cout << endl;*/

	/*list<int> l1;
	list<int>::iterator it;

	for (size_t i = 0; i < 10; i++)
	{
		l1.push_back(rand() % 1000);
	}
	for (it = l1.begin(); it != l1.end(); it++)
		cout << *it << " ";
	cout << endl;

	l1.remove_if(forRemove);
	for (it = l1.begin(); it != l1.end(); it++)
		cout << *it << " ";
	cout << endl;
	l1.clear();

	cout << endl;*/

	/*map<string, int> m;
	map<string, int> ::iterator iter;

	m.insert(pair<string, int>("������",255));
	m.insert(pair<string, int>("�������", 589));
	m.insert(pair<string, int>("��������", 698));
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}

	map<string, int>::iterator res = m.find("�������");
	if (res != m.end())
		cout << "������� ��������: " << res->second << endl;
	else
		cout << "�� �������" << endl;*/
		/*

			map<string, int> Surnames;
			Surnames["�������"] = 523;
			Surnames["������"] = 587;
			Surnames["��������"] = 659;
			Surnames["������"] = 698;
			Surnames["�����"] = 783;
			Surnames["���"] = 879;
			Surnames["��������"] = 987;

			for (Iter it = Surnames.begin(); it != Surnames.end(); it++)
			{
				cout << it->first << " " << it->second << endl;
			}

			Iter res = Surnames.find("������");
			if (res != Surnames.end())
				cout << "������� ��������: " << res->second << endl;
			else
				cout << "�� �������" << endl; */

	MyMap m;
	m.insert(MyMap::value_type("�������", {1,2,3}));
	m.insert(MyMap::value_type("������", { 4,5,6 }));
	m.insert(MyMap::value_type("��������", { 7,8,9 }));
	m.insert(MyMap::value_type("������", { 10,11,12 }));
	
	for (Iter it = m.begin(); it != m.end(); it++)

	{
		cout << it->first << " ";
		for (size_t i = 0; i < it->second.size(); i++)
		{
			cout << it->second[i] << " ";
		}
		cout << endl;
	}

	Iter res = m.find("������");
	if (res != m.end())
	{
		
		for (size_t i = 0; i < res->second.size(); i++)
		{
			cout << res->second[i] << " ";
		}
	}



	

	system("pause");
}