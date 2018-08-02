#include <stdio.h>

bool checkRecord(char* s) {
	int i = 0, m = 0, n = 0;
	while (s[i] != 0) {
		if (s[i] == 'A')
			m++;
		if (i > 1)
			if (s[i] == 'L' && s[i - 1] == 'L' && s[i - 2] == 'L')
				n++;
		i++;
	}
	if (m <= 1 && n == 0)
		return true;
	else
		return false;
}

int main()
{
	char n[] = "PPALLP";
	printf("%d\n", checkRecord(n));
}