#define _CRT_SECURE_NO_WARNINGS 1

//1��д���룬��ʾ����ַ��������ƶ������м��ۡ� 
//2�ݹ���n�Ľ׳�
//3��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ�� ��ʾ��¼�ɣ�������ξ�����������˳�����
//4��������Ϸʵ��
//5��д������һ���������������в��Ҿ����ĳ����,Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
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
//		Sleep(500); //˯�ߺ��� - ��λ�Ǻ���
//		system("cls");//ִ��ϵͳ����-cls-������Ļ��Ϣ
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//	
//	return 0;
//}
//2�ݹ���n�Ľ׳�
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
//3��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ�� ��ʾ��¼�ɣ�������ξ�����������˳�����
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = "0";
//	for (i; i < 3; i++) {
//		printf("����������:>");
//		scanf("%s",password);
//		if (strcmp(password, "123456") == 0) {
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3) {
//		printf("������������˳�����\n");
//	}
//	
//	return 0;
//}
//������
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
//	//����1-100֮��������
//	int ret = rand() % 100 + 1;
//	//��ʼ��
//	while(1){
//		printf("������Ĳ��룺");
//		scanf("%d",&guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if(guess == ret)
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}
//
//5��д������һ���������������в��Ҿ����ĳ����, Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}
	return 0;
}
	




