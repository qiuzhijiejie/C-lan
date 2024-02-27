#include<stdio.h>
//int num(int arr[], int n)//单身狗题目（方法一）
//{
//	int result = 0;
//	for (int i = 0; i < n; i++) {
//		result ^= arr[i];//通过异或的方法.a^a=0, 0^b=b.
//	}
//	return result;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,6,7 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	printf("单身狗是%d\n", num(arr, n));
//	return 0;
//}

//int main()//单身狗（方法2）
//{
//	int arr[] = { 1,2,3,1,2 };
//	int len = (sizeof(arr) / sizeof(arr[0]));
//	int num = arr[0];             //或者 int num=0
//	for (int i = 1; i < len; i++)//i=0
//	{
//		num = num ^ arr[i];//0^1^2^3^1^2
//	}
//	printf("%d\n", num);
//	return num;
//}



//打印整数二进制的奇数位和偶数位
//int funce(num)
//{
//	for (int i = 31; i >= 1; i -= 2)//偶数的
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2)//奇数的
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	return 0;
//}
//	int main(){
//	funce(7);
//	return 0;
//}
