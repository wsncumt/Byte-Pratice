#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
////在屏幕上打印杨辉三角
//long long Fac(long long n)
//{
//    long long i;
//    long long fac = 1;
//    if (n == 0)
//    {
//        return 1;
//    }
//    for (i = 1; i <= n; i++)
//    {
//        fac *= i;
//    }
//    return fac;
//}
//
//void Pas(long long n)
//{
//    long long i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%lld ", Fac(i) / (Fac(i - j) * Fac(j)));
//        }
//        printf("\n");
//    }
//}
//
//int main(void)
//{
//    long long n;
//    printf("请输入杨辉三角的行数：");
//    scanf("%lld", &n);
//    printf("\n打印的杨辉三角如下：\n\n");
//    Pas(n);
//    return 0;
//}

////日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
////以下为4个嫌疑犯的供词:
////A说：不是我。
////B说：是C。
////C说：是D。
////D说：C在胡说
////已知3个人说了真话，1个人说的是假话。
////现在请根据这些信息，写一个程序来确定到底谁是凶手。
////判断凶手：
//void Killer()
//{
//	char killer = ' ';
//	for (killer = 'A';killer<='D';killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{ 
//			printf("凶手是%c\n。", killer);
//		}
//	}
//}
//
//int main(void)
//{
//	Killer();
//	return 0;
//}


//判断名次
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
int List()
{
	int a, b, c, d, e, f;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((b == 2 && a != 3) || (b != 2 && a == 3))
						{
							if ((b == 2 && e != 4) || (b != 2 && e == 4))
							{
								if ((c == 1 && d != 2) || (c != 1 && d == 2))
								{
									if ((c == 5 && d != 3) || (c != 5 && d == 3))
									{
										if ((e == 4 && a != 1) || (e != 4 && a == 1))
										{
											if ((a!=b) && (b != c)&& (c != d)&& (d != e) && (a != c) && (a!=d) && (a!=e) && (b!=d))
											{
												printf("A的排名是：%d\n",a);
												printf("B的排名是：%d\n", b);
												printf("C的排名是：%d\n", c);
												printf("D的排名是：%d\n", d);
												printf("E的排名是：%d\n", e);
												return 0;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
int main(void)
{
	List();
	return 0;
}