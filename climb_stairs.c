#include <stdio.h>

int climbStairs(int n) {
	int a = 1, b = 1;
	while (n--) {
	    b += a;
		a = b - a;
		
	}
	return a;

}
int main()
{
	int a = 3;
	printf("%d\n", climbStairs(a));
}