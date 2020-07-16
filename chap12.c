/*
//Date : 2020-07-13
//Name : 김동혁
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
//Name : 김동혁
//Chap : 12-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//사용자로부터 두 문자열을 입력받은 후, 두 문자열 중에서 길이가 긴 문자열이 출력되는
//프로그램을 작성하세요

int main() {
	char* str = malloc((sizeof(char)) * 50);
	char* str2 = malloc((sizeof(char)) * 50);
	int i = 0;
	puts("첫번째 문자열 입력해주세요");
	scanf("%s", str);
	
	puts("두번째 문자열 입력해주세요");
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
//Name : 김동혁
//Chap : 12-3
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//사용자로부터 두 문자열을 입력받은 후, 하나로 합쳐서 출력하는 프로그램을 작성하세
//요.단, 두 문자열을 합칠 때 반드시 sprintf() 함수를 사용해야 하며, 첫 번째 입력받은
//문자열이 저장된 메모리(배열)에 합친 결과가 저장되도록 합니다.

int main() {
	char* str = malloc((sizeof(char)) * 50);
	char* str2 = malloc((sizeof(char)) * 50);
	char buf[100];
	int i = 0;
	puts("첫번째 문자열 입력해주세요");
	scanf("%s", str);

	puts("두번째 문자열 입력해주세요");
	scanf("%s", str2);

	sprintf(str,"%s%s",str, str2);
	printf("%s", str);

	free(str);
	free(str2);

}
*/
/*
//Date : 2020-07-13
//Name : 김동혁
//Chap : 12-4
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//3번 문제의 답을 수정하여 sprintf() 함수 대신 strcat() 함수를 사용하여 같은 결과가
//나오도록 코드를 변경하세요.



int main() {
	char* str = malloc((sizeof(char)) * 50);
	char* str2 = malloc((sizeof(char)) * 50);
	char buf[100];
	int i = 0;
	puts("첫번째 문자열 입력해주세요");
	scanf("%s", str);

	puts("두번째 문자열 입력해주세요");
	scanf("%s", str2);

	strcat(str, str2);
	printf("%s", str);

	free(str);
	free(str2);

}
*/
/*
//Date : 2020-07-13
//Name : 김동혁
//Chap : 12-5
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//사용자로부터 두 문자열을 입력받아 각각의 메모리(배열)에 따로 저장한 후, 두 문자열을
//하나로 합쳐서 저장하는 메모리를 동적으로 할당받고 여기에 앞서 입력받은 두 문자열을
//하나로 합쳐서 저장하는 프로그램을 작성하세요.단, 문자열을 합치는 방법으로 sprintf()
//함수나 strcat()함수를사용하지말고, strcpy()함수를사용해야합니다.

int main() {
	char* str = malloc((sizeof(char)) * 50);
	char* str2 = malloc((sizeof(char)) * 50);
	char* p;
	int i = 0;
	puts("첫번째 문자열 입력해주세요");
	scanf("%s", str);

	puts("두번째 문자열 입력해주세요");
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
//Name : 김동혁
//Chap : 12-6
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//두 단어를 입력받아 같은 단어인지 비교하여 결과를 출력하는 프로그램을 작성하세요.
//단, 대소문자는 구별하지 않고 비교해야 합니다.


int main() {
	char* str = malloc((sizeof(char)) * 50);
	char* str2 = malloc((sizeof(char)) * 50);
	int i = 0;
	puts("첫번째 문자열 입력해주세요");
	scanf("%s", str);

	puts("두번째 문자열 입력해주세요");
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
		puts("두 단어가 같습니다");
	}
	else
		puts("두 단어가 같지 않습니다.");

	free(str);
	free(str2);

}
*/

/*
//Date : 2020-07-14
//Name : 김동혁
//Chap : 12-7
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//한 행의 문자열을 입력받은 후, 어절 단위로 잘라내어 출력하는 프로그램을 작성하세요.
//단, 반드시 strtok() 함수를 사용하여 코드를 작성하세요.

int main() {
	
	char BUFF[BUF_SIZE];
	int i = 0;
	puts("첫번째 문자열 입력해주세요");
	fgets(BUFF, BUF_SIZE, stdin);

	char* ptr = strtok(BUFF, " ");
	
	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}
	

}
*/

//Date : 2020-07-14
//Name : 김동혁
//Chap : 12-8
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <locale.h>
//한 문자열을 입력받은 후, 유니코드로 변환하여 화면에 출력하는 프로그램을 작성하세
//요.단, 화면에 출력할 때는 유니코드로 변환한 문자열을 출력해야 합니다.따라서
//MBCS 기반 함수인 printf() 함수로는 정상적으로 결과를 출력할 수 없습니다.
int main(void)
{
	char* str = malloc(sizeof(char)*100);
	scanf("%s", str);
	wchar_t warr[100] = L"";
	rewind(stdin);
	setlocale(LC_ALL, "Korean");//로케일 설정
	mbstowcs(warr, str, 100);
	wprintf(L"%s\n", warr);//유니코드 문자열 출력
	return 0;
}
