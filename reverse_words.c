#include <stdio.h>
#include <stdlib.h>

char* reverseWords(char* s) {
	int i, j, sign, num;
	i = 0;
	j = 0;
	sign = 0;
	num = 0;
	char* tem;
	while (s[num] != 0) {
		num++;
	}
	tem = (char*)malloc(num + 1);
	while (s[i] != 0) {
		if (s[i] != ' ' && s[i + 1] != '\0') {
			tem[j] = s[i];
			j++;
		}
		else if (s[i] == ' ') {
			for (j = j - 1; j >= 0; j--) {
				s[sign] = tem[j];
				sign++;
			}
			sign = i + 1;
			j = 0;
		}
		else if (s[i + 1] == '\0') {
			tem[j] = s[i];
			for (j; j >= 0; j--) {
				s[sign] = tem[j];
				sign++;
			}
			return s;
		}

		i++;
	}
}
int main()
{
	char s[] = "Let's take LeetCode contest";

	printf("%s\n ", reverseWords(s));
	return 0;
}