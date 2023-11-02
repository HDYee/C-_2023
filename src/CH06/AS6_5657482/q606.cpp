#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string upperCaseIt(string);
bool samestring(string, string );

int main()
{
	string name1, name2;

	cout << "Write any name: ";
	getline(cin, name1);

	cout << "Write another name: ";
	getline(cin, name2);

	if (samestring(name1, name2))
	{
		cout << "The names are the same" << endl;
	}
	else
	{
		cout << "The names are not the same" << endl;
	}
	return 0;
}


string upperCaseIt(string name)
{
	for (int x = 0; x <= name.length(); x++)
	{
		name[x] = toupper(name[x]);
	}

	return name;
}


bool samestring(string name1, string name2)
{
	if (upperCaseIt(name1) == upperCaseIt(name2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

