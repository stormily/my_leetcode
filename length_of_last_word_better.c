#include "stdafx.h"

int lengthOfLastWord(char* s) {
	int i = 0; 
	int sign;
	int num = 0;
	while (s[i] != '\0'){
		if (s[i] != ' ') {
			num = num + 1;
			sign = num;

		} else if (s[i] == ' ' && num != 0) {
			sign = num;
			num = 0;
		}
	i++;
	}
	return sign;
}

int main() {
	char s[] = "abc cda";
	int len = lengthOfLastWord(s);

	printf("len is %d\n", len);
	return 0;
}