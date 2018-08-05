#include <stdio.h>

double findMaxAverage(int* nums, int numsSize, int k) {
	int i;
	double tem = 0, sum = 0;
	if (numsSize == 1)
		return nums[0];
	for (i = 0; i < k; i++)
		sum += nums[i];
	tem = sum;
	for (i = 0; i < numsSize && (i + k) < numsSize; i++) {
		tem = tem + nums[i + k] - nums[i];
		if (tem > sum)
			sum = tem;
	}
	return sum / k;

}

int main()
{
	int n[] = { 1, 12, -5, -6, 50, 3 };
	int num = 6;
	int k = 4;
	printf("%f\n", findMaxAverage(n, num, k));
}