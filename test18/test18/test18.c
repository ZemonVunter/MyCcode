#define _CRT_SECURE_NO_WARNINGS 1
/*����ˮ����
����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int bottle(int money) {
	int count;
	count = money;
	while (money) {
		if (money % 2 != 0) {
			count += money - 1;
			break;
		}
		else {
			money /= 2;
			count += money;
		}
	}
	return count;
}

int main()
{
	int money = 20;
	int n = 0;
	n = bottle(money);
	printf("%d\n", n);
	return 0;
}

