#define _CRT_SECURE_NO_WARNINGS 1
/*1ʹ��ָ���ӡ��������

дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

arr��һ������һά���顣*/
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
/*2�ַ�������
дһ����������������һ���ַ��������ݡ�*/
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
//	//��ӡ�ϰ벿��
//	for (int i = 0; i <= 7; i++) 
//	{
//		//��ӡ�ո�
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
//3��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222

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
/*��ӡˮ�ɻ���
���0��100000֮������С�ˮ�ɻ������������
��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������*/
//����Ϊ������
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include<math.h>
////������������ֵ�λ��
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
//����Ϊ�������
//����Ϊˮ�ɻ�����ȷ����
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	//1
//
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. i�Ǽ�λ��
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2. i��ÿһλ��λ���η���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3. �ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//5��ӡ����
#include <stdio.h> 
//�����ʽ 
void print(char ch) {
	putchar(ch);
}
//�Ǻ� 
void printstar(int n)
{
	int i, j;    //�У��� 
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
	printf("---------��ʼ��ӡ����---------\n");
	printf("����������:");
	scanf("%d", &n);
	printstar(n);
	printf("---------������ӡ����---------\n");
}
