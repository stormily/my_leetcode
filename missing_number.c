#include <stdio.h>
#include <malloc.h>

int missingNumber(int* nums, int numsSize) {
	int i, flag;
	int *array;
	array = (int*)calloc(numsSize + 1, sizeof(int));
	for (i = 0; i < numsSize; i++) {
		array[nums[i]]++;
	}
	for (i = 0; i <= numsSize; i++) {
		if (array[i] == 0)
			flag = i;
	}
	return flag;
}

int main()
{
	int n[] = {0};
	int numsSize = 1;
	printf("%d\n", missingNumber(n, numsSize));
}