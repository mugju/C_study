/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 9-1
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
	
	char str[20] = {0};
	char str_a[20] = { 0 };
	int i = 0;

	printf("�̸��� �Է��ϼ���\n");
	scanf("%s", str);
	printf("%c%c\n", str[0],str[1]);
	for (i = 0; i < 20; i++) {
		if (isdigit(str[i]) != 0) {
			puts("�ٸ�");
			return 0;
		}
	}
	printf("�ι�° �̸��� �Է��ϼ���\n");
	scanf("%s", str_a);
	printf("%c%c\n", str_a[0], str_a[1]);
	
	for (i = 0; i < 20; i++) {
		if (isdigit(str_a[i]) != 0) {
			puts("�ٸ�");
			return 0;
		}
	}

	if (strlen(str) == 0) {
		puts("�Է��� ����");
		puts("�ٸ�");
	}
	if (strlen(str_a) == 0) {
		puts("�Է��� ����");
		puts("�ٸ�");
	}

	if (strncmp(str, str_a, 2) == 0)
		puts("���� ����");
	else
		puts("�ٸ�");

	return 0;
}

*/

/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 9-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
	
	int* pt1 = malloc(sizeof(int) * 10);
	int* pt2 = malloc(sizeof(int) * 10);
	
	puts("������ �Է��ϼ���");
	scanf("%d", pt1);

	puts("������ �Է��ϼ���");
	scanf("%d", pt2);

	if (memcmp(pt1, pt2, 10) == 0)
		puts("�� ���� �����ϴ�");
	else
		puts("�� ���� �ٸ��ϴ�");

	free(pt1);
	free(pt2);
}
*/


/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 9-3
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
	int size = 0;

	puts("�����Ҵ���� ũ�⸦ �������ּ���(byte ����)");
	scanf("%d", &size);

	if (size < 10)
		size = 10;
	if (size > 100)
		size = 100;

	printf("%d\n", size);
	int* num = malloc(size);
	num = 0;

	printf("%d\n%d", num,sizeof(num));

	free(num);
	return 0;

}

*/
/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 9-4
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {

	int buff = 0;;

	puts("���ڿ� �ִ� �Է�ũ�⸦ �����ϼ���");

	scanf("%d", &buff);

	char* str = malloc(sizeof(char) * buff);

	puts("���ڿ��� �Է����ּ���");
	scanf("%s", str);

	printf("���ڿ��� ���̴� %d�Դϴ�.", strlen(str));

	free(str);

}
*/


/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 9-5
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {

	int buff = 0;
	int size = 0;

	int i=0;
	puts("���ڿ� �ִ� �Է�ũ�⸦ �����ϼ���");

	scanf("%d", &buff);

	char* str = malloc(sizeof(char) * buff);

	puts("���ڿ��� �Է����ּ���");
	scanf("%s", str);
	size = strlen(str);
	printf("���ڿ��� ���̴� %d�Դϴ�.", size);
	
	i = size;
	for(i = size; i >= 0; i--) {
		printf("%c", str[i]);

	}
	
	
	free(str);

}
*/


//Date : 2020-07-13
//Name : �赿��
//Chap : 9-6
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
	int buff = 0;
	int size = 0;
	int i = 0;
	puts("���ڿ� ������� ������ �����ϼ���");

	scanf("%d", &buff);

	puts("���ڿ� �Է±��̸� �����ϼ���");

	scanf("%d", &size);
	char** str = malloc(sizeof(char*) * buff);

	for (i = 0; i < buff; i++) {
		str[i] = malloc(sizeof(char) * size);
		printf("%d ��° ���ڿ� �Է��Դϴ� �Է��ϼ���\n",i + 1);
		scanf("%s", str[i]);
		printf("�Է��� ���ڿ���%s\n", str[i]);
	}

	for (i = 0; i < buff; i++) {
		free(str[i]);
	}
	free(str);

}
