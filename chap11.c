/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 11-1
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//���ڷ� char*���� �޾Ƽ� ���ڿ��� ���̸� ��ȯ�ϴ� �Լ��� �ۼ��ϼ���. ��, �����
//strlen() �Լ��� ������� ���� ���� ����ϴ� �ڵ带 �ۼ��ϼ���.�Լ��� �̸���
//GetLength()�� �մϴ�.

int GetLenght(char* str);

int main() {
	char* str = "Hello world";

	int Lenght = GetLenght(str);

	printf("���ڿ��� ���̴� %d �Դϴ�.", Lenght);

}

int GetLenght(char* str) {
	int count = 0;
	int i = 0;
	while (str[i] != '\0') {
		count++;
		i++;
	}
	return count;
}
*/

/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 11-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//���ڷ� char* ���� �޾Ƽ� ���ڿ��� �Ųٷ� ����ϴ� �Լ��� �ۼ��ϼ���.������ �ذ���
//�� ���ؼ� strlen() �Լ��� ����ϰų� 1�� �������� �ۼ��� �Լ��� ����ص� �����ϴ�.

int GetLenght(char* str);
int Reverse_str(char* str);
int main() {
	char* str = "Hello world";

	int Lenght = GetLenght(str);

	printf("���ڿ��� ���̴� %d �Դϴ�.", Lenght);

	if (Reverse_str(str) == -1) //������ 0��° ��ұ��� ����ߴٴ� �Ҹ���.
		puts("������ ����!");

}

int GetLenght(char* str) {
	int count = 0;
	int i = 0;
	while (str[i] != '\0') {
		count++;
		i++;
	}
	return count;
}

int Reverse_str(char* str) {
	int lenght = GetLenght(str);

	int i = 0;
	for (i = lenght; i >= 0; i--) {
		printf("%c", str[i]);
	}
	putchar('\n');
	return i;
}
*/

/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 11-3
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//���ڷ� int�� �迭(Ȥ�� �ּ�)�� ����� ������ ���� ��, ������������ �����ϴ� �Լ���
//�ۼ��ϼ���.

void ArraySorting(int* arr, int Lenght);
int main() {
	int array[10] = { 1,4,2,3,5,6,8,7,9,11 };
	int i;

	ArraySorting(array, 10);
	for (i = 0; i < 10; i++) {
		printf("%d\n", array[i]);
	}
}

void ArraySorting(int* arr, int Lenght) {
	int i, j;
	int temp = 0;

	for (i = 0; i < Lenght; i++) {
		for (j = i + 1; j < Lenght; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}
}

*/
/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 11-4
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void gugudan(int num);
int main() {
	gugudan(3);
}

void gugudan(int num) {
	int i;
	for (i = 1; i < 10; i++) {
		printf("%d * %d = %2d\n",num, i, num * i);
	}
}

*/

/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 11-5
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//���ڷ� �˻� ��� ���ڿ��� ����� �޸��� �ּҿ� ã�� ����(char)�� �޾� �˻��� ��
//���ϰ� �ε����� ��ȯ�ϴ� �Լ��� �ۼ��ϼ���.���� ã�� ���ڿ��� ���ٸ� - 1�� ��ȯ��
//�ϴ�
int searching(char* str, char ch);


int main() {

	char* str = "Hello world Bump of chicken";

	char ch = '��';
	int result = searching(str, ch);
	if (result != -1)
		printf("�ش繮�ڰ� �����ϴ� �ε����� %d�Դϴ�", result);
	else
		printf("ã�� ���ڰ� �����ϴ�");
}

int searching(char* str, char ch) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == ch) {
			return i;
		}
		i++;
	}
	return -1;
}
*/

/*
//Date : 2020-07-13
//Name : �赿��
//Chap : 11-6
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//���� ũ�Ⱑ 5�� 2���� int�� �迭�� ���� �����Ϳ� ���� ������ �μ��� �޾� �迭 ��ü
//�� ���� ��ȯ�ϴ� �Լ��� �ۼ��ϼ���.
int Arr_add(int* Arr, int RowCount);


void main() {
	int arr[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	
	int* p = (int*)arr;
	int result = Arr_add(p, 2);

	printf("%d", result);
}

int Arr_add(int* Arr, int RowCount) {
	int j;
	int result=0;
	
	for (j = 0; j < 5*RowCount; j++) {
		result += Arr[j];
	}
	return result;
}
*/