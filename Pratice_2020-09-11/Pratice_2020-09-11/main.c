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
}

//打印二进制中的奇数位和偶数位
void Print_Odd_Even(const int* x)
{
	int num = *x;
	int i;
	printf("\n%d的奇数位和偶数位：\n",num);
	printf("打印奇数位");
	for (i = 31; i > 0; i = i - 2)
	{
		printf("%d",(num >> i)&1);
	}
	printf("\n");
	printf("打印偶数位");
	for (i = 30; i >= 0; i = i - 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}

//交换两个变量
void swap(int* x, int* y)
{
	*x = (*x) ^ (*y);
	*y = (*x) ^ (*y);
	*x = (*x) ^ (*y);
}

int main(void)
{
	int a, b;
	printf("请输入a,b:>\n");
	scanf("%d%d",&a,&b);
	printf("你输入的值为：\na=%d , b=%d。\n",a,b);
	printf("\n%d和%d二进制位不同的位数有%d位。\n",a,b,Count_Byte(&a,&b));
	Print_Odd_Even(&a);
	Print_Odd_Even(&b);
	swap(&a, &b);
	printf("\na和b交换后的值是：\na=%d , b=%d。",a,b);
	return 0;
}