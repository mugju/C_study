/*
//Date : 2020-07-13
//Name : 김동혁
//Chap : 11-1
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//인자로 char*형을 받아서 문자열의 길이를 반환하는 함수를 작성하세요. 단, 절대로
//strlen() 함수를 사용하지 말고 직접 계산하는 코드를 작성하세요.함수의 이름은
//GetLength()로 합니다.

int GetLenght(char* str);

int main() {
	char* str = "Hello world";

	int Lenght = GetLenght(str);

	printf("문자열의 길이는 %d 입니다.", Lenght);

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
//Name : 김동혁
//Chap : 11-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//인자로 char* 형을 받아서 문자열을 거꾸로 출력하는 함수를 작성하세요.문제를 해결하
//기 위해서 strlen() 함수를 사용하거나 1번 문제에서 작성한 함수를 사용해도 좋습니다.

int GetLenght(char* str);
int Reverse_str(char* str);
int main() {
	char* str = "Hello world";

	int Lenght = GetLenght(str);

	printf("문자열의 길이는 %d 입니다.", Lenght);

	if (Reverse_str(str) == -1) //무사히 0번째 요소까지 출력했다는 소리임.
		puts("무사히 종료!");

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
//Name : 김동혁
//Chap : 11-3
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//인자로 int형 배열(혹은 주소)과 요소의 개수를 받은 후, 오름차순으로 정렬하는 함수를
//작성하세요.

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
//Name : 김동혁
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
//Name : 김동혁
//Chap : 11-5
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//인자로 검색 대상 문자열이 저장된 메모리의 주소와 찾을 문자(char)를 받아 검색을 수
//행하고 인덱스를 반환하는 함수를 작성하세요.만일 찾는 문자열이 없다면 - 1을 반환합
//니다
int searching(char* str, char ch);


int main() {

	char* str = "Hello world Bump of chicken";

	char ch = 'ㅌ';
	int result = searching(str, ch);
	if (result != -1)
		printf("해당문자가 존재하는 인덱스는 %d입니다", result);
	else
		printf("찾는 문자가 없습니다");
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
//Name : 김동혁
//Chap : 11-6
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//열의 크기가 5인 2차원 int형 배열에 대한 포인터와 행의 개수를 인수로 받아 배열 전체
//의 합을 반환하는 함수를 작성하세요.
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