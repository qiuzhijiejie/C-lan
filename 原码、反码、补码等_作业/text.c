#include<stdio.h>
//int main()//交换两个变量（不创建临时变量
//{
//	int a = 10;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;  //a^a=0  0^b=b
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d b=%d", a, b);
//	return 0;
//}


//int main()//统计二进制中1的个数.方法一
//{
//	int n = 3;
//	int count = 0;
//	while (n) {
//
//		n = n & (n - 1);//能把二进制最右边的1去掉
//		count++;
//	}
//	printf("有%d个1\n", count);
//	return 0;
//}


//int main()//统计二进制中1的个数.方法二
//{
//	int num = 10;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//		count++;
//	}
//	printf("有%d个1\n", count);
//	return 0;
//}




//int diff(int m, int n)
//{
//	int rox = m ^ n;//把1999和2299异或起来看看有多少个一。
//	int count=0;    //异或：相同出0，不同出1.
//	while (rox)
//	{
//		//rox = rox & (rox - 1);
//		rox &= rox - 1;//这里使用了Brian Kernighan算法，该算法在每次迭代中消除最右边的1。
//		count++;
//	}
//	return("%d", count);
//}
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int diffs = diff(m, n);
//	printf("两个数二进制中不同位的个数是：%d\n", diffs);
//	return 0;
//}




