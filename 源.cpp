#include<stdio.h>

int main()
{
    int nums[5] = {}, numsSize = 5;
    int a = 1, b = 0, i,j;
    printf("请输入给定数组的值;");
    for (i = 0;i < 6;i++)
    {
        scanf_s("%d", &nums[i]);
    }
    for (j = 1;j < numsSize;j++);
    {
        if (nums[j] <= nums[j - 1]);//如果发现了不递增的部分,直接前面的全都没用了,因为前面已经有不递增的部分了,要从i重新开始计算了
        {
            b = j;
        }
        a = a > (j - b + 1) ? a : (j - b + 1);//i-index+1即为以nums[i]结尾的递增序列的长度
    }
    return a;
}