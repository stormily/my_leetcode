#include <stdio.h>
#include <stdlib.h>

bool judgeCircle(char* moves) {
	int a, b, i;
	a = 0;
	b = 0;
	i = 0;
	while (moves[i] != 0) {
		switch (moves[i]) {
		case'U':a++;
			break;
		case'D':a--;
			break;
		case'L':b++;
			break;
		case'R':b--;
			break;
		}
		i++;
	}
	if (a == 0 && b == 0)
		return true;
	else
		return false;
}
int main()
{
	char moves[] = "LL";

	printf("%s\n ", judgeCircle(moves));
	return 0;
}