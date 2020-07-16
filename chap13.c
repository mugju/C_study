/*
//Date : 2020-07-15
//Name : 김동혁
//Chap : 13-1
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <locale.h>
#include<time.h>

//난수를 구하는 함수를 사용하여 가위바위보 게임을 구현합니다. 0~2 범위의 숫자를 발
//생시켜서 0은 가위, 1은 바위, 2는 보라고 가정합니다.

//게임 방식은 사용자로부터 0~2 범위의 정수를 입력받은 후, 이에 대응하는 0~2 범위의
//난수를 발생시켜 사용자가 입력한 정보와 비교하여 가위바위보 게임을 진행하고, 사용자
//와 컴퓨터 중에서 승자가 누구인지 출력합니다.

int rsp(int num, int Comnum);

int main() {
	srand((unsigned int)time(NULL));
	int num;
	

	int ComNum;
	while (1) {
		while (1) {
			puts("0~2까지의 정수를 입력해주세요.종료하려면 99 입력");
			scanf("%d", &num);
			if (num == 0 || num == 1 || num == 2) {
				puts("0~2까지의 정수가 입력되었습니다");
				break;
			}
			else if (num == 99) {
				puts("99가 입력되어 종료합니다.");
				return 0;
			}
			else
				puts("0~2까지의 정수가 입력되지 않았습니다. 다시 입력하세요");
			rewind(stdin);
		}

		ComNum = rand() % 3;
		rsp(num, ComNum);
	}
}

int rsp(int num, int Comnum) {

	switch (num)
	{
	case 0:
		puts("가위를 냈습니다");
		if(Comnum == 0)puts("상대는 가위... 비겼습니다");
		if (Comnum == 1)puts("상대는 주먹... 졌습니다");
		if (Comnum == 2)puts("상대는 보자기... 이겼습니다");
		break;
	case 1:
		puts("주먹를 냈습니다");
		if (Comnum == 0)puts("상대는 가위... 이겼습니다");
		if (Comnum == 1)puts("상대는 주먹... 비겼습니다");
		if (Comnum == 2)puts("상대는 보자기... 졌습니다");
		break;
	case 2:
		puts("보자기를 냈습니다");
		if (Comnum == 0)puts("상대는 가위... 졌습니다");
		if (Comnum == 1)puts("상대는 주먹... 이겼습니다");
		if (Comnum == 2)puts("상대는 보자기... 비겼습니다");
		break;
	default:
		break;
	}
	return 1;
}
*/
/*
//Date : 2020-07-15
//Name : 김동혁
//Chap : 13-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>
#include<time.h>

//오늘을 기준으로 10일 후와 100일 후의 날짜가 각각 무엇인지 계산하여 출력하는 프로그
//램을 작성하세요

void main() {
	struct tm* ptime = { 0 };
	time_t t ;
	time(&t); 
	
	t += 864000;
	ptime = localtime(&t);
	puts("10일 뒤");
	printf("%d-%d-%d\n", ptime->tm_year + 1900, ptime->tm_mon + 1, ptime->tm_mday);

	puts("100일 뒤");
	t += 86400000;
	ptime = localtime(&t);
	printf("%d-%d-%d\n", ptime->tm_year + 1900, ptime->tm_mon + 1, ptime->tm_mday);
	
}
*/

//Date : 2020-07-15
//Name : 김동혁
//Chap : 13-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>
#include<time.h>

//프로그램을 시작하면 'Hello, World!' 문자열을 출력한 후, 사용자로부터 임의의 키 입력
//을 받으면 화면을 지우고 종료하는 프로그램을 작성하세요.참고로 명령 프롬프트 화면
//을 지우는 명령은 윈도우 운영체제를 기준으로 'cls'입니다.

void main() {

	puts("Hello, World");

	if (getch()) {
		system("cls");
		exit(1);
	}
}