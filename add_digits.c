#include <stdio.h>

int addDigits(int num) {
	int i, sum = 0;
	while (1){
		while (num != 0) {
			sum += num % 10;
			num /= 10;
		}
		if (sum >= 10) {
			num = sum;
			sum = 0;
		}
		else
			break;
	}

	return sum;
}

int main()
{
	int a = 733;
	printf("%d\n", addDigits(a));
}