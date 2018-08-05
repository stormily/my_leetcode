#include <stdio.h>
#include <math.h>

bool judgeSquareSum(int c) {
	if (c < 0)
		return false;
	int mid = sqrt(c);
	int left = 0, right = mid;
	while (left <= right) {
		int temp = left * left + right * right;
		if (c == temp) 
			return true;
		else if (c>temp) 
			left++;
		else 
			right--;
	}

	return false;
}

int main()
{
	int n = 10;
	printf("%d\n", judgeSquareSum(n));
}