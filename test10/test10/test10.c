#define _CRT_SECURE_NO_WARNINGS 1

//��1~100��9���ֵĸ���
//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>
//int count=0;
//a() {
//	
//	int r1,r2;
//	for (int i = 1; i <= 100; i++) {
//		r1 = i % 10;
//		r2 = i / 10;
//		if (r1 == 9||r2 == 9) {
//			count++;
//		}
//		if (r1 == 9 && r2 == 9) {
//		count--;
//
//	}
//	
//	}
//	
//}
//
//int main()
//{
//	a();
//	printf("%d",count);
//	return 0;
//}
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i;
//    float sum = 0.0, temp = 0.0;
//    for (i = 1; i <= 100; i++)
//    {
//        //powΪ�η����㣬ͨ��-1��N�η�ʵ�ּӼ�
//        temp = pow(-1, i + 1);
//        sum = sum + temp * 1 / i;
//    }
//    printf("sum is %f\n", sum);
//    system("pause");
//    return 0;
//}
//��10 �����������ֵ
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n, max;
//	scanf("%d", &n);
//	max = n;
//	for (int i = 2; i < =10; i++)
//	{
//		scanf("%d", &n);
//		if (n > max) {
//			max = n;
//		}
//	}
//	printf("max is %d", max);
//
//	return 0;
//}
#include<stdio.h>

int main()

{

    int x, y, z;

    for (x = 1; x <= 9; x++)

    {

        for (y = 1; y <= x; y++)

        {

            z = x * y;

            printf("%d*%d=%d  ", y, x, z);

        }

        printf("\n");

    }
    return 0;
}