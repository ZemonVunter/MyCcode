#define _CRT_SECURE_NO_WARNINGS 1
/*1���������������в�ͬλ�ĸ���
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
��������:

1999 2299

�������:7
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
/*2���������������м����*/
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
/*3ͳ�ƶ�������1�ĸ���
дһ���������ز����������� 1 �ĸ�����
���磺 15    0000 1111    4 �� 1
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
//	printf("������Ϊ��");
//	for (int i = 0; i < 8; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n%d��1", count);
//}
//int main()
//{
//	count2bit(11);
//
//
//	return 0;
//}
/*4��ӡ���������Ƶ�����λ��ż��λ
��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������*/

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
//	printf("������Ϊ��");
//	for (int i = 0; i < 8; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\nż������Ϊ��");
//	for (int i = 0; i < 8; ) {
//		printf("%d", arr[i]);
//		i =i+ 2;
//	}
//	
//	printf("\n��������Ϊ��");
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
