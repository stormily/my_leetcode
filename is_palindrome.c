#include <stdio.h>
#include <math.h>

bool isPalindrome(int x)
{
	int tmp = x, re = 0;

	if (x < 0)
		return false;

	while (tmp > 0)
	{
		re = re * 10 + tmp % 10;
		tmp = tmp / 10;
	}
	if (x == re)
		return true;
	else
		return false;
}

int main()
{
	int x = 32213;

	printf("%d\n", isPalindrome(x));
	return 0;
}