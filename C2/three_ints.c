/*
 * Write a program that inputs three different integers from 
 * the keyboard, then prints the sum, the average, the product, 
 * the smallest and the largest of these numbers.
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}

int main(void)
{
	int a[SIZE];
	int i;
	int product;
	int sum;
	
	printf("Enter please %d numbers:\n", SIZE);
	for (i = 0; i < SIZE; i = i + 1){
		scanf("%d", &a[i]);
	}
	
	sum = a[0];
	product = a[0];
	
	for (i = 1; i < SIZE; i = i + 1){
		sum = sum + a[i];
		product = product * a[i];
	}
	
	qsort(a, SIZE, sizeof(int), cmpfunc);
	
	printf("The sum of numbres: %d\n", sum);
	printf("The product of numbres: %d\n", product);
	printf("The avarage of numbres: %f\n", (float) sum / SIZE);
	printf("The minimum: %d\n", a[0]);
	printf("The maximum: %d\n", a[SIZE-1]);
	
	return 0;
}
