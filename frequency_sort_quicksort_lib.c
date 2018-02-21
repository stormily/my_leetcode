#include "stdafx.h"

#include <stdlib.h>

typedef struct _CharInfo {
	char c;
	int num;
} CharInfo;

int charNums['z' + 1];

int comp (CharInfo *a, CharInfo *b) {
	return a->num < b->num;
}

typedef int (*Compfun)(CharInfo *a, CharInfo *b);



void sortCharInfo(CharInfo charinfo[], int begin, int end, Compfun comp)
{
	int i = begin, j = end - 1;
	CharInfo tmp;
	if (begin >= end - 1)
		return;

	tmp = charinfo[begin];
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

char* frequencySort(char* s) {
	int len = 0, num = 0, i, j, k;
	CharInfo *charinfo;
	char *re;

	memset(charNums, 0, sizeof(charNums));
	while (*s) {
		charNums[*s++]++;
		len++;
	}

	for (i = 0; i <= 'z'; i++) {
		if (charNums[i] > 0) {
			num++;
		}
	}

	charinfo = (CharInfo *)malloc(sizeof(CharInfo) * num);
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