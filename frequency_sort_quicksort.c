#include "stdafx.h"

#include <stdlib.h>

struct CharInfo {
	int c : 8;     /* 字符 */
	int num : 24;  /* 字符出现的次数 */
};

typedef int(*Compfun)(struct CharInfo *a, struct CharInfo *b);

/* 排序的比较函数 */
int comp(struct CharInfo *a, struct CharInfo *b) {
	return a->num < b->num;
}

/* 快排, 比较函数可通过形参传入 */
void sortCharInfo(struct CharInfo charinfo[], int begin, int end, Compfun comp)
{
	int i = begin, j = end - 1;
	struct CharInfo tmp;
	if (begin >= end - 1)
		return;

	tmp = charinfo[begin]; /* 结构体可以用等号赋值, 相当于memcpy */
	while (i < j) {
		while (i < j && charinfo[j].num <= tmp.num)
			j--;
		if (i < j)
			charinfo[i++] = charinfo[j];
		while (i < j && charinfo[i].num > tmp.num)
			i++;
		if (i < j)
			charinfo[j--] = charinfo[i];
	}
	charinfo[i] = tmp;

	sortCharInfo(charinfo, begin, i, comp);
	sortCharInfo(charinfo, i + 1, end, comp);
}

char *frequencySort(char *s) {
	int len, num, memLen, i, j, k;
	struct CharInfo *charinfo;
	int *charNums;
	char *re;

	memLen = sizeof(int) * ('z' + 1);
	charNums = (int *)malloc(memLen); /* 下标表示字符, 对应值为该字符出现的次数 */
	memset(charNums, 0, memLen);
	len = 0;  /* 输入的字符串长度 */
	num = 0;  /* 出现的字符种类 */

	while (*s) {
		charNums[*s]++;
		len++;
		if (charNums[*s] == 1)
			num++;
		s++;
	}

	charinfo = (struct CharInfo *)malloc(sizeof(struct CharInfo) * num);
	j = 0;
	for (i = 0; i <= 'z'; i++) {
		if (charNums[i] > 0) {
			charinfo[j].c = i;
			charinfo[j].num = charNums[i];
			j++;
		}
	}

	sortCharInfo(charinfo, 0, num, comp);

	re = (char *)malloc(len + 1);
	re[len] = 0;
	k = 0;
	for (i = 0; i < num; i++) {
		for (j = 0; j < charinfo[i].num; j++) {
			re[k++] = charinfo[i].c;
		}
	}

	free(charNums);
	free(charinfo);
	return re;
}

int main() {
	char test[] = "hello";
	printf("%s\n", test);
	char *re = frequencySort(test);
	printf("%s\n", re);
	return 0;
}