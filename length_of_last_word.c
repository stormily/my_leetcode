#include "stdafx.h"

#define IS_ALPHA(c) (((c) >= 'a' && (c) <='z') || ((c) >= 'A' && (c) <= 'Z'))

int lengthOfLastWord(char* s) {
	int num = 0;
	
	while (*s) {
		if (IS_ALPHA(*s)) {
			num++;
		} else {
			if (IS_ALPHA(*(s + 1)))
				num = 0;
		}
		s++;
	}

	return num;
}

int main() {
	char s[] = " a ";
	int len = lengthOfLastWord(s);

	printf("len is %d\n", len);
	return 0;
}