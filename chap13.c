/*
//Date : 2020-07-15
//Name : �赿��
//Chap : 13-1
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <locale.h>
#include<time.h>

//������ ���ϴ� �Լ��� ����Ͽ� ���������� ������ �����մϴ�. 0~2 ������ ���ڸ� ��
//�����Ѽ� 0�� ����, 1�� ����, 2�� ����� �����մϴ�.

//���� ����� ����ڷκ��� 0~2 ������ ������ �Է¹��� ��, �̿� �����ϴ� 0~2 ������
//������ �߻����� ����ڰ� �Է��� ������ ���Ͽ� ���������� ������ �����ϰ�, �����
//�� ��ǻ�� �߿��� ���ڰ� �������� ����մϴ�.

int rsp(int num, int Comnum);

int main() {
	srand((unsigned int)time(NULL));
	int num;
	

	int ComNum;
	while (1) {
		while (1) {
			puts("0~2������ ������ �Է����ּ���.�����Ϸ��� 99 �Է�");
			scanf("%d", &num);
			if (num == 0 || num == 1 || num == 2) {
				puts("0~2������ ������ �ԷµǾ����ϴ�");
				break;
			}
			else if (num == 99) {
				puts("99�� �ԷµǾ� �����մϴ�.");
				return 0;
			}
			else
				puts("0~2������ ������ �Էµ��� �ʾҽ��ϴ�. �ٽ� �Է��ϼ���");
			rewind(stdin);
		}

		ComNum = rand() % 3;
		rsp(num, ComNum);
	}
}

int rsp(int num, int Comnum) {

	switch (num)
	{
	case 0:
		puts("������ �½��ϴ�");
		if(Comnum == 0)puts("���� ����... �����ϴ�");
		if (Comnum == 1)puts("���� �ָ�... �����ϴ�");
		if (Comnum == 2)puts("���� ���ڱ�... �̰���ϴ�");
		break;
	case 1:
		puts("�ָԸ� �½��ϴ�");
		if (Comnum == 0)puts("���� ����... �̰���ϴ�");
		if (Comnum == 1)puts("���� �ָ�... �����ϴ�");
		if (Comnum == 2)puts("���� ���ڱ�... �����ϴ�");
		break;
	case 2:
		puts("���ڱ⸦ �½��ϴ�");
		if (Comnum == 0)puts("���� ����... �����ϴ�");
		if (Comnum == 1)puts("���� �ָ�... �̰���ϴ�");
		if (Comnum == 2)puts("���� ���ڱ�... �����ϴ�");
		break;
	default:
		break;
	}
	return 1;
}
*/
/*
//Date : 2020-07-15
//Name : �赿��
//Chap : 13-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>
#include<time.h>

//������ �������� 10�� �Ŀ� 100�� ���� ��¥�� ���� �������� ����Ͽ� ����ϴ� ���α�
//���� �ۼ��ϼ���

void main() {
	struct tm* ptime = { 0 };
	time_t t ;
	time(&t); 
	
	t += 864000;
	ptime = localtime(&t);
	puts("10�� ��");
	printf("%d-%d-%d\n", ptime->tm_year + 1900, ptime->tm_mon + 1, ptime->tm_mday);

	puts("100�� ��");
	t += 86400000;
	ptime = localtime(&t);
	printf("%d-%d-%d\n", ptime->tm_year + 1900, ptime->tm_mon + 1, ptime->tm_mday);
	
}
*/

//Date : 2020-07-15
//Name : �赿��
//Chap : 13-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>
#include<time.h>

//���α׷��� �����ϸ� 'Hello, World!' ���ڿ��� ����� ��, ����ڷκ��� ������ Ű �Է�
//�� ������ ȭ���� ����� �����ϴ� ���α׷��� �ۼ��ϼ���.����� ��� ������Ʈ ȭ��
//�� ����� ����� ������ �ü���� �������� 'cls'�Դϴ�.

void main() {

	puts("Hello, World");

	if (getch()) {
		system("cls");
		exit(1);
	}
}