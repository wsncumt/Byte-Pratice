#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
////����Ļ�ϴ�ӡ�������
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
//    printf("������������ǵ�������");
//    scanf("%lld", &n);
//    printf("\n��ӡ������������£�\n\n");
//    Pas(n);
//    return 0;
//}

////�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
////����Ϊ4�����ɷ��Ĺ���:
////A˵�������ҡ�
////B˵����C��
////C˵����D��
////D˵��C�ں�˵
////��֪3����˵���滰��1����˵���Ǽٻ���
////�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
////�ж����֣�
//void Killer()
//{
//	char killer = ' ';
//	for (killer = 'A';killer<='D';killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{ 
//			printf("������%c\n��", killer);
//		}
//	}
//}
//
//int main(void)
//{
//	Killer();
//	return 0;
//}


//�ж�����
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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
												printf("A�������ǣ�%d\n",a);
												printf("B�������ǣ�%d\n", b);
												printf("C�������ǣ�%d\n", c);
												printf("D�������ǣ�%d\n", d);
												printf("E�������ǣ�%d\n", e);
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