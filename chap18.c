/*

//Date : 2020-07-16
//Name : �赿��
//Chap : 18-1


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ǥ�� �Է� ��ġ���� ���ڿ��� �Է¹��� ��, ǥ�� ��� ��ġ�� ����ϴ� ���α׷��� �ۼ�
//�ϼ���.��, �ݵ�� fgets()�� fputs() �Լ��� ����ϼ���.

void main() {

	char* str = malloc(sizeof(char) * 18);

	fgets(str, 18, stdin);
	fputs(str, stdout);
}
*/
/*
//Date : 2020-07-16
//Name : �赿��
//Chap : 18-2


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//���� ��ο��� TestFile.txt ������ ���, ����ڰ� �Է��� ���ڿ��� �ڿ� �̾ �߰�
//�� �� �ٽ� �����ϴ� ���α׷��� �ۼ��ϼ���.

void main() {
	
	FILE* fp = fopen("TestFile.txt", "a+" );

	char* str = malloc(sizeof(char) * 18);

	fgets(str, 18, stdin);
	//scanf("%s", str);

	fputs(str,fp);

	fclose(fp);
	free(str);

}
*/
/*
//Date : 2020-07-16
//Name : �赿��
//Chap : 18-3


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//���� ��ο��� TestFile.txt ������ ���, ���� ���Ͽ��� �� ������ ���ڿ��� �о� ��
//�� ��� ���Ͽ� �����ϴ� ���α׷��� �ۼ��ϼ���.��, ��� ���ϵ� ���� ��ο� �����
//���� �̸��� DstFile.txt�� �մϴ�.
int main() {
	char buf[100] = {0};
	FILE* fp1 = fopen("TestFile.txt", "r");
	FILE* fp2 = fopen("DstFile.txt", "w+");

	while (fgets(buf, 100, fp1) != NULL) {
		fputs(buf, fp2);
	}
	fclose(fp1);
	fclose(fp2);




}
*/

//Date : 2020-07-16
//Name : �赿��
//Chap : 18-4


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//main() �Լ��� ���ڷ� �� ���̳ʸ� ������ ��θ� �Է¹޾� ���̳ʸ� ���� ����, ����
//������ ������ �о� �鿩 ��� ���Ϸ� �����ϴ� ���α׷��� �ۼ��ϼ���.��, ���� ����
//������ ������� ȭ�鿡 ����ϰ�, �� ���� 4KB������ �����մϴ�.�׸��� ��� ������
//���� ������ ������� ������ �����, ������ ũ�Ⱑ �ִ� 100MB �̻��� ���� �����
//�� �ʽ��ϴ�.