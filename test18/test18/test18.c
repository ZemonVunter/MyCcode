#define _CRT_SECURE_NO_WARNINGS 1
/*喝汽水问题
喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）*/
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

