#include "functions.h"

double principleCalculator(double price, double downpayment) {
	return (price - downpayment);
}

double monthlyCostCalculator(double principal_payment, double annual_interest, int total_payments) {
	return ((annual_interest / 1200) * principal_payment) / (1 - pow((1 + annual_interest / 1200), -total_payments));
}