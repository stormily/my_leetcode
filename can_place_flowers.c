#include <stdio.h>
#include <string.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
	int i, max = 0;
	if (flowerbed[0] == 0 && flowerbed[1] == 0) {
		max++;
		flowerbed[0] = 1;
	}
	if (flowerbed[flowerbedSize - 2] == 0 && flowerbed[flowerbedSize - 1] == 0) {
		max++;
		flowerbed[flowerbedSize - 1] = 1;
	}
	for (i = 1; i < flowerbedSize - 2; i++) {
		if (flowerbed[i] == 0) 
			if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
				flowerbed[i] = 1;
				max++;
			}
	}
	if (max < n)
		return false;
	else
		return true;
}
int main()
{
	int f[] = { 0, 0, 1, 0, 1 };
	int fb = 5;
	int n = 2;
	printf("%d\n", canPlaceFlowers(f, fb, n));
}