/*
 * C1
 * (Arithmetic) Write a program that asks the user to enter two numbers, 
 * obtains them from the user and prints their sum, product, difference,
 * quotient and remainder. 
 */

#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Enter please two numbers:\n");
	scanf("%d %d", &a, &b);
	printf("A = %d, B = %d \n", a, b);
	
	printf("Sum of A and B is: %d \n", a + b);
	printf("Product of A and B is: %d \n", a * b);
	printf("Difference between A and B is: %d \n", a - b);
	
	if (b == 0) {
		printf("Can't calculate division (A/B), the devisor is equal 0\n");
		return 0;
	}
	printf("Quotient of dvivsion A by B is: %d \n", a / b);
	printf("Reminder of dvivsion A by B is: %d \n", a % b);
	return 0;
}
