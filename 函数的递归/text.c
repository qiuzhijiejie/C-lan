#include<stdio.h>
//int fbnq(int nums) //非递归的求第n个斐波那契数的代码
//{
//	if (nums <= 1)
//	{
//		return nums;
//	}
//	int a = 0;
//	int b = 1;
//	for (int i = 2; i <nums; i++)
//	{	int c= a;
//		a = b;	
//		b = a+c;
//	}
//	return b;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入数字 num：");
//	scanf_s("%d",&num);
//	int qbs = fbnq(num);
//	printf("第%d的斐波那契数是%d", num, qbs);
//return 0;
//}



//int qns(int num)//用递归的方法
//{
//	if (num <= 1)
//	{
//		return num;
//	}
//	else
//	{
//		return qns(num-1) + qns(num-2);
//	}
//}
//int main()
//{
//	int nums = 5;
//	int numss = qns(nums);
//	printf("第%d个数输出的是：%d\n", nums,numss);
//	return 0;
//}

//int pf(int numa, int numb) //编写一个函数实现n的k次方，使用递归实现。
//{
//	if (numb < 1) 
//	{
//		return 1;
//	}
//	else 
//	{
//		return numa * pf(numa, numb - 1);
//	}
//}
//int main()
//{
//	int numa,numb;
//	printf("请输入基数和指数:");
//	scanf_s("%d %d", &numa, &numb);
//	int nums = pf( numa,numb);
//	printf("次方是:%d\n", nums);
//	return 0;
//}

//int DigitSum(num)//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和.例如：
//                //例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//{
//	if (num < 10)
//	{
//		return num;
//	}
//	return num % 10 + DigitSum(num / 10);
//}
//int main()
//{
//	int num;
//	printf("请输入：");
//	scanf_s("%d", &num);
//	int nums = DigitSum(num);
//	printf("%d",nums);
//	return nums;
//}

//long long num(int n)//非递归实现求n的阶乘（不考虑溢出的问题）
//{
//	long long result = 1;
//	for (int i = 2; i <=n; i++)
//	result *= i;
//	return result;
//	
//}
//int main()
//{
//	long long n=0;
//	printf("请输入数字:");
//	scanf_s("%d", &n);
//	int nums = num(n);
//	printf("%d的阶乘是%lld", n, nums);
//	return 0;
//}


//long long num(int n)//递归实现求n的阶乘（不考虑溢出的问题）
//{
//	
//	if (n <= 1)
//
//		return 1;
//	else
//		return n* num(n - 1);
//
//}
//int main()
//{
//	long long n=0;
//	printf("请输入:");
//	scanf_s("%d",&n);
//	int nums = num(n);
//	printf("%d的阶乘是:%lld", n, nums);
//	return 0;
//}


//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}


int i;
int main()
{
    i--;
    if (i > sizeof(i))
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }

    return 0;
}







