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
}

//��ӡ�������е�����λ��ż��λ
void Print_Odd_Even(const int* x)
{
	int num = *x;
	int i;
	printf("\n%d������λ��ż��λ��\n",num);
	printf("��ӡ����λ");
	for (i = 31; i > 0; i = i - 2)
	{
		printf("%d",(num >> i)&1);
	}
	printf("\n");
	printf("��ӡż��λ");
	for (i = 30; i >= 0; i = i - 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}

//������������
void swap(int* x, int* y)
{
	*x = (*x) ^ (*y);
	*y = (*x) ^ (*y);
	*x = (*x) ^ (*y);
}

int main(void)
{
	int a, b;
	printf("������a,b:>\n");
	scanf("%d%d",&a,&b);
	printf("�������ֵΪ��\na=%d , b=%d��\n",a,b);
	printf("\n%d��%d������λ��ͬ��λ����%dλ��\n",a,b,Count_Byte(&a,&b));
	Print_Odd_Even(&a);
	Print_Odd_Even(&b);
	swap(&a, &b);
	printf("\na��b�������ֵ�ǣ�\na=%d , b=%d��",a,b);
	return 0;
}