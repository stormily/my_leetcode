#include <stdio.h>
#include <math.h>

bool isPalindrome(int x)
{
	int tmp = x, re = 0;

	if (x < 0)
		return false;

	while (tmp > 0) {
		re = re * 10 + tmp % 10;
		tmp = tmp / 10;
	}

	return x == re;
}
int main()
{
	printf("%d\n", isPalindrome(32213));
	return 0;
}