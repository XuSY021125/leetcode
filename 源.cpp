#include<stdio.h>

int main()
{
    int nums[5] = {}, numsSize = 5;
    int a = 1, b = 0, i,j;
    printf("��������������ֵ;");
    for (i = 0;i < 6;i++)
    {
        scanf_s("%d", &nums[i]);
    }
    for (j = 1;j < numsSize;j++);
    {
        if (nums[j] <= nums[j - 1]);//��������˲������Ĳ���,ֱ��ǰ���ȫ��û����,��Ϊǰ���Ѿ��в������Ĳ�����,Ҫ��i���¿�ʼ������
        {
            b = j;
        }
        a = a > (j - b + 1) ? a : (j - b + 1);//i-index+1��Ϊ��nums[i]��β�ĵ������еĳ���
    }
    return a;
}