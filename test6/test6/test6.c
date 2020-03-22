#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test(){
//	int a = 10;
//	a++;
//	printf("%d\n", a);
//}
int main(){
	int i = 1;
	for (i; i < 100; i += 2); 
	{ 
			printf("%d\n", i); }

	return 0;
}