#include <stdio.h>
#include <string.h>

bool canConstruct(char* ransomNote, char* magazine) {
	int i, j, rlen, mlen, flag = 1;;
	rlen = strlen(ransomNote);
	mlen = strlen(magazine);
	if (rlen > mlen)
		return false;
	int v[26] = { 0 };
	for (int i = 0; i < rlen; i++) {
		v[ransomNote[i] - 'a'] += 1;
	}
	for (int i = 0; i < mlen; i++) {
		v[magazine[i] - 'a'] -= 1;
	}
	for (int i = 0; i < 26; i++) {
		if (v[i] > 0)
			flag = 0;
	}
	if (flag == 1)
		return true;
	else
		return false;
}
int main()
{
	char s[] = "aba";
	char t[] = "aac";
	printf("%d\n", canConstruct(s, t));
}