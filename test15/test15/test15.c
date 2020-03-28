#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
/*1冒泡排序
实现一个对整形数组的冒泡排序*/

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
/*2数组操作(指针实现)
创建一个整形数组，完成对数组的操作
1,实现函数init() 初始化数组为全0
2,实现print()  打印数组的每个元素
3,实现reverse()  函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值。*/
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
/*3交换数组
将数组A中的内容和数组B中的内容进行交换。（数组一样大）*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main() {
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[] = { 7, 8, 9, 10, 11, 12 };
//	int i = 0;
//	for (i = 0; i < 6; i++) {
//
//		int tmp = arr1[i];//创建临时变量，保存数组一的值
//		arr1[i] = arr2[i];//交换数组的内容
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < 6; i++) {
//		printf("arr1[%d]=%d\n", i, arr1[i]);//循环打印数组一的内容
//	}
//	for (i = 0; i < 6; i++) {
//		printf("arr2[%d]=%d\n", i, arr2[i]);//循环打印数组二的内容
//	}
//	return 0;
//}
//


