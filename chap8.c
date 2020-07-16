/*
//Date : 2020-07-07
//Name : 김동혁
//Chap : 8-1

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int i;
	int result = 0;
	for (i = 1; i <= 100; i++) {
		result += i;
	}
	printf("%d", result);
	return 0;

}

*/
/*
//Date : 2020-07-07
//Name : 김동혁
//Chap : 8-2

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int i;
	int result = 0;
	int count = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 4 == 0) {
			count++;
			result += i;
		}
	}
	printf("4의 배수의 갯수는  %d \n", count);
	printf("4의 배수들의 총합 : %d \n", result);
	return 0;

}

*/
/*
//Date : 2020-07-07
//Name : 김동혁
//Chap : 8-3

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++) {
		puts("");
		for (j = 1; j <= 9; j++) {
			printf("%d X %d = %d\t", i, j, i * j);
		}
	}
	return 0;

}

*/
/*
//Date : 2020-07-07
//Name : 김동혁
//Chap : 8-4

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a[5];
	int max, min;
	int i;
	puts("첫번째 정수입력하세요");
	scanf("%d", &a[0]);
	puts("두번째 정수입력하세요");
	scanf("%d", &a[1]);
	puts("세번째 정수입력하세요");
	scanf("%d", &a[2]);
	puts("네번째 정수입력하세요");
	scanf("%d", &a[3]);
	puts("다섯번째 정수입력하세요");
	scanf("%d", &a[4]);

	max = a[0];
	min = a[0];
	for (i = 1; i < 5; i++) {
		if (max <= a[i])	max = a[i];
	}
	
	for (i = 1; i < 5; i++) {
		if (min >= a[i])	min = a[i];
	}


	printf("최댓값 : %d, 최솟값 : %d\n", max, min);
	return 0;

}
*/

/*
//Date : 2020-07-07
//Name : 김동혁
//Chap : 8-5

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char c;
	int count = 0;
	while (1) {
		c = getchar();
		if (c == 't')
			count++;
		if (c == '/')
			break;
	}
	printf("t의 갯수는 %d개입니다.", count);
	return 0;
}

*/
/*
//Date : 2020-07-07
//Name : 김동혁
//Chap : 8-6
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char ch = 0;;
	int flag = 0;
	int word_count = 0;
	while (ch != '\n') {
		ch = getchar();
		if (flag == 0) {
			if (ch != ' ' && ch != '\t' && ch!='\n') {
				word_count++;
				flag = 1;
				continue;
			}
		}
		if (flag == 1) {
			if (ch == ' ' || ch == '\t')
				flag = 0;
		}

	}
	printf("%d", word_count);
	return 0;
}
*/




//Date : 2020-07-07
//Name : 김동혁
//Chap : 8-7
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int i,j,k;
	int add;
	int flag=0;
	for (i = 1; i < 26; i++) {
		if (i % 5 == 0) {
			printf("%d\n",i);
			continue;
		}
		printf("%d\t", i);
	
	}
	putchar('\n');

	for (i = 0; i < 5; i++) {

		for (j = 0; j <= i; j++) {
			printf("%d\t", ++flag);
		}
		putchar('\n');
	}
	putchar('\n');


	flag = 0;
	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5; j++) {
			
			if (i + j >= 4)
				printf("%d\t", ++flag);
			else
				printf("\t");
		}
		putchar('\n');
	}

	flag = 0;
	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5 + i; j++) {

			if (i + j >= 4)
				printf("%d\t", ++flag);
			else
				printf("\t");
		}
		putchar('\n');
	}

}
