#include <stdio.h>
#include <malloc.h>

bool containsDuplicate(int* nums, int numsSize) {
	int i, j;
	int *number;
	number = (int*)calloc(numsSize, sizeof(int));
	number[0] = nums[0];
	for (i = 1; i < numsSize; i++) {
		for (j = 0; j < i; j++) {
			if (number[j] == nums[i])
				return true;
		}
		number[i] = nums[i];
	}
	return false;
}
int main()
{
	int nums[] = { 1, 2, 3, 1 };
	int numsSize = 4;
	printf("%d\n", containsDuplicate(nums, numsSize));
}