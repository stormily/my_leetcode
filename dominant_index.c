#include <stdio.h>

int dominantIndex(int* nums, int numsSize) {
	int max, max1;
	int i, j;
	if (nums[0] > nums[1]) {
		max = nums[0];
		max1 = nums[1];
		j = 0;
	} else {
		max = nums[1];
		max1 = nums[0];
		j = 1;
	}
	for(i = 2; i < numsSize; i++ ){
		if (nums[i] > max) {
			max1 = max;
			max = nums[i];
			j = i;
		}
		if (nums[i] < max && nums[i] > max1) {
			max1 = nums[i];
		}
	}
	if (max >= 2 * max1)
		return j;
	else
		return -1;

}

int main()
{
	int nums[] = { 3, 6, 1, 0 };
	int n = 4;

	printf("%d\n", dominantIndex(nums, n));

	return 0;
}