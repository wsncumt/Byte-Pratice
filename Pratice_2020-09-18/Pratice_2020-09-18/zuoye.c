#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define PRICES 1 //��ˮ�ĵ���
#define NUM 2  //��һƿ��ˮ��Ҫ�Ŀ�ƿ��

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
	printf("������Ǯ��:>\n");
	scanf("%d",&money);
	n = money / PRICES;
	printf("\n%dԪ�ܹ��ܺȵ�%dƿ���ϡ�",money, n+EmptyBottle(n));
	return 0;
}