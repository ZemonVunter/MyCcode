#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test(){
//	int a = 10;
//	a++;
//	printf("%d\n", a);
//}
int main() {

	for (int i = 1; i < 100; i)
	{  
		printf("%d\n", i);
		i = i + 2; }

	return 0;
}