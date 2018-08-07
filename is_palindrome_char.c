#include <stdio.h>

bool isPalindrome(char* s) {
	int left, right, i = 0, j = 0, flag = 0;
	while (s[i] != 0)
		i++;
	left = 0;
	right = i - 1;

	if (i == 1)
		return true;

	if (s[0] == 0)
		return true;

	while ((s[j] > 'z' || (s[j] > 'Z' && s[j] < 'a') || (s[j] > '9' && s[j] < 'A') || s[j] < '0') && s[j] != 0) {
		j++;
	}
	if (j == i)
		return true;

	while (left < right) {
		while (s[left] > 'z' || (s[left] > 'Z' && s[left] < 'a') || (s[left] > '9' && s[left] < 'A') || s[left] < '0')
			left++;
		if (s[left] <= 'Z' && s[left] >= 'A') {
			s[left] = s[left] + 32;
		}

		while (s[right] > 'z' || (s[right] > 'Z' && s[right] < 'a') || (s[right] > '9' && s[right] < 'A') || s[right] < '0')
			right--;
		if (s[right] <= 'Z' && s[right] >= 'A') {
			s[right] = s[right] + 32;
		}

		if (s[left] == s[right]) {
			left++;
			right--;
			flag = 1;
		}
		else
			return false;
	}
	return flag;
}

int main()
{
	char a[] = ".,";
	printf("%d\n", isPalindrome(a));
}