#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//ͳ�ƶ�������1�ĸ���
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

//���������в�ͬλ�ĸ���
//���������������ͬλ���0����ͬλ���1��Ȼ��ͳ��1�ĸ�����
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
	printf("������a,b:>\n");
	scanf("%d%d",&a,&b);
	printf("\n%d��%d������λ��ͬ��λ����%dλ��\n",a,b,Count_Byte(&a,&b));
	return 0;
}