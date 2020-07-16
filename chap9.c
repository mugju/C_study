/*
//Date : 2020-07-13
//Name : 김동혁
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

	printf("이름을 입력하세요\n");
	scanf("%s", str);
	printf("%c%c\n", str[0],str[1]);
	for (i = 0; i < 20; i++) {
		if (isdigit(str[i]) != 0) {
			puts("다름");
			return 0;
		}
	}
	printf("두번째 이름을 입력하세요\n");
	scanf("%s", str_a);
	printf("%c%c\n", str_a[0], str_a[1]);
	
	for (i = 0; i < 20; i++) {
		if (isdigit(str_a[i]) != 0) {
			puts("다름");
			return 0;
		}
	}

	if (strlen(str) == 0) {
		puts("입력이 없음");
		puts("다름");
	}
	if (strlen(str_a) == 0) {
		puts("입력이 없음");
		puts("다름");
	}

	if (strncmp(str, str_a, 2) == 0)
		puts("성이 같음");
	else
		puts("다름");

	return 0;
}

*/

/*
//Date : 2020-07-13
//Name : 김동혁
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
	
	puts("정수를 입력하세요");
	scanf("%d", pt1);

	puts("정수를 입력하세요");
	scanf("%d", pt2);

	if (memcmp(pt1, pt2, 10) == 0)
		puts("두 수가 같습니다");
	else
		puts("두 수가 다릅니다");

	free(pt1);
	free(pt2);
}
*/


/*
//Date : 2020-07-13
//Name : 김동혁
//Chap : 9-3
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
	int size = 0;

	puts("동적할당받을 크기를 지정해주세요(byte 단위)");
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
//Name : 김동혁
//Chap : 9-4
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {

	int buff = 0;;

	puts("문자열 최대 입력크기를 지정하세요");

	scanf("%d", &buff);

	char* str = malloc(sizeof(char) * buff);

	puts("문자열을 입력해주세요");
	scanf("%s", str);

	printf("문자열의 길이는 %d입니다.", strlen(str));

	free(str);

}
*/


/*
//Date : 2020-07-13
//Name : 김동혁
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
	puts("문자열 최대 입력크기를 지정하세요");

	scanf("%d", &buff);

	char* str = malloc(sizeof(char) * buff);

	puts("문자열을 입력해주세요");
	scanf("%s", str);
	size = strlen(str);
	printf("문자열의 길이는 %d입니다.", size);
	
	i = size;
	for(i = size; i >= 0; i--) {
		printf("%c", str[i]);

	}
	
	
	free(str);

}
*/


//Date : 2020-07-13
//Name : 김동혁
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
	puts("문자열 저장공간 갯수를 지정하세요");

	scanf("%d", &buff);

	puts("문자열 입력길이를 지정하세요");

	scanf("%d", &size);
	char** str = malloc(sizeof(char*) * buff);

	for (i = 0; i < buff; i++) {
		str[i] = malloc(sizeof(char) * size);
		printf("%d 번째 문자열 입력입니다 입력하세요\n",i + 1);
		scanf("%s", str[i]);
		printf("입력한 문자열은%s\n", str[i]);
	}

	for (i = 0; i < buff; i++) {
		free(str[i]);
	}
	free(str);

}
