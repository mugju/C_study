/*
//DATA_STRUCTURE
//Date : 2020-07-20
//Name : ±èµ¿Çõ
//Chap : 2

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

double power_1(double x, int n) {
	if (x == 1 || n == 0)
		return 1;
	int i = 0;
	double result = 1;
	for (i = 0; i < n; i++) {
		result *= x;
	}
	return result;
} // ¼øÈ¯ ¾ø´Â°Å..

//¼øÈ¯À» ¾²¸é..?

double power_2(double x, int n) {
	if (n == 0)
		return 1;

	else if (n % 2 == 0) {
		return power_2(x * x, n / 2);
	}
	else {
		return x * power_2(x * x, (n - 1) / 2);
	}
}

int main() {

	time_t start, end;

	int i=0;
	start = clock();
	
	double print =0;
	while (i < 5000000) {
		print = power_1(2, 500);
		i++;
	}
	end = clock();

	float res = (float)(end - start) / CLOCKS_PER_SEC;


	printf("%.2lf\ntime : %f\n", print, res);

	i = 0;
	start = clock();
	while (i < 5000000) {
		print = power_2(2, 500);
		i++;
	}
	end = clock();


	res = (float)(end - start) / CLOCKS_PER_SEC;
	printf("%.2lf\ntime : %f\n", print, res);
	

}
*/

//DATA_STRUCTURE
//Date : 2020-07-20
//Name : ±èµ¿Çõ
//Chap : 2 -17
#include<stdio.h>
#include<stdlib.h>

int facto(int n) {
	if (n == 1) { return n; }
	else {
		return facto(n - 1) * n;
	}
}

float permutation(int n, int r) {
	int i;
	float result = 1;
	for (i = 0; i < r; i++) {
		result *= (n - i);
	}
	return result;
}

float Combination(int n, int k) {
	static int count =0;
	count++;
	if (k == 0 || k == n)
		return 1;
	else if (k > 0 && k < n) {
		return Combination(n - 1, k - 1) + Combination(n - 1, k);
	}
	printf("%d", count);
	return permutation(n, k) / facto(k);
}

int main() {
	
	float result = Combination(5, 4);

	printf("%.1f", result);
	
}