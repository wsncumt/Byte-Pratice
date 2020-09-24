//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//复制字符串
//#include <stdio.h>
//#include <assert.h>
//char* my_strcp(char* dest, const char* src)
//{
//    char* ret = dest;
//    assert(dest != NULL);
//    assert(src != NULL);
//    while (*dest++ = *src++)
//    {
//        ;
//    }
//    return ret;
//}
//
//int main(void)
//{
//    char arr1[] = "Hello World!";
//    char arr2[50] = { 0 };
//    //my_strcp(arr2,arr1);
//    //printf("%s",arr1);
//    printf("%s", my_strcp(arr2, &arr1));
//    return 0;
//}
////求字符串长度
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* arr)
//{
//    assert(arr != NULL);
//    int count = 0;
//    char* point = arr;
//    while (*point != 0)
//    {
//        count++;
//        point++;
//    }
//    return count;
//}
//
//int main(void)
//{
//    char str[] = "Hello Word!";
//    printf("%d", my_strlen(str));
//    return 0;
//}
//
////编写一个函数，使得数组中奇数在前边，偶数在后边
//#include <stdio.h>
//
//void Sort_Arr(int* arr, int sz)
//{
//    int* left = arr;
//    int* right = arr + sz - 1;
//    int tmp;
//    while (left < right)
//    {
//        if ((*left % 2) == 1)
//        {
//            left++;
//        }
//        if ((*right % 2) == 0)
//        {
//            right--;
//        }
//        if ((*left) % 2 == 0 && (*right) % 2 == 1)
//        {
//            tmp = *left;
//            *left = *right;
//            *right = tmp;
//        }
//    }
//}
//
//void Print_Arr(const int arr[], int sz)
//{
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//
//int main(void)
//{
//    int arr[10] = { 20,14,15,381,19,76,44,43,17,87 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    Sort_Arr(arr, sz);
//    Print_Arr(arr, sz);
//    return 0;
//}
