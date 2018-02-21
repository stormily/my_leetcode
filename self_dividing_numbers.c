#include <stdio.h>
#include <stdlib.h>

static inline int isSelfDevide(int num)
{
	int a, i, j, flag;
	a = 0;
	flag = 0;
	i = num;

	while (i > 0)
	{
		j = i % 10;
		if (j == 0)
			return 0;

		if (num % j == 0)
			flag++;

		a++;
		i /= 10;
	}

	return flag == a;
}

int *selfDividingNumbers(int left, int right, int *returnSize) {
	int i, j;
	int *re, *tmp;

	tmp = (int*)malloc(sizeof(int) * (right - left + 1));
	j = 0;
	for (i = left; i <= right; i++) {
		if (isSelfDevide(i)) {
			tmp[j++] = i;
		}
			
	}

	re = (int*)malloc(j * sizeof(int));
	for (i = 0; i < j; i++)
		re[i] = tmp[i];

	free(tmp);
	*returnSize = j;
	return re;
}

/*
Input:
left = 1, right = 22
Output : [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
*/

int main()
{
	int i;
	int returnSize;
	int *re;
	re = selfDividingNumbers(66, 122, &returnSize);
	printf("%d\n", returnSize);
	for (i = 0; i < returnSize; i++) {
		printf("%d ", re[i]);
	}
	return 0;
}
