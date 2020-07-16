/*
//Date : 2020-07-13
//Name : ±èµ¿Çõ
//Chap : 10-1
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
	int num[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++) {
	
		printf("%x\t", &num[i]);
	
	}
}
*/

/*
//Date : 2020-07-13
//Name : ±èµ¿Çõ
//Chap : 10-2
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
	int num[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++) {
		printf("%x\t", &num[i]);
		printf("%x\t", num + i);

	}
}
*/


//Date : 2020-07-13
//Name : ±èµ¿Çõ
//Chap : 10-3
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


/*
int main() {
	char* str[5] = { "abc", "def","efg","fht","zcs" };
	char *str_temp = NULL;

	int i;

	for (i = 0; i < 5; i++) {
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 5; i++) {
		puts("i");
		for (int j = i + 1; j < 5; j++) {
			puts("j");
			printf("%s \t %s\n", str[i], str[j]);
			if (strcmp(str[i], str[j]) != 1) {
				str_temp = str[i];
				str[i]=str[j];
				str[j]=str_temp;
			}

		}
	}
	for (i = 0; i < 5; i++) {
		printf("%s\n", str[i]);
	}
}
// ¿Ö ¹è¿­Àº ¾ÈµÇ°í Æ÷ÀÎÅÍ´Â µÇ³Ä

*/

//Date : 2020-07-13
//Name : ±èµ¿Çõ
//Chap : 10-6
#define BUF_SIZE 1024
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
	int num[5][5] = { 0 };
	int i, j;
	int offset = 0;
	int sum = 0;
	int sum_y[5] = {0};
	for (i = 0; i < 4; i++) {
		sum = 0;
		for (j = 0; j < 5; j++) {
			if (j == 4) {
				//offset++;
				if (i == 3) {
					printf("%3d", sum_y[j]);
					break;
				}
				printf("%3d", sum);
				
				sum_y[j] += sum;
				sum = 0;
				
			}
			else if (i == 3) {

				printf("%3d", sum_y[j]);
			}
			else {
				printf("%3d", ++offset);
				sum += offset;
				sum_y[j] += offset;

			}
		}
		putchar('\n');
	}

}
*/