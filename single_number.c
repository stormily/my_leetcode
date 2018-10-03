#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
	int tmp = 0, i;
	for (i = 0; i < numsSize; ++i)
		tmp ^= *(nums + i);
	return tmp;
}

int main()
{
	int a[] = { 1,1,3,2,2 };
	int num = 5;
	printf("%d\n", singleNumber(a, num));
}