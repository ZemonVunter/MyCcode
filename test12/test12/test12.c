#define _CRT_SECURE_NO_WARNINGS 1
/*1实现一个函数，判断一个数是不是素数。
利用上面实现的函数打印100到200之间的素数。*/
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
/*2判断是否为闰年*/
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
/*3实现一个函数来交换两个整数的内容。*/
//void swap(int* px, int* py) 
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}

/*4实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。*/

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












