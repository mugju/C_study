/*
//Date : 2020-07-07
//Name : ±èµ¿Çõ
//Chap : 6-1

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int num1, num2 = 0;
	
	printf("µÎ Á¤¼ö¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä\n");
	scanf("%d", &num1);
	scanf("%d", &num2);


	if (num1 > 10 && num2 > 10) {
		puts("1");
	}
	else
		puts("0");


	return 0;


}

*/

/*
//Date : 2020-07-07
//Name : ±èµ¿Çõ
//Chap : 6-2

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int nResult, w = 0, x = -1, y = -1, z = 1;

	nResult = w++ || x++ && ++y || ++z;

	printf("%d %d %d %d %d\n", w, x, y, z, nResult);


	return 0;


}

*/


/*
//Date : 2020-07-07
//Name : ±èµ¿Çõ
//Chap : 6-3

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int num1, num2, num3 =0;
	int c1=0, c2=0, c3 = 0;

	printf("3°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä.");

	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	num1 >= num2 ? (num1 >= num3 ? c1++ : c3++) : (num2 >= num3 ? c2++ : c3++);


	if (c1 == 1)
		printf("%d", num1);
	else if (c2 == 1)
		printf("%d", num2);
	else if (c3 == 1)
		printf("%d", num3);


	return 0;


}
*/