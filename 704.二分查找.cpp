#include<stdio.h>

int main()
{
	int nums[6] = {}, target, i, numsSize;
	int left = 0, right = 5, mid = (left + right) / 2;
	printf("�����������Ŀ��ֵ;");
	scanf_s("%d", &target);
	printf("���������������;");
	for (i = 0;i < 6;i++)
	{
		scanf_s("%d", &nums[i]);
	}
	while (left <= right)
	{
		if (nums[mid] == target)
		{
			return mid;
		}
		else if (nums[mid] < target)
		{
			left = mid + 1;
		}
		else if (nums[mid] > target)
		{
			right = mid - 1;
		}
	}
	return -1;
}