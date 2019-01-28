#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Solution {
public:
	string convertToBase7(int num) {
		if (num == 0)
			return "0";
		string res = "";
		int NUM = abs(num);			//取绝对值
		
		while (NUM != 0) {
			int tmp = NUM % 7;
			NUM = NUM / 7;
			res = to_string(tmp) + res;    //转换成字符串形式
		}

		if (num < 0)
			return "-" + res;
		return res;
	}
};

int main()
{
	int n = -7;
	Solution a;
	cout << a.convertToBase7(n) << endl;
	return 0;
}
