//#include<stdio.h>
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main(){
//    int b=func(1);
//    printf("%d", b);
//    return 0;
//}
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
#include <stdio.h>
//д���뽫���������Ӵ�С���
//int func (int a, int b, int c) {
//	if (a > b && a > c) {
//		if (b > c) {
//			printf("%d,%d,%d",a,b,c);
//		}
//		else if (c > b) {
//			printf("%d,%d,%d", a, c, b);
//		}
//	}
//	else if (b > a && b > c) {
//		if (a > c) {
//			printf("%d,%d,%d", b, a, c);
//		}
//		else if (c > a) {
//			printf("%d,%d,%d", b, c, a);
//		}
//	}
//	if (c > a && c > b) {
//		if (a > b) {
//			printf("%d,%d,%d", c, a, b);
//		}
//		else if (b > a) {
//			printf("%d,%d,%d", c, b, a);
//		}
//	}
//	
//}
//int main() {
//	func(2, 1, 10);
//
//	return 0;
//}
//дһ�������ӡ1 - 100֮������3�ı���������
//int main() {
//	for (int i=1; i < 100; i++) {
//		if (0 == i % 3) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//			}

//���������������������������Լ��
//շת�����


//int measure(int x, int y)
//{	//����z
//	int z;
//	//��֤x>y
//	if��x < y��{
//		int t=0;
//		t = y;
//		y = x;
//		x = t;
//	}
//	else if (x == y) {
//	return x;
//}	//��ʼշת���
//	else if (x > y) {
//	while (x % y != 0) {
//		z = x % y;
//		x = y;
//		y = z;
//	}
//	return z;
//}
//
//}
//#include<stdio.h>
//#include<stdlib.h>
////�Զ���һ���ж�����ĺ���
//int IsLeapYear(unsigned int y) {
//	//y�ܱ�4���������ܱ�100���� ���� y�ܱ�400���� 
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {
//		return 1;	//���� 
//	}
//	else {
//		return 0;	//������ 
//	}
//}
//int main() {
//	//�޸Ŀ���̨������ɫΪ��ɫ 
//	system("color 2");
//	//����һ��ѭ������,����ʼ��Ϊ0.
//	int i = 0;
//	//��ʼ��Ϊ1000,��iС�ڵ���2000ʱ����ѭ����,ÿѭ��һ��i����1
//	for (i = 1000; i <= 2000; i++) {
//		//���i������
//		if (IsLeapYear(i)) {
//			//���i
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
#include<math.h>
int main()
{
	int i, j;
	for (i = 100; i <= 200; i++)
	{	
		for (j = 2; j < sqrt(i); j++) {
			if (0 == i % j) {
				
				break;
			}
			if (j <= i) {
				printf("%d \n", i);
				break;
			}
			}
	}
	return 0;
}

