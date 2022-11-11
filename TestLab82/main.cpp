#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
size_t MinLength(const string s)
{
	int k = 0;
	size_t len = 0,
		min = 0;
	size_t start = 0,
		finish;
	while ((start = s.find_first_of("a", start)) != -1)
	{
		finish = s.find_first_not_of("a", start + 1);
		if (finish == -1)
			finish = s.length();
		len = finish - start;
		if (k == 0)
			min = len;
		k++;
		if (len < min)
			min = len;
		start = finish + 1;
	}
	return min;
}
int main()
{
	string str;
	char s = 'a';
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << " the number of words in a : " << MinLength(str) << endl;
	if (str.find(s) != -1)
		cout << str << endl;
	else
		cout << "didnt have" << endl;
	return 0;
}
