
//Date : 2020-07-15
//Name : 김동혁
//Chap : 14-1
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef unsigned char BYTE;
//typedef 예약어를 사용하여 unsigned char형을 BYTE형으로 정의하는 코드를 작성하
//세요.

int main() {
	
	BYTE st[10] = "dsada";
	printf("%s", st);
	return 0;
}

*/


//Date : 2020-07-15
//Name : 김동혁
//Chap : 14-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//char형 배열을 전역 변수로 선언한 후, main() 함수에서 사용자로부터 문자열을 입력받
//아 전역 변수에 저장합니다.그리고 전역 변수에 저장된 문자열을 출력하는 void
//PrintData() 함수를 작성하고 main() 함수에서 이를 호출하는 프로그램을 작성하세요.

char String[100];

void PrintData();
int main() {
	puts("문자열을 입력해주세요.");
	scanf("%s", String);
	PrintData();

}

void PrintData() {
	puts(String);
}
*/

//Date : 2020-07-15
//Name : 김동혁
//Chap : 14-3
//2번에서 작성한 프로젝트에 Test.c 파일을 추가한 후, PrintData() 함수의 정의와, 문자
//열을 저장하는 전역 변수의 선언, 모두를 Test.c 파일로 이동합니다.그리고 이와 같은
//변화에도 아무런 문제가 발생하지 않도록 main() 함수가 있는 소스 파일에 코드를 추가
//하세요.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
extern char String[100];

int main() {
	puts("문자열을 입력해주세요.");
	scanf("%s", String);
	PrintData();

}


*/

//Date : 2020-07-15
//Name : 김동혁
//Chap : 14-4

//원형이「void PrintString(char* pszData); 」와 같은 함수를 작성합니다.이 함수는 인자
//로 전달받은 문자열을 화면에 출력합니다.최초에 호출될 때는 길이와 상관 없이 무조건
//출력하지만 이후로는 앞서 출력한 문자열보다 인자로 전달받은 문자열이더길 경우에만
//출력합니다.main() 함수의 코드가 다음과 같다면 Test와 String만 화면에 출력되어야
//합니다.단, 절대로 전역 변수를 사용하지 말아야 합니다.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void PrintString(char* pszData);

int main() {
	char* str = malloc(sizeof(char) * 100);
	while (1) {
		puts("문자열을 입력해주세요.");
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
		puts("입력된 문자열이 더 깁니다.");
		puts(pszData);
		before_len = now_len;
		printf("%d문자이상", before_len);
	}
	else
		puts("입력된 문자열이 이전 것보다 짧아서 출력하지 않습니다");


	return 0;

}