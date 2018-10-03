#include <stdio.h>

bool isPowerOfThree(int n) {
	if (n < 1)
		return false;
	while (n != 1) {
		if (n % 3 != 0) {
			return false;
		}
		n = n / 3;
	}
	return true;
}
int main()
{
	int n = 3;
	printf("%d\n", isPowerOfThree(n));
}