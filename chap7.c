/*
//Date : 2020-07-07
//Name : 김동혁
//Chap : 7-1

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a,b,c,d,e = 0;
	int max;
	puts("첫번째 정수를 입력해주세요.");
	scanf("%d", &a);
	puts("두번째 정수를 입력해주세요.");
	scanf("%d", &b);
	puts("세번째 정수를 입력해주세요.");
	scanf("%d", &c);
	puts("네번째 정수를 입력해주세요.");
	scanf("%d", &d);
	puts("다섯번째 정수를 입력해주세요.");
	scanf("%d", &e);

	max = a;

	if (max <= b)
		max = b;

	if (max <= c)
		max = c;
	
	if (max <= d)
		max = d;
	
	if (max <= e)
		max = e;


	printf("최댓값은 %d 입니다.\n",max);
	return 0;


}
*/
/*
//Date : 2020-07-07
//Name : 김동혁
//Chap : 7-2

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) 
{
	char ch = 0;
	rewind(stdin);
	ch = getchar();
	while (1)
	{
		puts("문자를 입력하세요");
		scanf(" %c", &ch);
		if (ch == 'y' || ch == 'Y') {
			puts("잘 입력되었습니다.");
			goto END;
		}

	}
	
END:
	return 0;


}
*/
/*
//Date : 2020-07-07
//Name : 김동혁
//Chap : 7-3

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char ch = 0;
	int num1, num2;
	rewind(stdin);

	puts("첫번째 정수를 입력하세요");
	scanf("%d", &num1);
	
	puts("두번째 정수를 입력하세요");
	scanf("%d", &num2);
	
	puts("연산을 선택하세요. a는 두수를 더함, b는 두수를 곱합, c는 먼저입력된 정수에서 나중에입력한 정수를 뺌");
	scanf(" %c", &ch);

	switch(ch){
	case 'a':
		printf("%d", num1 + num2);
		break;

	case 'b':
		printf("%d", num1 * num2);
		break;

	case 'c':
		printf("%d", num1 - num2);
		break;

	default:
		puts("「알 수 없는 명령」");
		return 0;
	}

	
	return 0;


}
*/