#include <iostream>
#include <string>
using namespace std;

int charToInt(char s) {
	switch (s) {
	case 'I':   return 1;
	case 'V':   return 5;
	case 'X':   return 10;
	case 'L':   return 50;
	case 'C':   return 100;
	case 'D':   return 500;
	case 'M':   return 1000;
	default:    return 0;
	}
}

int romanToInt(string s) {

	if (s.length() <= 1)
		return charToInt(s[0]);
	int res = 0;
	char maxChar = 'I';
	for (int i = s.size() - 1; i >= 0; i--) {
		if (charToInt(s[i]) >= charToInt(maxChar)) {
			maxChar = s[i];
			res += charToInt(s[i]);
		}
		else
			res -= charToInt(s[i]);
	}
		return res;
}

int main()
{
	string str = "III";
	cout << romanToInt(str) << endl;
}