#define _CRT_SECURE_NO_WARNINGS 1
/*1ʵ��һ���������ж�һ�����ǲ���������
��������ʵ�ֵĺ�����ӡ100��200֮���������*/
//#include<stdio.h>
//#include<math.h>
//void ifprime(int n) {
//	int i;
//	double k;
//	k = sqrt(n);
//	for (i = 2; i <= k; i++)
//	{
//		if (n % i == 0) break;
//	}
//	if (i <= k) {}
//	else printf("%d is a prime\n", n);
//}
//
//int main()
//{
//	for (int a = 100; a <= 200; a++) {
//		ifprime(a);
//	}
//
//	return 0;
//}
/*2�ж��Ƿ�Ϊ����*/
//#include <stdio.h>
//void ifLeapYear(int year) {
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//		printf("%d is leap year",year);
//	}
//	else
//		printf("%d is not a leap year",year);
//}
//
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	ifLeapYear(year);
//	return 0;
//}
/*3ʵ��һ�������������������������ݡ�*/
//void swap(int* px, int* py) 
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}

/*4ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��

�磺����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���*/

#include <stdio.h>
void print(n) {
	int x = 1;
	int y = 1;
	for (x;x<=n;x++) {
		y = 1;
		for (y;y<=x;y++) {
			printf("%d * %d = %d\t",x,y,x*y);
		
		}	printf("\n");
		
	}
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	print(n);
	return 0;
}












