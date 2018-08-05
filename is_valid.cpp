#include <iostream>
#include<stack>
using namespace std;

bool isValid(string s) {
	stack<char> temp;
	for (char x : s) {
		if (x == '(')
			temp.push(')');
		else if (x == '[')
			temp.push(']');
		else if (x == '{')
			temp.push('}');
		else {
			if (temp.empty() || temp.top() != x)
				return false;
			else
				temp.pop();
		}
	}
	return temp.empty();
}

int main()
{
	string a = "{[]}";
	cout << isValid(a) << endl;
}