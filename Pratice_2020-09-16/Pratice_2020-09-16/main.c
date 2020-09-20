#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>

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
void Reverse(char* str)
{
	char* left=str;
	char* right =str+ strlen(str)-1;
	char tmp;
	while (left<right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


//判断位数:判断一个数字总共有几位
int Count(int x)
{
	if (x / 10 > 0)
	{
		return Count(x / 10)+1;
	}
	else
	{
		return 1;
	}
}

//水仙花数
int Nar_Num(const int x)
{
	int n = Count(x);
	int i;
	int sum = 0;
	int a = x;
	for (i = 0; i < n; i++)
	{
		sum += pow((a % 10), n);
		a /= 10;
	}
	if (sum == x)
	{
		return 1;
	}
	return 0;
}

int Sum(const int a, const int n)
{
	int i;
	int x = a;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += x;
		x = x*10+a;
	}
	return sum;
}

//打印菱形
void Print_Diamond(const int n)
{
	int i;
	int j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = n-1; i > 0; i--)
	{
		for (j = 1; j <= n-i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

//int main(void)
//{
	//int arr1[] = { 0,2,3,4,5,6,7 };
	//int sz = sizeof(arr1) / sizeof(arr1[0]);
	//Printf_Arr(arr1, sz);

	//int i;
	//int sum = 0;
	//for (i = 0; i <= 100000; i++)
	//{
	//	if (Nar_Num(i))
	//	{
	//		printf("%d ", i);
	//		sum++;
	//	}
	//}
	//printf("\n\n0～100000共有%d个水仙花数。", sum);
	//int a, n;
	//printf("请输入：(a,n),其中a大于0小于10\n");
	//scanf("%d %d",&a,&n);
	//printf("%d",Sum(a,n));
	//int n;
	//printf("请输入n：");
	//scanf("%d",&n);
	//Print_Diamond(n);
//	char str[] = "Hello World!";
//	printf("str=%s\n",str);
//	Reverse(str);
//	printf("str1=%s\n", str);
//	return 0;
//}
int main()
{
	char str[101] = { 0 };
	while (gets(str))
	{
		Reverse(str);
		printf("%s\n", str);
		memset(str, 0, sizeof(str) / sizeof(str[0]));
	}
	return 0;
}