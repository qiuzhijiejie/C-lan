#include<stdio.h>
//int main()//����������������������ʱ����
//{
//	int a = 10;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a ^ b;  //a^a=0  0^b=b
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d b=%d", a, b);
//	return 0;
//}


//int main()//ͳ�ƶ�������1�ĸ���.����һ
//{
//	int n = 3;
//	int count = 0;
//	while (n) {
//
//		n = n & (n - 1);//�ܰѶ��������ұߵ�1ȥ��
//		count++;
//	}
//	printf("��%d��1\n", count);
//	return 0;
//}


//int main()//ͳ�ƶ�������1�ĸ���.������
//{
//	int num = 10;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//		count++;
//	}
//	printf("��%d��1\n", count);
//	return 0;
//}




//int diff(int m, int n)
//{
//	int rox = m ^ n;//��1999��2299������������ж��ٸ�һ��
//	int count=0;    //�����ͬ��0����ͬ��1.
//	while (rox)
//	{
//		//rox = rox & (rox - 1);
//		rox &= rox - 1;//����ʹ����Brian Kernighan�㷨�����㷨��ÿ�ε������������ұߵ�1��
//		count++;
//	}
//	return("%d", count);
//}
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int diffs = diff(m, n);
//	printf("�������������в�ͬλ�ĸ����ǣ�%d\n", diffs);
//	return 0;
//}




