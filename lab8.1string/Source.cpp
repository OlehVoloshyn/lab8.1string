#include <iostream>
#include <string>
using namespace std;
int Count(const string str)
{
	int k = 0;
	int number=0;
	size_t pos = 0;
	while ((pos = str.find(',', pos)) != -1)
	{
		pos++;
			k++;
			if (k == 3)
			{
				number = pos-1;
				break;
			}
	}
	return number;
}
string Change(string& str)
{
	size_t pos = 0;
	while ((pos = str.find(',', pos)) != -1)
			str.replace(pos, 1, "**");
	return str;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "The number of the third comma " << Count(str) <<  endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	
		return 0;
}