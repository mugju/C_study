
//Date : 2020-07-15
//Name : �赿��
//Chap : 15-1


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��� ȣ���� �̿��Ͽ� ���� 60 ������ �Ǻ���ġ(Fibonacci) ������ ����ϴ� ���α׷���
//�ۼ��ϼ���.����� �Ǻ���ġ ������ ������ ���̾յ� ������ ���� �̾����� ����� ��
//�� �ֽ��ϴ�.
//1 1 2 3 5 8 13 21 34 55


int fibo(int n) {
	if (n >= 2)
		return fibo(n - 1) + fibo(n - 2);
	else {
		return n;
	}
};


void main() {
	int i;
	for (i = 0; fibo(i) < 60; i++) {
		printf("%d",fibo(i));
	}
}

*/

//Date : 2020-07-15
//Name : �赿��
//Chap : 15-2

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// ���ڷ� char* ���� �޾Ƽ� ���ڿ��� �Ųٷ� ����ϴ� ��� ȣ�� �Լ��� �ۼ��ϼ���.�Լ�
//�� ��������void PutString(char* pszData); ���� �����ϴ�.

void PutString(char* pszData);
int main() {
	char* str = malloc((sizeof(char)) * 30);
	puts("���ڿ��� �Է��ϼ���");
	scanf("%s", str);

	PutString(str);
	free(str);

}
void PutString(char* pszData) {

	int len = strlen(pszData);
	if (len == 0)
		return 0;
	printf("%c", pszData[len-1]);
	pszData[len-1] = '\0';
	PutString(pszData);
}
*/



//Date : 2020-07-15
//Name : �赿��
//Chap : 15-3


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//char* ���� ��ȯ�ϰ� int�� �Ű� ������ ���� �Լ��� ���Ͽ� ������ ������ �����ϼ���.

char* strange(int n1, int n2) {
	char* str = "strange";
	return str;
}

void main() {

	char* (*pf)(int, int) = NULL;
	pf = strange;
	
	char* std = malloc(sizeof(char) * 100);
	std = pf(1, 2);
	puts(std);
}
*/

//Date : 2020-07-16
//Name : �赿��
//Chap : 15-4


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//3�� ������ �ش��ϴ� �Լ� �����͸� �Ű� ������ �ް� int���� ��ȯ�ϴ� �Լ��� ���Ͽ�
//������ ������ �����ϰ�, ������ ����� ����Ǿ����� Ȯ���� �� �ִ� ������ ������ ��
//���ϼ���.��, �� ������ ������ ������ �� �ִ� �Լ��� �����ϰ� ������ ������ ȣ����
//�� ������ �� �ְ� �ڵ带 �ۼ��ؾ� �մϴ�.

char* strange(int n1, int n2) {
	char* str = "strange";
	return str;
}

int strange_f(char* (*pf)(int, int)) {
	puts("����� �����.");
	return 0;
}

void main() {

	char* (*pf)(int, int) = NULL;
	pf = strange;

	int (*pf2)(char* (*pf)(int, int)) = NULL;
	pf2 = strange_f;
	pf2(pf(1,2));

}

*/


//Date : 2020-07-16
//Name : �赿��
//Chap : 15-5


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//���ڷ� int���� �ް� ��ȯ���� ���� �Լ��� ���Ͽ� ������ ������ �����ϼ���.��, �Լ�
//ȣ�� �Ծ��� _ _stdcall�� �����ؾ� �մϴ�.����, 4�� ����ó�� ������ ���� ����ϴ�
//������ ������ �ۼ��ϼ���

void strange(int n1, int n2) {
	puts("ȣ���.");
}

int strange_f(char* (*pf)(int, int)) {
	puts("����� �����.");
	return 0;
}

void main() {

	char* (*pf)(int, int) = NULL;
	pf = strange;

	pf(1, 1);
}
*/