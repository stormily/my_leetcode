#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize) {
	int i, n = 0, max = 0;
	for (i = 0; i < numsSize; i++) {
		if (nums[i] == 1) {
			n++;
			if (n > max)
				max = n;
		} else
			n = 0;
	}
	return max;
}

int main()
{
	int n[] = { 0,1,1,0,1,1,1,0 };
	int nS = 8;
	printf("%d\n", findMaxConsecutiveOnes(n, nS));
}