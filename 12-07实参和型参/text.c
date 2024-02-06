#include <stdio.h>
//int is_year( int y)
//{
//	
//	if (((y % 4 == 0) && y % 100 != 0) || (y % 400 == 0))
//	   return 1;
//	else
//	   return 0;
// }
//int main()
//{
//	int y;
//	    printf("请输入年份:");
//		scanf_s("%d", &y);
//		if (is_year( y))
//			printf("%d是闰年\n", y);
//		else
//			printf("%d不是闰年\n", y);
//return 0;
//}     

//int bit(int arr[], int len, int key)//用函数写的二分法
//{
//	int left=0;
//	int right = len - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		    
//		else if( arr[mid] == key)
//		{
//				return mid;
//		}
//		else 
//		{
//			right = mid - 1;
//		}
//	
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int len = sizeof (arr )/ sizeof arr[0];
//	int ret = bit(arr, len, 3);
//	if (ret != -1)
//	{
//		printf("要找的数是：%d\n", arr[ret]);
//		printf("数组下标是；%d\n", ret);
//	}
//	else {
//		printf("没有找到");
//	}
//return 0;
//}

//void Init(int arr[], int len)//实现函数init() 初始化数组为全0
//{
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = i + 1;
//	}
//}
//int print(int arr[], int len)//实现print()  打印数组的每个元素
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int len)//实现reverse()  函数完成数组元素的逆置。
//{
//	int left=0;
//	int right = len - 1;
//	int tfp;
//	while (right > left)
//	{
//		int tfp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tfp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof arr[0];
//	Init( arr,len);
//	print( arr,len);
//	Reverse( arr,len);
//	print( arr,len);
//    return 0;
//}

//int is_prime(int num)函数is_prime，判断一个数是不是素数
//{
//	if (num < 2) 
//	{
//		return 0;
//	}
//	for (int i = 2; i * i <= num; i++)
//	{
//		if (num % i == 0) 
//		{
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int num=0;
//	printf("100-200的素数:%d", num);
//	for (int num = 100; num < 201; num++)
//	{
//		if (is_prime(num)) 
//		{
//			printf("%4d", num);
//		}
//	}
//	return 0;
//}

//int scb(int num )//实现一个函数，打印乘法口诀表
//{
//	for (int i = 1; i <= num; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", j, i, i * j);
//		}
//	    printf("\n");
//	}
//	printf("\n");
//}
//int main()
//{
//	int i;
//	printf("请输入行列数:");
//	scanf_s("%d",&i);
//	printf("\n");
//	scb(i);
//	return 0;
//}

//int main() //【一维数组】BC92 - 逆序输出
//{
//    printf("请输入10个数:\n");
//    int arr[10] = { 0 };
//    for (int i = 0; i < 10; i++)
//    {
//        scanf_s("%d",&arr[i]);
//    }
//    int  left= 0;
//    int  right = 9;
//    int tpf = 0;
//     while (right > left)
//     {
//            tpf = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tpf;
//            left++;
//            right--;
//     }
//     printf("逆序是:");
//     for (int i = 0; i <10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
//}



