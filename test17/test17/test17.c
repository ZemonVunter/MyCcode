#define _CRT_SECURE_NO_WARNINGS 1
/*1使用指针打印数组内容

写一个函数打印arr数组的内容，不使用数组下标，使用指针。

arr是一个整形一维数组。*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void print(int* arr, int len) {
//	
//	int* p = arr;
//	for (int i=0; i < len; i++)
//	{
//		printf("%d",*p);
//		p++;
//		
//	}
//}
//int main()
//{
//	int len = 0;
//	int arr[] = { 1,2,3,4,5 };
//	len = sizeof(arr) / sizeof(arr[0]);
//	
//	print(arr,len);
//	return 0;
//}
/*2字符串逆序
写一个函数，可以逆序一个字符串的内容。*/
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void reverse(char* left, char* right) {
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//
//{
//	char arr[100];
//	gets(arr);
//	reverse(arr, arr + strlen(arr) - 1);
//	printf("%s\n", arr);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void LingXing() {
//	int i, j, k;
//	//打印上半部分
//	for (int i = 0; i <= 7; i++) 
//	{
//		//打印空格
//		for (j = 0; j <= 7-i; j++) 
//		{
//			printf("*");
//		}
//	}
//	
//}
//int main()
//{
//	void LingXing();
//	return 0;
//}
//
//3求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int sum = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 5; i++)
//	{
//		a = a * 10 + num;
//		sum = sum + a;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//
/*打印水仙花数
求出0～100000之间的所有“水仙花数”并输出。
“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。*/
//以下为错误码
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include<math.h>
////求出所输入数字的位数
//int Several(int num) {
//	int count = 0;
//	if (num / 10 == 0) {
//		return 1;
//	}
//	else {
//		while (num != 0) {
//			num /= 10;
//			count++;
//		}
//		return count;
//	}
//}
//int printFlower(int num) {
//	int sum = 0;
//	if (num <= 9)
//	{
//		sum = pow(num, Several(num));
//	}
//	else
//	{
//		printFlower(num / 10);
//		sum = sum + pow((num % 10), Several(num));
//	}
//}
//int main()
//{
//	for (int num = 100; num < 100000; num++) {
//		if (printFlower(num) == num) {
//			printf("%d\n", num);
//		}
//	}
//	return 0;
//}
//以上为错误代码
//以下为水仙花数正确代码
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	//1
//
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为水仙花数
//		//1. i是几位数
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2. i的每一位的位数次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3. 判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//5打印菱形
#include <stdio.h> 
//输出格式 
void print(char ch) {
	putchar(ch);
}
//星号 
void printstar(int n)
{
	int i, j;    //行，列 
	for (i = 0; i < 2 * n - 1; i++)
	{
		for (j = 0; j < 2 * n - 1; j++)
		{
			if (i < n)
			{
				if (j >= n - i - 1 && j < n + i)
				{
					print('*');
				}
				else
				{
					print(' ');
				}
			}
			else
			{
				if (j >= i - n + 1 && j < 3 * n - i - 2)
				{
					print('*');
				}
				else
				{
					print(' ');
				}
			}

		}
		print('\n');
	}
}

void main()
{
	int n;
	printf("---------开始打印符号---------\n");
	printf("请输入数字:");
	scanf("%d", &n);
	printstar(n);
	printf("---------结束打印符号---------\n");
}
