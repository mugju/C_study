/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 5 -1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{

	int num1, num2 = 0;

	float add, sub, mul, dev;

	printf("ù��° ������ �Է��ϼ��� : \n");
	scanf("%d", &num1);
	
	printf("�ι�° ������ �Է��ϼ��� : \n");
	scanf("%d", &num2);

	add = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	dev = num1 / num2;


	printf("���� : %.1f\n", add);
	printf("���� : %.1f\n",sub);
	printf("���� : %.1f\n", mul);
	printf("������ : %.1f\n", dev);

}
*/
/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 5 -2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int num;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &num);

	printf("%d", num % 5);


}
*/
/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 5 -3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int bb = -8;
	int num;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &num);

	printf("%d", bb & num);


}
*/

/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 5 -4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &num);

	num &= (~(1 << 3));
	printf("%d",  num);


}
*/

/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 5 -5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int num;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &num);

	//2�� ������ �ٲٴ� ����
	num = ~num + 1;
	printf("%d", num);


}
*/


/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 5 -6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int num;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &num);

	int clock = num / 3600;
	int minute = (num % 3600) / 60;
	int second = (num % 3600) % 60 ;

	printf("%d:%d:%d", clock, minute, second);
}
*/
/*
//Date   : 2020-07-06
//Name : �赿��
//chapter : 5 -7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int nData = 10;
	printf("%d\n", nData --);
	printf("%d\n", nData);
	
}
*/