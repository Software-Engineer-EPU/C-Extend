/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

struct Employee
{
	string name;
	int year_of_experience;
};

int main()
{
    freopen(fi);
    freopen(fo);
	map<int, Employee> listEmployee;

	listEmployee.insert(pair<int, Employee>(1, { "Le Tran Dat", 5 }));
	listEmployee.insert(pair<int, Employee>(2, { "Someone", 0 }));

	listEmployee[4] = { "new employee", 1 }; //operator[<key>] = <value>

	map<int, Employee>::iterator iter = listEmployee.find(2);
	if (iter != listEmployee.end())
	{
		cout << "Employee ID:        " << iter->first << endl;
		cout << "Employee name:      " << (iter->second).name << endl;
		cout << "Year of experience: " << (iter->second).year_of_experience << endl;
	}
	else
	{
		cout << "ID 3 is not exist" << endl;
	}

	return 0;
}