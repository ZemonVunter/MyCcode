#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"game.h"



void meau() {
	printf("**********************************************\n");
	printf("***************   1.play  ********************\n");
	printf("***************   0.exit  ********************\n");
	printf("**********************************************\n");
}
void game() {
	//��Ų��úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//'0'--������
	//����Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//"*"--δ�Ų�
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine,ROW,COL);
	//DisplayBoard(show,ROW,COL);
	//������
	setMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	FindMine(mine, show, ROW, COL);
}
void test() {
	int input = 0;
	//time����ʱ�����������
	srand((unsigned int)time(NULL));
	do {
		meau();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}

