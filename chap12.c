/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 12-1
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
	char* str = malloc((sizeof(char)) * 50);
	int i = 0;
	scanf("%s", str);

	while (str[i] != '\0') {
		if(str[i]>96)
			str[i] = toupper(str[i]);
		else
			str[i] = tolower(str[i]);
		printf("%c", str[i]);
		i++;
	}
	free(str);
	
}
*/
/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 12-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//����ڷκ��� �� ���ڿ��� �Է¹��� ��, �� ���ڿ� �߿��� ���̰� �� ���ڿ��� ��µǴ�
//���α׷��� �ۼ��ϼ���

int main() {
	char* str = malloc((sizeof(char)) * 50);
	char* str2 = malloc((sizeof(char)) * 50);
	int i = 0;
	puts("ù��° ���ڿ� �Է����ּ���");
	scanf("%s", str);
	
	puts("�ι�° ���ڿ� �Է����ּ���");
	scanf("%s", str2);

	if (strlen(str) >= strlen(str2)) {
		puts(str);
	}
	else
		puts(str2);

	free(str);
	free(str2);

}
*/
/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 12-3
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//����ڷκ��� �� ���ڿ��� �Է¹��� ��, �ϳ��� ���ļ� ����ϴ� ���α׷��� �ۼ��ϼ�
//��.��, �� ���ڿ��� ��ĥ �� �ݵ�� sprintf() �Լ��� ����ؾ� �ϸ�, ù ��° �Է¹���
//���ڿ��� ����� �޸�(�迭)�� ��ģ ����� ����ǵ��� �մϴ�.

int main() {
	char* str = malloc((sizeof(char)) * 50);
	char* str2 = malloc((sizeof(char)) * 50);
	char buf[100];
	int i = 0;
	puts("ù��° ���ڿ� �Է����ּ���");
	scanf("%s", str);

	puts("�ι�° ���ڿ� �Է����ּ���");
	scanf("%s", str2);

	sprintf(str,"%s%s",str, str2);
	printf("%s", str);

	free(str);
	free(str2);

}
*/
/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 12-4
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//3�� ������ ���� �����Ͽ� sprintf() �Լ� ��� strcat() �Լ��� ����Ͽ� ���� �����
//�������� �ڵ带 �����ϼ���.



int main() {
	char* str = malloc((sizeof(char)) * 50);
	char* str2 = malloc((sizeof(char)) * 50);
	char buf[100];
	int i = 0;
	puts("ù��° ���ڿ� �Է����ּ���");
	scanf("%s", str);

	puts("�ι�° ���ڿ� �Է����ּ���");
	scanf("%s", str2);

	strcat(str, str2);
	printf("%s", str);

	free(str);
	free(str2);

}
*/
/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 12-5
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//����ڷκ��� �� ���ڿ��� �Է¹޾� ������ �޸�(�迭)�� ���� ������ ��, �� ���ڿ���
//�ϳ��� ���ļ� �����ϴ� �޸𸮸� �������� �Ҵ�ް� ���⿡ �ռ� �Է¹��� �� ���ڿ���
//�ϳ��� ���ļ� �����ϴ� ���α׷��� �ۼ��ϼ���.��, ���ڿ��� ��ġ�� ������� sprintf()
//�Լ��� strcat()�Լ��������������, strcpy()�Լ�������ؾ��մϴ�.

int main() {
	char* str = malloc((sizeof(char)) * 50);
	char* str2 = malloc((sizeof(char)) * 50);
	char* p;
	int i = 0;
	puts("ù��° ���ڿ� �Է����ּ���");
	scanf("%s", str);

	puts("�ι�° ���ڿ� �Է����ּ���");
	scanf("%s", str2);
	
	char* buf= malloc(sizeof(char)*100);
	while (str[i] != '\0') {
		i++;
	}
	strcpy(buf, str);
	strcpy(&buf[i], str2);
	printf("%s", buf);

	free(str);
	free(str2);

}
*/

/*
//Date : 2020-07-14
//Name : �赿��
//Chap : 12-6
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//�� �ܾ �Է¹޾� ���� �ܾ����� ���Ͽ� ����� ����ϴ� ���α׷��� �ۼ��ϼ���.
//��, ��ҹ��ڴ� �������� �ʰ� ���ؾ� �մϴ�.


int main() {
	char* str = malloc((sizeof(char)) * 50);
	char* str2 = malloc((sizeof(char)) * 50);
	int i = 0;
	puts("ù��° ���ڿ� �Է����ּ���");
	scanf("%s", str);

	puts("�ι�° ���ڿ� �Է����ּ���");
	scanf("%s", str2);

	while (str[i] != '\0') {
		str[i] = toupper(str[i]);
		i++;
	}
	i = 0;
	while (str2[i] != '\0') {
		str2[i] = toupper(str2[i]);
		i++;
	}
	if (strcmp(str, str2) == 0) {
		puts("�� �ܾ �����ϴ�");
	}
	else
		puts("�� �ܾ ���� �ʽ��ϴ�.");

	free(str);
	free(str2);

}
*/

/*
//Date : 2020-07-14
//Name : �赿��
//Chap : 12-7
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//�� ���� ���ڿ��� �Է¹��� ��, ���� ������ �߶󳻾� ����ϴ� ���α׷��� �ۼ��ϼ���.
//��, �ݵ�� strtok() �Լ��� ����Ͽ� �ڵ带 �ۼ��ϼ���.

int main() {
	
	char BUFF[BUF_SIZE];
	int i = 0;
	puts("ù��° ���ڿ� �Է����ּ���");
	fgets(BUFF, BUF_SIZE, stdin);

	char* ptr = strtok(BUFF, " ");
	
	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}
	

}
*/

//Date : 2020-07-14
//Name : �赿��
//Chap : 12-8
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <locale.h>
//�� ���ڿ��� �Է¹��� ��, �����ڵ�� ��ȯ�Ͽ� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��ϼ�
//��.��, ȭ�鿡 ����� ���� �����ڵ�� ��ȯ�� ���ڿ��� ����ؾ� �մϴ�.����
//MBCS ��� �Լ��� printf() �Լ��δ� ���������� ����� ����� �� �����ϴ�.
int main(void)
{
	char* str = malloc(sizeof(char)*100);
	scanf("%s", str);
	wchar_t warr[100] = L"";
	rewind(stdin);
	setlocale(LC_ALL, "Korean");//������ ����
	mbstowcs(warr, str, 100);
	wprintf(L"%s\n", warr);//�����ڵ� ���ڿ� ���
	return 0;
}
