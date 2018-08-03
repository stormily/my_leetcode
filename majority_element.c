#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
	int count = 0;
	int candidate = 0;
	for (int i = 0; i < numsSize; ++i) {
		if (count == 0) {
			candidate = nums[i];
		}
		if (candidate == nums[i])
			count++;
		else
			count--;
	}
	return candidate;
}

int main()
{
	int n[] = { 2,2,1,1,1,2,2 };
	int m = 7;
	printf("%d\n", majorityElement(n, m));
}