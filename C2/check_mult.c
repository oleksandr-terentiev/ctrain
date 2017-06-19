/*
 * Write a program that reads in two integers and determines 
 * and prints if the first is a multiple of the second.
 */

#include <stdio.h>
int main(void)
{
	int a, b;
	printf("Enter please two numbers:\n");
	scanf("%d %d", &a, &b);

	while (b <= 0) {
		printf("Second number must be greater than 0, enter please correct value:\n");
		scanf("%d", &b);
	}

	printf("A = %d, B = %d \n", a, b);
	if (a % b == 0)
	printf("B is a multiply of A.\n");
	else
	printf("B is NOT a multiply of A.\n");
	return 0;
}
