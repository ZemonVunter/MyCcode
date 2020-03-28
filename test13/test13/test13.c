#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

/*1打印一个数的每一位
递归方式实现打印一个整数的每一位*/
//void print(int z) {
//	
//	if (z <= 9)
//		printf("%d\n", z);
//	else
//	{
//		print(z / 10);
//		printf("%d\n",z % 10);
//	}
//}
//int main()
//{
//	int z=0;
//	scanf("%d", &z);
//	print(z);
//
//	return 0;
//}
/*2求阶乘
递归和非递归分别实现求n的阶乘（不考虑溢出的问题）*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////递归
//int DiGuiN(int n) {
//	if (0 == n) {
//		return 1;
//	}
//	else
//	{	
//		return DiGuiN(n-1) * n;
//	}
//}
////非递归
//int FeiDiGuiN(int n) {
//	int sum = 1;
//	while(n>=1){
//		sum = sum*n;
//		n--;
//	}
//	return sum;
//}
//int main()
//{
//	int print;
//	int print1;
//	int num;
//	scanf("%d", &num);
//	print=DiGuiN(num);
//	printf("%d\n",print);
//	print1 = FeiDiGuiN(num);
//	printf("%d\n", print1);
//
//	return 0;
//}
/*3strlen的模拟（递归实现）
递归和非递归分别实现strlen*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
////递归
//int my_strlen(char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	else
//	{
//		return 1+my_strlen(str + 1) ;
//	}
//}
////非递归
//int my_strlen1(char* str) {
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		*str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "i love you" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	int len1 = my_strlen1(arr);
//	printf("%d\n", len1);
//	return 0;
//}
/*4字符串逆序（递归实现）
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int my_strlen(char* str) {
//
//	if (*str == '\0') {
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//	void reverse_string(char *string){
//		char *p = string;
//		int len = 0;
//		int temp = 0;
//		len = my_strlen(p);
//		if ( len > 1 ) {
//			temp = p[0];
//			p[0]=p[len - 1];
//			p[len - 1] = '\0';
//			reverse_string(p + 1);
//			p[len - 1] = temp;
//		}
//	}
//	int main()
//	{
//		char string[] = { "i love you" };
//		reverse_string(string);
//		printf("%s\n", string);
//		return 0;
//	}
/*5计算一个数的每位之和（递归实现）
写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
输入：1729，输出：19*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int sum = 0;
//int DigitSum(int n)
//{
//    if (n > 9)
//    {
//        DigitSum(n / 10);
//    }
//    sum += n % 10;
//    return sum;
//}
//int main()
//{
//	DigitSum(1729);
//    printf("%d\n", sum);
//	return 0;
//}
/*6递归实现n的k次方
编写一个函数实现n的k次方，使用递归实现。*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int NandK(int n,int k) {
//	if (k == 1 ) {
//		return n;
//	}
//	else
//	{
//		return n * NandK(n,k-1);
//		
//	}
//}
//
//
//
//int main()
//{
//	printf("%d\n",NandK(2,10));
//	return 0;
//}
/*7计算斐波那契数
递归和非递归分别实现求第n个斐波那契数
例如：
输入：5  输出：5
输入：10， 输出：55
输入：2， 输出：1*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
////递归
//int Fibonacci(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	if (n == 2) {
//		return 1;
//	}
//	else
//	{
//		return (Fibonacci(n-1) + Fibonacci(n - 2));
//	}
//}
////非递归
//int Fibonacci1(int n) {
//	int a = 1;
//	int b = 1;
//	int c = a;
//	while (n>2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",Fibonacci(n));
//	printf("%d\n", Fibonacci1(n));
//	return 0;
//}










