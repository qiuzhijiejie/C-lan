#include<stdio.h>
//int fbnq(int nums) //�ǵݹ�����n��쳲��������Ĵ���
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
//	printf("���������� num��");
//	scanf_s("%d",&num);
//	int qbs = fbnq(num);
//	printf("��%d��쳲���������%d", num, qbs);
//return 0;
//}



//int qns(int num)//�õݹ�ķ���
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
//	printf("��%d����������ǣ�%d\n", nums,numss);
//	return 0;
//}

//int pf(int numa, int numb) //��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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
//	printf("�����������ָ��:");
//	scanf_s("%d %d", &numa, &numb);
//	int nums = pf( numa,numb);
//	printf("�η���:%d\n", nums);
//	return 0;
//}

//int DigitSum(num)//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��.���磺
//                //���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
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
//	printf("�����룺");
//	scanf_s("%d", &num);
//	int nums = DigitSum(num);
//	printf("%d",nums);
//	return nums;
//}

//long long num(int n)//�ǵݹ�ʵ����n�Ľ׳ˣ���������������⣩
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
//	printf("����������:");
//	scanf_s("%d", &n);
//	int nums = num(n);
//	printf("%d�Ľ׳���%lld", n, nums);
//	return 0;
//}


//long long num(int n)//�ݹ�ʵ����n�Ľ׳ˣ���������������⣩
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
//	printf("������:");
//	scanf_s("%d",&n);
//	int nums = num(n);
//	printf("%d�Ľ׳���:%lld", n, nums);
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







