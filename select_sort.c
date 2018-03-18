#include<stdio.h>
#include<stdlib.h>

void swap(int*a, int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void select_sort(int a[], int n)
{
	int i, j, min, m;
	for (i = 0; i < n - 1; i++){
		min = i;       //查找最小值
		for (j = i + 1; j < n; j++){
			if (a[min] > a[j]){
				min = j;
			}
		}
		if (min != i){
			swap(&a[min], &a[i]);
			printf("第%d趟排序结果为:\n", i + 1);
			for (m = 0; m < n; m++){
				if (m > 0){
					printf("");
				}
				printf("%d", a[m]);
			}
			printf("\n");
		}
	}
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)  {
		int i;
		int*a = (int*)malloc(sizeof(int)*n);
		for (i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		select_sort(a, n);
		printf("最终排序结果为:\n");
		for (i = 0; i < n; i++){
			if (i > 0) {
				printf("");
			}
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}