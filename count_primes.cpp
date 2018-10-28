#include <iostream>
#include <vector>
#include<math.h>
using namespace std;


int countPrimes(int n) {
	int i, count = 0;
	for (i = 2; i <= n; i++) {
		int flag = 1;
		for ( int m = 2; m <= sqrt(i); m++) {
			if (i % m == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			count++;
	}
	return count;
}

int main()
{
	int n = 1;
	cout << countPrimes(n) << endl;
}