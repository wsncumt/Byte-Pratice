#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//统计二进制中1的个数
int Count_Byte1(const int* x)
{
	int count = 0;
	int tmp = *x;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

//求两个数中不同位的个数
//将两个数异或，则相同位变成0，不同位变成1。然后统计1的个数。
int Count_Byte(const int* x, const int* y)
{
	int count = 0;
	int tmp = (*x) ^ (*y);
	Count_Byte1(&tmp);
	/*while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;*/
}





int main(void)
{
	int a, b;
	printf("请输入a,b:>\n");
	scanf("%d%d",&a,&b);
	printf("\n%d和%d二进制位不同的位数有%d位。\n",a,b,Count_Byte(&a,&b));
	return 0;
}