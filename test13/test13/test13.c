#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

/*1��ӡһ������ÿһλ
�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ*/
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
/*2��׳�
�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////�ݹ�
//int DiGuiN(int n) {
//	if (0 == n) {
//		return 1;
//	}
//	else
//	{	
//		return DiGuiN(n-1) * n;
//	}
//}
////�ǵݹ�
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
/*3strlen��ģ�⣨�ݹ�ʵ�֣�
�ݹ�ͷǵݹ�ֱ�ʵ��strlen*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
////�ݹ�
//int my_strlen(char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	else
//	{
//		return 1+my_strlen(str + 1) ;
//	}
//}
////�ǵݹ�
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
/*4�ַ������򣨵ݹ�ʵ�֣�
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������*/
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
/*5����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
���룺1729�������19*/
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
/*6�ݹ�ʵ��n��k�η�
��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�*/
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
/*7����쳲�������
�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
���磺
���룺5  �����5
���룺10�� �����55
���룺2�� �����1*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
////�ݹ�
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
////�ǵݹ�
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










