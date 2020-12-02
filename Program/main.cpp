// Lab_8_1_4
// використання стандартних функцій для рядків string

#include <iostream>
#include <string>
using namespace std;

int count_strs(const string str) {
	if (str.length() < 3)
		return 0;

	int count = 0;
	size_t pos = 0;
	while (pos = str.find(',', pos), pos != -1) {
		++pos;
		if (str[++pos] == '-')
			count++;
	}
	return count;
}

void change_str(string &str)
{
	if (str.length() < 3)
		return;
	size_t pos = 0;
	while ((pos = str.find(',', pos)) != -1)
		if (str[pos + 2] == '-')
			str.replace(pos, 3, "**");
}

int main()
{
	//string str = "asdasdasd,s-sadsada,s-sfsdfsdfsdf";
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << count_strs(str) << " groups of ', -'" << endl;
	change_str(str);
	cout << "Modified string (param) : " << str << endl;
	return 0;
}