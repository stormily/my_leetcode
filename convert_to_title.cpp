#include <iostream>
#include <string>
using namespace std;

string convertToTitle(int n) {
	string ans;
	while (n) {
		ans = char((n - 1) % 26 + 'A') + ans;
		n = (n - 1) / 26;
	}
	return ans;
}

int main()
{
	int num = 5;
	cout << convertToTitle(num) << endl;
}