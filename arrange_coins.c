#include <stdio.h>

int arrangeCoins(int n) {
	int i = 1;
	while (n >= i) {
		n = n - i;
		i++;
	}
	return i - 1;
}

int main()
{
	int n = 10;
	printf("%d\n", arrangeCoins(n));
}