/*
//Date : 2020-07-07
//Name : �赿��
//Chap : 7-1

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a,b,c,d,e = 0;
	int max;
	puts("ù��° ������ �Է����ּ���.");
	scanf("%d", &a);
	puts("�ι�° ������ �Է����ּ���.");
	scanf("%d", &b);
	puts("����° ������ �Է����ּ���.");
	scanf("%d", &c);
	puts("�׹�° ������ �Է����ּ���.");
	scanf("%d", &d);
	puts("�ټ���° ������ �Է����ּ���.");
	scanf("%d", &e);

	max = a;

	if (max <= b)
		max = b;

	if (max <= c)
		max = c;
	
	if (max <= d)
		max = d;
	
	if (max <= e)
		max = e;


	printf("�ִ��� %d �Դϴ�.\n",max);
	return 0;


}
*/
/*
//Date : 2020-07-07
//Name : �赿��
//Chap : 7-2

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) 
{
	char ch = 0;
	rewind(stdin);
	ch = getchar();
	while (1)
	{
		puts("���ڸ� �Է��ϼ���");
		scanf(" %c", &ch);
		if (ch == 'y' || ch == 'Y') {
			puts("�� �ԷµǾ����ϴ�.");
			goto END;
		}

	}
	
END:
	return 0;


}
*/
/*
//Date : 2020-07-07
//Name : �赿��
//Chap : 7-3

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char ch = 0;
	int num1, num2;
	rewind(stdin);

	puts("ù��° ������ �Է��ϼ���");
	scanf("%d", &num1);
	
	puts("�ι�° ������ �Է��ϼ���");
	scanf("%d", &num2);
	
	puts("������ �����ϼ���. a�� �μ��� ����, b�� �μ��� ����, c�� �����Էµ� �������� ���߿��Է��� ������ ��");
	scanf(" %c", &ch);

	switch(ch){
	case 'a':
		printf("%d", num1 + num2);
		break;

	case 'b':
		printf("%d", num1 * num2);
		break;

	case 'c':
		printf("%d", num1 - num2);
		break;

	default:
		puts("���� �� ���� ��ɡ�");
		return 0;
	}

	
	return 0;


}
*/