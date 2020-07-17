/*

//Date : 2020-07-16
//Name : 김동혁
//Chap : 18-1


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//표준 입력 장치에서 문자열을 입력받은 후, 표준 출력 장치로 출력하는 프로그램을 작성
//하세요.단, 반드시 fgets()와 fputs() 함수를 사용하세요.

void main() {

	char* str = malloc(sizeof(char) * 18);

	fgets(str, 18, stdin);
	fputs(str, stdout);
}
*/
/*
//Date : 2020-07-16
//Name : 김동혁
//Chap : 18-2


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//현재 경로에서 TestFile.txt 파일을 열어서, 사용자가 입력한 문자열을 뒤에 이어서 추가
//한 후 다시 저장하는 프로그램을 작성하세요.

void main() {
	
	FILE* fp = fopen("TestFile.txt", "a+" );

	char* str = malloc(sizeof(char) * 18);

	fgets(str, 18, stdin);
	//scanf("%s", str);

	fputs(str,fp);

	fclose(fp);
	free(str);

}
*/
/*
//Date : 2020-07-16
//Name : 김동혁
//Chap : 18-3


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//현재 경로에서 TestFile.txt 파일을 열어서, 원본 파일에서 행 단위로 문자열을 읽어 들
//여 대상 파일에 복사하는 프로그램을 작성하세요.단, 대상 파일도 현재 경로에 만들며
//파일 이름은 DstFile.txt로 합니다.
int main() {
	char buf[100] = {0};
	FILE* fp1 = fopen("TestFile.txt", "r");
	FILE* fp2 = fopen("DstFile.txt", "w+");

	while (fgets(buf, 100, fp1) != NULL) {
		fputs(buf, fp2);
	}
	fclose(fp1);
	fclose(fp2);




}
*/

/*
//Date : 2020-07-17
//Name : 김동혁
//Chap : 18-4

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//main() 함수의 인자로 두 바이너리 파일의 경로를 입력받아 바이너리 모드로 열고, 원본
//파일의 내용을 읽어 들여 대상 파일로 복사하는 프로그램을 작성하세요.단, 복사 진행
//과정을 백분율로 화면에 출력하고, 한 번에 4KB단위로 복사합니다.그리고 대상 파일의
//존재 유무에 상관없이 무조건 만들며, 파일의 크기가 최대 100MB 이상인 경우는 고려하
//지 않습니다.

int main(int argc, char *argv[]) {

	FILE* fp1 = fopen("b1.txt", "rb");

	FILE* fp2 = fopen("b2.txt", "wb");
	char buf[4000] = { 0 };
	
	fseek(fp1, 0, SEEK_END);    // 파일 포인터를 파일의 끝으로 이동시킴
	int size = ftell(fp1);          // 파일 포인터의 현재 위치를 얻음

	fseek(fp1, 0, SEEK_SET);	//처음으로 돌려줌

	printf("1번파일 크기 : %d", size);
	int i = 0;

	//fread(buf,sizeof(char), 1000, fp1);
	float count = size/4000 +1;
	while (feof(fp1) == 0) {
		fread(buf, sizeof(char), 4000, fp1);
		fputs(buf, fp2);
		printf("진행률 : %.2f 퍼센트\n", (++i/count)*100);
		
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}


*/