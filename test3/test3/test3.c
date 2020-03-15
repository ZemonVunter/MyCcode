#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//typedef unsigned int u_int;
//int main(){

//	/*char arr1[] = "abc";
//
//*/
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n",arr[4]);
//
	/*unsigned int age;
	u_int age2;*/

	int sum(int a)
	{
		int c = 0;
		static int b = 3;
		c += 1;
		b += 2;
		return (a + b + c);
	}
	int main()
	{
		int i;
		int a = 2;
		for (i = 0; i < 5; i++)
		{
			printf("%d,", sum(a));
		}
	}
	//½á¹ûÊÇ£º8£¬10£¬12£¬14£¬16




