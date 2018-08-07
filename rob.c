#include <stdio.h>
#define MAX(a,b)  (((a)>(b))?(a):(b))

int rob(int* nums, int numsSize) {
	if (numsSize <= 0)
		return 0;
	if (numsSize == 1)
		return nums[0];
	int i, a, b;
	a = nums[0];
	b = MAX(nums[0], nums[1]);
	for (int i = 2; i < numsSize; i++) {
		int tmp = b;
		b = MAX(a + nums[i], b);
		a = tmp;
	}

	return b;
}

int main()
{
	int a[] = { 1,1,3,2,2 };
	int num = 5;
	printf("%d\n", rob(a, num));
}