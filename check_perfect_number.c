#include <stdio.h>

bool checkPerfectNumber(int num) {
	int i = 2, sum = 1;
	while (i * i < num){
		if (num % i == 0)
			sum = sum + i + num / i;
		i++;
	}
	if (i * i == num)
		sum = sum + i;
	if (sum == num && sum != 1)
		return true;
	else
		return false;
}

int main()
{
	int num = 10;
	printf("%d\n", checkPerfectNumber(num));
}