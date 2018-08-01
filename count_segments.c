#include <stdio.h>

int countSegments(char* s) {
	int i = 1, sum = 0;
	if (s[0] != 0 && s[0] != ' ')
		sum++;
	while (s[i] != 0) {
		if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != 0)
			sum++;
		i++;
	}
	return sum;
}

int main()
{
	char a[] = ", , , ,        a, eaefa";
	printf("%d", countSegments(a));
}