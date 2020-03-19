//#include<stdio.h>
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main(){
//    int b=func(1);
//    printf("%d", b);
//    return 0;
//}
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
#include <stdio.h>
//写代码将三个数按从大到小输出
//int func (int a, int b, int c) {
//	if (a > b && a > c) {
//		if (b > c) {
//			printf("%d,%d,%d",a,b,c);
//		}
//		else if (c > b) {
//			printf("%d,%d,%d", a, c, b);
//		}
//	}
//	else if (b > a && b > c) {
//		if (a > c) {
//			printf("%d,%d,%d", b, a, c);
//		}
//		else if (c > a) {
//			printf("%d,%d,%d", b, c, a);
//		}
//	}
//	if (c > a && c > b) {
//		if (a > b) {
//			printf("%d,%d,%d", c, a, b);
//		}
//		else if (b > a) {
//			printf("%d,%d,%d", c, b, a);
//		}
//	}
//	
//}
//int main() {
//	func(2, 1, 10);
//
//	return 0;
//}
//写一个代码打印1 - 100之间所有3的倍数的数字
//int main() {
//	for (int i=1; i < 100; i++) {
//		if (0 == i % 3) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//			}

//给定两个数，求这两个数的最大公约数
//辗转相除法


//int measure(int x, int y)
//{	//余数z
//	int z;
//	//保证x>y
//	if（x < y）{
//		int t=0;
//		t = y;
//		y = x;
//		x = t;
//	}
//	else if (x == y) {
//	return x;
//}	//开始辗转相除
//	else if (x > y) {
//	while (x % y != 0) {
//		z = x % y;
//		x = y;
//		y = z;
//	}
//	return z;
//}
//
//}
//#include<stdio.h>
//#include<stdlib.h>
////自定义一个判断闰年的函数
//int IsLeapYear(unsigned int y) {
//	//y能被4整除但不能被100整除 或者 y能被400整除 
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {
//		return 1;	//闰年 
//	}
//	else {
//		return 0;	//非闰年 
//	}
//}
//int main() {
//	//修改控制台字体颜色为绿色 
//	system("color 2");
//	//定义一个循环变量,并初始化为0.
//	int i = 0;
//	//初始化为1000,当i小于等于2000时进入循环体,每循环一次i自增1
//	for (i = 1000; i <= 2000; i++) {
//		//如果i是闰年
//		if (IsLeapYear(i)) {
//			//输出i
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
#include<math.h>
int main()
{
	int i, j;
	for (i = 100; i <= 200; i++)
	{	
		for (j = 2; j < sqrt(i); j++) {
			if (0 == i % j) {
				
				break;
			}
			if (j <= i) {
				printf("%d \n", i);
				break;
			}
			}
	}
	return 0;
}

