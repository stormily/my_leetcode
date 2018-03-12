#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int maxSubArray(int* nums, int numsSize) {
	int i = 0, max;
	int tem = nums[0];
	max = nums[0];
	for (i = 1; i < numsSize; i++) {
		if (tem < 0)
			tem = nums[i];
		else
			tem = tem + nums[i];

		if (tem > max)
			max = tem;
	}
	return max;
}

int main() {
	int  nums[9] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	printf("%d\n", maxSubArray(nums, 9));

	return 0;
}
