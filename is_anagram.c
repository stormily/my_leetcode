#include <stdio.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
	int i, j, slen, tlen, flag = 1;;
	slen = strlen(s);
	tlen = strlen(t);
	if (s[0] == 0 && t[0] == 0) 
		return true;
	if (slen != tlen) 
		return false;  
	int v[26] = { 0 };                 
	for (int i = 0; i < slen; i++) {
		v[s[i] - 'a'] += 1;
	}
	for (int i = 0; i < tlen; i++) {
		v[t[i] - 'a'] -= 1;
	}
	for (int i = 0; i < 26; i++) {           
		if (v[i] != 0)
			flag = 0;
	}
	if (flag == 1)
		return true;
	else
		return false;
}
int main()
{
	char s[] = "aa";
	char t[] = "aa";
	printf("%d\n", isAnagram(s, t));
}