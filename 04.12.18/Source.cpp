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
	/*vector<string> str = { "бегемот", "африка", "ясли", "романовы", "нога" };

	cout << "В алфавитном порядке: " << endl;
	sort(str.begin(), str.end());
	ostream_iterator<string> out(cout, "\n");
	copy(str.begin(), str.end(), out);
	cout << endl;

	cout << "В обратном алфавитном порядке: " << endl;
	sort(str.begin(), str.end(), greater<string>());
	ostream_iterator<string> out1(cout, "\n");
	copy(str.begin(), str.end(), out1);
	cout << endl;

	cout << "Сортировка по длине: " << endl;
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

	m.insert(pair<string, int>("Петров",255));
	m.insert(pair<string, int>("Сидоров", 589));
	m.insert(pair<string, int>("Соловьев", 698));
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}

	map<string, int>::iterator res = m.find("Сидоров");
	if (res != m.end())
		cout << "Телефон сидорова: " << res->second << endl;
	else
		cout << "Не найдено" << endl;*/
		/*

			map<string, int> Surnames;
			Surnames["Сидоров"] = 523;
			Surnames["Петров"] = 587;
			Surnames["Соловьев"] = 659;
			Surnames["Онегин"] = 698;
			Surnames["Быков"] = 783;
			Surnames["Цой"] = 879;
			Surnames["Синичкин"] = 987;

			for (Iter it = Surnames.begin(); it != Surnames.end(); it++)
			{
				cout << it->first << " " << it->second << endl;
			}

			Iter res = Surnames.find("Онегин");
			if (res != Surnames.end())
				cout << "Телефон сидорова: " << res->second << endl;
			else
				cout << "Не найдено" << endl; */

	MyMap m;
	m.insert(MyMap::value_type("Сидоров", {1,2,3}));
	m.insert(MyMap::value_type("Петров", { 4,5,6 }));
	m.insert(MyMap::value_type("Соловьев", { 7,8,9 }));
	m.insert(MyMap::value_type("Онегин", { 10,11,12 }));
	
	for (Iter it = m.begin(); it != m.end(); it++)

	{
		cout << it->first << " ";
		for (size_t i = 0; i < it->second.size(); i++)
		{
			cout << it->second[i] << " ";
		}
		cout << endl;
	}

	Iter res = m.find("Петров");
	if (res != m.end())
	{
		
		for (size_t i = 0; i < res->second.size(); i++)
		{
			cout << res->second[i] << " ";
		}
	}



	

	system("pause");
}