
//Date : 2020-07-15
//Name : �赿��
//Chap : 14-1
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef unsigned char BYTE;
//typedef ���� ����Ͽ� unsigned char���� BYTE������ �����ϴ� �ڵ带 �ۼ���
//����.

int main() {
	
	BYTE st[10] = "dsada";
	printf("%s", st);
	return 0;
}

*/


//Date : 2020-07-15
//Name : �赿��
//Chap : 14-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//char�� �迭�� ���� ������ ������ ��, main() �Լ����� ����ڷκ��� ���ڿ��� �Է¹�
//�� ���� ������ �����մϴ�.�׸��� ���� ������ ����� ���ڿ��� ����ϴ� void
//PrintData() �Լ��� �ۼ��ϰ� main() �Լ����� �̸� ȣ���ϴ� ���α׷��� �ۼ��ϼ���.

char String[100];

void PrintData();
int main() {
	puts("���ڿ��� �Է����ּ���.");
	scanf("%s", String);
	PrintData();

}

void PrintData() {
	puts(String);
}
*/

//Date : 2020-07-15
//Name : �赿��
//Chap : 14-3
//2������ �ۼ��� ������Ʈ�� Test.c ������ �߰��� ��, PrintData() �Լ��� ���ǿ�, ����
//���� �����ϴ� ���� ������ ����, ��θ� Test.c ���Ϸ� �̵��մϴ�.�׸��� �̿� ����
//��ȭ���� �ƹ��� ������ �߻����� �ʵ��� main() �Լ��� �ִ� �ҽ� ���Ͽ� �ڵ带 �߰�
//�ϼ���.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
extern char String[100];

int main() {
	puts("���ڿ��� �Է����ּ���.");
	scanf("%s", String);
	PrintData();

}


*/

//Date : 2020-07-15
//Name : �赿��
//Chap : 14-4

//�����̡�void PrintString(char* pszData); ���� ���� �Լ��� �ۼ��մϴ�.�� �Լ��� ����
//�� ���޹��� ���ڿ��� ȭ�鿡 ����մϴ�.���ʿ� ȣ��� ���� ���̿� ��� ���� ������
//��������� ���ķδ� �ռ� ����� ���ڿ����� ���ڷ� ���޹��� ���ڿ��̴��� ��쿡��
//����մϴ�.main() �Լ��� �ڵ尡 ������ ���ٸ� Test�� String�� ȭ�鿡 ��µǾ��
//�մϴ�.��, ����� ���� ������ ������� ���ƾ� �մϴ�.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void PrintString(char* pszData);

int main() {
	char* str = malloc(sizeof(char) * 100);
	while (1) {
		puts("���ڿ��� �Է����ּ���.");
		scanf("%s", str);
		if (strlen(str) == 1 || str[0] == 'q')
			return 0;
		PrintString(str);
	}
}
void PrintString(char* pszData) {
	static int before_len = 0;

	int now_len = strlen(pszData);

	if (now_len > before_len) {
		puts("�Էµ� ���ڿ��� �� ��ϴ�.");
		puts(pszData);
		before_len = now_len;
		printf("%d�����̻�", before_len);
	}
	else
		puts("�Էµ� ���ڿ��� ���� �ͺ��� ª�Ƽ� ������� �ʽ��ϴ�");


	return 0;

}