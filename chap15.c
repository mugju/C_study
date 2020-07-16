
//Date : 2020-07-15
//Name : 김동혁
//Chap : 15-1


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//재귀 호출을 이용하여 값이 60 이하인 피보나치(Fibonacci) 수열을 출력하는 프로그램을
//작성하세요.참고로 피보나치 수열은 다음과 같이앞두 숫자의 합이 이어지는 모습을 하
//고 있습니다.
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
//Name : 김동혁
//Chap : 15-2

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 인자로 char* 형을 받아서 문자열을 거꾸로 출력하는 재귀 호출 함수를 작성하세요.함수
//의 원형은「void PutString(char* pszData); 」와 같습니다.

void PutString(char* pszData);
int main() {
	char* str = malloc((sizeof(char)) * 30);
	puts("문자열을 입력하세요");
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
//Name : 김동혁
//Chap : 15-3


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//char* 형을 반환하고 int형 매개 변수가 둘인 함수에 대하여 포인터 변수를 선언하세요.

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
//Name : 김동혁
//Chap : 15-4


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//3번 문제에 해당하는 함수 포인터를 매개 변수로 받고 int형을 반환하는 함수에 대하여
//포인터 변수를 선언하고, 실제로 제대로 선언되었음을 확인할 수 있는 간단한 예제를 작
//성하세요.즉, 이 포인터 변수에 저장할 수 있는 함수를 선언하고 포인터 변수로 호출하
//여 동작할 수 있게 코드를 작성해야 합니다.

char* strange(int n1, int n2) {
	char* str = "strange";
	return str;
}

int strange_f(char* (*pf)(int, int)) {
	puts("제대로 선언됨.");
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
//Name : 김동혁
//Chap : 15-5


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//인자로 int형을 받고 반환값이 없는 함수에 대하여 포인터 변수를 선언하세요.단, 함수
//호출 규약을 _ _stdcall로 설정해야 합니다.또한, 4번 문제처럼 변수를 실제 사용하는
//간단한 예제를 작성하세요

void strange(int n1, int n2) {
	puts("호출됨.");
}

int strange_f(char* (*pf)(int, int)) {
	puts("제대로 선언됨.");
	return 0;
}

void main() {

	char* (*pf)(int, int) = NULL;
	pf = strange;

	pf(1, 1);
}
*/