#include <stdio.h>
#include <stdlib.h>

int numJewelsInStones(char* J, char* S) {
	int i, j, sign;
	i = 0;
	sign = 0;
	while (J[i] != 0)
	{
		j = 0;
		while (S[j] != 0)
		{
			if (S[j] == J[i])
				sign++;
			j++;
		}
		i++;
	}
	return sign;
}

int main()
{
	char S[] = "aA";
	char J[] = "aAAbbbb";
	printf("%s", numJewelsInStones(S,J));
	return 0;
}
