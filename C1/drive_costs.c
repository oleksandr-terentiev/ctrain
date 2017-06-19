/*
 * C1
 * (Savings Calculator) Create an application that calculates your 
 * daily driving cost, so that you can estimate how much money could be 
 * saved by car pooling, which also has other advantages such as 
 * reducing carbon emissions and reducing traffic congestion. 
 * The application should input the following information and display 
 * the user’s cost per day of driving to work:
 * a) Total miles driven per day.
 * b) Cost per gallon of gasoline.
 * c) Average miles per gallon.
 * d) Parking fees per day.
 * e) Tolls per day.
 */
 
#include <stdio.h>
int main(void)
{
	float total_miles, gas_cost, miles_per_gallon, park_cost, tolls_cost;
	
	printf("Enter please total miles driven per day:\n");
	scanf("%f", &total_miles);
	
	printf("Enter please cost per gallon of gasoline:\n");
	scanf("%f", &gas_cost);
	
	do {
		printf("Enter please average miles per gallon (greater than 0):\n");
		scanf("%f", &miles_per_gallon);
	} while (miles_per_gallon <= 0);
	
	printf("Enter please parking fees per day:\n");
	scanf("%f", &park_cost);
	
	printf("Enter please total tolls per day:\n");
	scanf("%f", &tolls_cost);
	
	float drive_cost = gas_cost * total_miles / miles_per_gallon;
	float daily_cost = park_cost + tolls_cost + drive_cost;
	
	printf("Your daily driving cost is: %f \n", daily_cost);
	
	return 0;
}
