#include <stdio.h>
#include <stdlib.h>


int hammingDistance(int x, int y) {

	int i = 0, j = 0, sign = 0, num = 0;
	int tema = x;
	int temb = y;

	if (tema > temb) {
		while (tema != 0){
			tema = (tema - tema % 2) / 2;
			num++;
		}
	} else {
		while (temb != 0) {
			temb = (temb - temb % 2) / 2;
			num++;
		}
	}

	int *a, *b;
	a = (int*)malloc(sizeof(int) * (num + 2));
	b = (int*)malloc(sizeof(int) * (num + 2));

	for (i = 0; i <= num + 1; i++) {
		a[i] = 0;
		b[i] = 0;
	}

	while (x != 0) {
		a[i] = x % 2;
		x = (x - a[i]) / 2;
		i++;
	}
	while (y != 0) {
		b[j] = y % 2;
		y = (y - b[j]) / 2;
		j++;
	}
	for (i = 0; i <= num; i++) {
		if (a[i] != b[i])
			sign++;

	}

	free(a);
	free(b);

	return sign;
}

int main()
{
	int x, y;
	x = 4;
	y = 14;

	printf("%d\n ", hammingDistance(x, y));
	return 0;
}