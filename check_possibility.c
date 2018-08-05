#include <stdio.h>

bool checkPossibility(int* nums, int numsSize) {
	int cnt = 0;
	bool flag;
	for (int i = 1; i < numsSize; i++) {
		if (nums[i - 1] > nums[i]) {
			if (i >= 2 && nums[i] >= nums[i - 2])
				nums[i - 1] = nums[i];
			else if (i == 1)
				nums[i - 1] = nums[i];
			else
				nums[i] = nums[i - 1];
			cnt++;
		}
		if (cnt > 1) {
			flag = false;
			break;
		} else {
			flag = true;
		}
	}
	return flag;
}

int main()
{
	int f[] = { 4,2,3 };
	int fb = 3;
	printf("%d\n", checkPossibility(f, fb));
}