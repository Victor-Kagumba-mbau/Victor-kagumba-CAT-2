/*
CAT 2 Question 3 section B
Name: Victor Kagumba
Reg No: CT101/G/23670/24
Date: 07/11/2024
*/
#include <stdio.h>
#include <math.h>
int main(){
	float hours_worked, hourly_wage, gross_pay, taxes, net_pay, overtime_hours, overtime_pay, regular_pay;
	printf("Enter the hours_worked: ");
	scanf("%f", &hours_worked);
	printf("Enter the hourly_wage: ");
	scanf("%f", &hourly_wage);
	if(hours_worked<=40){
		gross_pay = hours_worked*hourly_wage;
	}else{
	regular_pay = 40*hourly_wage;
	overtime_hours =hours_worked-40;
    overtime_pay = overtime_hours*hourly_wage*1.5;
	gross_pay = regular_pay + overtime_pay;
	}
	if (gross_pay <=600){
		taxes = gross_pay*0.15;
	}else{
		taxes = 600*0.15 + (gross_pay-600)*0.20;
	}
	net_pay = gross_pay-taxes;

	printf("Gross pay: %f \n", gross_pay);
	printf("Taxes: %f \n", taxes);
	printf("Net pay: %f \n", net_pay);
	
	return 0;
}