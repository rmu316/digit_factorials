#include <stdio.h>

int highestDigit(int n, int d);
int isFactorion(int n);
int factorial(int n);

int main() {

	int i;
	int sum = 0;

	for (i = 3; i < 48; i++) {
		if (highestDigit(i,4)) {
			if (isFactorion(i)) {
				printf("Found a factorian: %d\n", i);
				sum += i;
			}
		}
	}

	for (i = 100; i < 1000; i++) {
		if (highestDigit(i,6)) {
			if (isFactorion(i)) {
				printf("Found a factorian: %d\n", i);
				sum += i;
			}
		}
	}

	for (i = 1000; i < 10000; i++) {
		if (highestDigit(i,7)) {
			if (isFactorion(i)) {
				printf("Found a factorian: %d\n", i);
				sum += i;
			}
		}
	}

	for (i = 10000; i < 100000; i++) {
		if (highestDigit(i,8)) {
			if (isFactorion(i)) {
				printf("Found a factorian: %d\n", i);
				sum += i;
			}
		}
	}
		
	for (i = 100000; i < 1000000; i++) {
		if (isFactorion(i)) {
			printf("Found a factorian: %d\n", i);
			sum += i;
		}
	}

	for (i = 1000000; i < 2540160; i++) {
		if (isFactorion(i)) {
			printf("Found a factorian: %d\n", i);
			sum += i;
		}
	}

	printf("Sum of all numbers that can be written as sum of factorial of its digits: %d\n", sum);
	return 0;
}

int highestDigit(int n, int d) {

	int num = n;
	int digit;	

	while (num > 0) {
		digit = num % 10;
		if (digit > d) return 0;
		num /= 10;
	}
	return 1;
}

int isFactorion(int n) {

	int num = n;
	int fact = 0;

	while (num > 0) {
		fact += factorial(num % 10);
		num /= 10;
	}

	if (fact == n) return 1;
	
	return 0;
}

int factorial(int n) {
	
	int i, r = 1;
	for (i = 1; i <= n; i++) {
		r *= i; 
	}

	return r;
}
