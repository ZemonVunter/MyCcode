#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
/*1ð������
ʵ��һ�������������ð������*/

//void Bubble(int arr[],int sz) {
//	for (int i = 1; i < sz - i; i++) {
//		for (int j = 0; j < sz - i; j++) {
//			if (arr[j] < arr[j + 1]) {
//				int tmp;
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[5] = { 1,3,5,4,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble(arr, sz);
//	for (int i = 0; i <= sz - 1; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//	return 0;
//}
//
/*2�������(ָ��ʵ��)
����һ���������飬��ɶ�����Ĳ���
1,ʵ�ֺ���init() ��ʼ������Ϊȫ0
2,ʵ��print()  ��ӡ�����ÿ��Ԫ��
3,ʵ��reverse()  �����������Ԫ�ص����á�
Ҫ���Լ�������Ϻ����Ĳ���������ֵ��*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void init(int arr[], int sz) {
//	for (int i = 0; i <= sz - 1; i++) {
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz) {
//	for (int i = 0; i <= sz - 1; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//}
//void reverse(int* arr,int sz) {
//	int *pLeft;
//	pLeft= &arr[0];
//	int *pRight;
//	pRight= &arr[sz-1];
//	while (pLeft <pRight) {
//		int temp = *pLeft;
//		*pLeft =* pRight;
//		*pRight = temp;
//		*pLeft++;
//		*pRight--;
//	}
//	
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	//print(arr,sz);
//	reverse(arr,sz);
//	print(arr,sz);
//
//
//
//	return 0;
//}
/*3��������
������A�е����ݺ�����B�е����ݽ��н�����������һ����*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main() {
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[] = { 7, 8, 9, 10, 11, 12 };
//	int i = 0;
//	for (i = 0; i < 6; i++) {
//
//		int tmp = arr1[i];//������ʱ��������������һ��ֵ
//		arr1[i] = arr2[i];//�������������
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < 6; i++) {
//		printf("arr1[%d]=%d\n", i, arr1[i]);//ѭ����ӡ����һ������
//	}
//	for (i = 0; i < 6; i++) {
//		printf("arr2[%d]=%d\n", i, arr2[i]);//ѭ����ӡ�����������
//	}
//	return 0;
//}
//


