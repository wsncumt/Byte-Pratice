#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define PRICES 1 //汽水的单价
#define NUM 2  //换一瓶汽水需要的空瓶数

int EmptyBottle( int n)
{
	int ret = 0;
	while (n > NUM-1)
	{
		ret += n / NUM;
		n = n / NUM + n % NUM;
	}
	return ret;
}

int main(void)
{
	int money=0;
	int n = 0;
	printf("请输入钱数:>\n");
	scanf("%d",&money);
	n = money / PRICES;
	printf("\n%d元总共能喝到%d瓶饮料。",money, n+EmptyBottle(n));
	return 0;
}