#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Solution {
public:
	int trailingZeroes(int n) {
		int fac_zero = 0;
		while (n) {
			n /= 5;
			fac_zero += n;
		}
		return fac_zero;
	}
};


int main()
{
	int n = 5;
	Solution a;
	cout << a.trailingZeroes(n) << endl;
	return 0;
}

//所有5的倍数会添加一个0，所有5^2的倍数会比5的倍数多添加一个0