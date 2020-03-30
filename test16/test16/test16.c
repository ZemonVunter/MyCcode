#define _CRT_SECURE_NO_WARNINGS 1
/*1求两个数二进制中不同位的个数
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子:

1999 2299

输出例子:7
*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	int num1;
//	int num2;
//	int count = 0;
//	scanf("%d %d", &num1, &num2);
//	int arr1[32] = { 0 };
//	int arr2[32] = { 0 };
//	for (int i = 0; i < 32; i++)
//	{
//		arr1[i] = num1 % 2;
//		arr2[i] = num2 % 2;
//		if (arr1[i] != arr2[i])
//		{
//			count++;
//		}
//		num1 = num1 / 2;
//		num2 = num2 / 2;
//	}
//	printf("%d", count);
//	return 0;
//}
/*2交换两个数不用中间变量*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void changeNum(int num1,int num2) {
//	num1 = num1 ^ num2;
//	num2 = num1 ^ num2;
//	num1 = num1 ^ num2;
//}
//int main()
//{
//	int num1;
//	scanf("%d", &num1);
//	int num2;
//	scanf("%d", &num2);
//	printf("num1=%d,num2=%d\n", num1, num2);
//	num1 = num1 ^ num2;
//	num2 = num1 ^ num2;
//	num1 = num1 ^ num2;
//	//changeNum(num1,num2);
//	printf("num1=%d,num2=%d", num1, num2);
//	return 0;
//}
/*3统计二进制中1的个数
写一个函数返回参数二进制中 1 的个数。
比如： 15    0000 1111    4 个 1
*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void count2bit(unsigned int num) {
//	int count = 0;
//	int arr[8] = { 0 };
//	for (int i = 7; i >= 0; i--)
//	{
//		arr[i] = num % 2;
//		if (arr[i] == 1) {
//			count++;
//		}
//		num = num / 2;
//
//
//	}
//	printf("二进制为：");
//	for (int i = 0; i < 8; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n%d个1", count);
//}
//int main()
//{
//	count2bit(11);
//
//
//	return 0;
//}
/*4打印整数二进制的奇数位和偶数位
获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void countbit(unsigned int num) {
//	int arr[8] = { 0 };
//	for (int i = 7; i >= 0; i--)
//	{
//		arr[i] = num % 2;
//		num = num / 2;
//	}
//	printf("二进制为：");
//	for (int i = 0; i < 8; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n偶数序列为：");
//	for (int i = 0; i < 8; ) {
//		printf("%d", arr[i]);
//		i =i+ 2;
//	}
//	
//	printf("\n奇数序列为：");
//	for (int i = 1; i < 8; ) {
//		printf("%d", arr[i]);
//		i =i+ 2;
//	}
//}
//int main()
//{
//	countbit(100);
//
//
//	return 0;
//}
//
