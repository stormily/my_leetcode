#include <stdio.h>
#include <stdlib.h>

char* reverseString(char* s) {
	int i, j;
	char *re;
	j = 0;
	while (s[j] != 0) {
		j++;
	}
	re = (char*)malloc(j + 1);
	for (i = 0; i <= j; i++) {
		re[i] = s[j - i - 1];
	}
	re[j] = 0;
	return re;
}

int main()
{
	char s[] = "Revolt";
	printf("%s", reverseString(s));
	return 0;
}
