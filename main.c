/*
	Name: Oscar Olsson
	Date completed: 27-06-2020
	Payment calculator
*/




#include "functions.h"

int main() {

	int total_payments = 0;
	double down_payment = 0.0;
	double price = 0.0;
	double annual_interest = 0.0;
	double principal_payment = 0.0;
	double monthly_payment = 0.0;

	printf("\n Enter the purchase price ($) > ");
	scanf_s("%lf", &price);

	printf("\n Enter the down payment ($) > ");
	scanf_s("%lf", &down_payment);

	printf("\n Enter the annual interest > ");
	scanf_s("%lf", &annual_interest);

	printf("\n Enter the total amount of payments > ");
	scanf_s("%d", &total_payments);

	principal_payment = principleCalculator(price, down_payment);
	monthly_payment = monthlyCostCalculator(principal_payment, annual_interest, total_payments);

	printf("\n Amount of money borrowed %.2lf$", principal_payment);
	printf("\n The monthly cost is %.2lf$\n", monthly_payment);

	return 0;
}