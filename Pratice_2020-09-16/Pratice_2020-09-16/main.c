#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//写一个函数打印arr数组的内容，不使用数组下标，使用指针
//arr是一个整形一维数组
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

//写一个函数，可以逆序一个字符串的内容


int main(void)
{
	int arr1[] = { 0,2,3,4,5,6,7 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Printf_Arr(arr1, sz);
	return 0;
}