/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 4


//

#include <stdio.h>


void main() {
	

	char c = 0;
	char ch2;
	int i;
	
	puts("���� �Է��ϸ� �Է��� �����մϴ�.");
	
	i = 0;
	
	
	while(1){
		i++;
		c = getchar();
	
		if(i==2)	
			putchar(c);

		if (c == '.') {
			if (i < 3) {
				printf("���Է��ϼ���");
				continue;
			}
			else
				break;
		}
	} 

	return 0;
}
*/

/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 4 -2

#include<stdio.h>
int main() {
	
	char str[32];

	gets(str,sizeof(str));



	puts(str);
	return 0;

}
*/

/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 4 -3

#include<stdio.h>
int main() {

	char str[32];

	gets(str,sizeof(str));


	printf("%o\t", str);
	
	puts(str);
	return 0;

}

*/


/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 4 -4

#include<stdio.h>
#include<conio.h>
int main() {

	rewind(stdin);
	char c = _getch();


	printf("%d", c);



	return 0;

}
*/

/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 4 -5
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

int main() {

	rewind(stdin);
	int num = 0;

	scanf("%d", &num);

	
	printf("8���� ���� : %o \n 16���� ���� : %X", num,num);



	return 0;

}
*/

/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 4 -6
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

int main() {

	//rewind(stdin);
	char c = _getch();
	
	
	printf("%c", c-32);

}
*/

/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 4 -7
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

int main() {

	float num1, num2 = 0;
	float avg = 0;
	scanf("%f", &num1);
	scanf("%f", &num2);

	avg = (num1 + num2) / 2;

	printf("%.3f", avg);


	return 0;
}
*/
/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 4 -8
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

int main() {

	int num;
	scanf("%d", &num);
	

	printf("��ȣ������ ������ : %u\n", num);
	printf("16���� : %X", num);


	return 0;
}
*/