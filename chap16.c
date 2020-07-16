
//Date : 2020-07-16
//Name : 김동혁
//Chap : 16-1 ,16-2


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//학생 관리 프로그램을 개발한다고 가정하고, 이 프로그램에 사용할 학생 구조체를 선언
//하겠습니다.멤버로는 이름, 학번, 전화번호, 국어 점수, 영어 점수, 수학 점수, 석차 등이
//있어야 합니다.점수와 석차는 정수로 표현하는 자료지만 나머지는 모두 문자열이라고
//가정하겠습니다.
//그리고 이름의 최대 길이는 영문을 기준으로 30자를 넘지 않으며, 학번은 12자 미만이
//고, 전화번호는 16자 미만이라고 가정하겠습니다.구조체의 이름을 STUDENT로 하여
//구조체를 선언한 코드를 작성합니다.단, 반드시 typedef 문을 조합하여 선언합니다.

//1번에서 선언된 구조체의 객체를 선언하되 각 멤버의 값이 '홍길동', '1234567', '010-
//1234 - 5678', 95, 80, 85, 10으로 초기화될 수 있도록 선언하고, printf( ) 함수를 이용하
//여 화면에 출력하세요.


struct STUDENT {
	char name[30];
	char scNum[12];
	char tellNum[16];
	int Hangul;
	int Eng;
	int Math;
	int ranking;

};

typedef struct STUDENT student;

int main() {

	student std = { "홍길동", "1234567", "010-1234-5678", 95, 80, 85, 10 };

	printf("이름 : %s\n학번 : %s\n전화번호 : %s\n국어 : %d,수학 : %d,영어 : %d,석차 : %d", std.name, std.scNum, std.tellNum, std.Hangul, std.Eng, std.Math, std.ranking);

}