#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
//arr��һ������һά����
void Printf_Arr(int* arr,int sz)
{
	int i=0;
	while (i < sz)
	{
		printf("%d ",*(arr+i));
		i++;
	}
	printf("\n");
}

//дһ����������������һ���ַ���������


int main(void)
{
	int arr1[] = { 0,2,3,4,5,6,7 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Printf_Arr(arr1, sz);
	return 0;
}