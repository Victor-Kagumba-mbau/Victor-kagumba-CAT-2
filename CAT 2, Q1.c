/*
CAT 2 Quesstion 1 section B
Name: Victor Kagumba
Reg no: CT101/G/23670/24
Date: 07/11/2024
*/
#include <stdio.h>
#include <string.h>
struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
}employee;
int main(){
	strcpy(employee.name, "John Doe");
	employee.id=12345;
	strcpy(employee.department, "Human Resources");
	employee.salary=55000.50;
	strcpy(employee.email, "john.doe@company.com");
	
	printf("Name: %s \n", employee.name);
	printf("ID: %d \n", employee.id);
	printf("Department: %s \n", employee.department);
	printf("Salary: %f \n", employee.salary);
	printf("Email: %s \n", employee.email);
	
	return 0;
}
