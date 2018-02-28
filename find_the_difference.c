#include <stdio.h>
#include <stdlib.h>

char findTheDifference(char* s, char* t) {
	int i = 0, j = 0;
	char sign;
	char refer = 'a';
	int charNums['z' + 1] = { 0 };
	int charNumt['z' + 1] = { 0 };

	while (s[i] != 0) {
		sign = s[i];
		charNums[sign]++;
		i++;
	}

	while (t[j] != 0) {
		sign = t[j];
		charNumt[sign]++;
		j++;
	}

	while (charNums[refer] == charNumt[refer]) {
		refer++;
	}

	return refer;
}

int main()
{
	char s[] = "abcd";
	char t[] = "abcde";

	printf("%c\n ", findTheDifference(s, t));
	return 0;
}