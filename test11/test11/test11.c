#define _CRT_SECURE_NO_WARNINGS 1

//1编写代码，演示多个字符从两端移动，向中间汇聚。 
//2递归求n的阶乘
//3编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则 提示登录成，如果三次均输入错误，则退出程序
//4猜数字游戏实现
//5编写代码在一个整形有序数组中查找具体的某个数,要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcome to world!";
//	char arr2[] = "*****************";
//
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len-1;
//
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500); //睡眠函数 - 单位是毫秒
//		system("cls");//执行系统命令-cls-清理屏幕信息
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//	
//	return 0;
//}
//2递归求n的阶乘
//int factorial(int x)
//{
//
//if (x == 0)
//{
//	return 1;
//}
//else
//return x * factorial(x - 1);
//}
//3编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则 提示登录成，如果三次均输入错误，则退出程序
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = "0";
//	for (i; i < 3; i++) {
//		printf("请输入密码:>");
//		scanf("%s",password);
//		if (strcmp(password, "123456") == 0) {
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3) {
//		printf("三次密码错误，退出程序\n");
//	}
//	
//	return 0;
//}
//猜数字
//#include<stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("***   1. play     0. exit   ***\n");
//	printf("*******************************\n");
//}
//void game() {
//	int guess = 0;
//	//产生1-100之间的随机数
//	int ret = rand() % 100 + 1;
//	//开始猜
//	while(1){
//		printf("输入你的猜想：");
//		scanf("%d",&guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if(guess == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		
//		
//	}
//
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}
//
//5编写代码在一个整形有序数组中查找具体的某个数, 要求：找到了就打印数字所在的下标，找不到则输出：找不到。

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int ret=0 ;
	scanf("%d", &ret);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz ;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid]<ret) {
			left = mid - 1;
		}
		else if (arr[mid] > ret) {
			right = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了\n");
	}
	return 0;
}
	




