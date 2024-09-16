#include<stdio.h>
int main()
{
	float salary;
	float net_s,tax=0;
	printf("Enter your salary: ");
	scanf("%f",&salary);
	net_s=salary;
	if(salary<250000)
	{
		printf("No tax\n");
	}
	else if(salary>250000 && salary<=500000)
	{
		tax=0.05*salary;
		net_s=salary-tax;
	}
	else if(salary>500000 && salary<=1000000)
	{
        tax=0.20*salary;
		net_s=salary-tax;		
	}
    else if(salary>1000000)
	{
        tax=0.30*salary;
		net_s=salary-tax;		
	}
	printf("Actual Salary: %.0f\nTax Amount: %.3f\nNet Salary After Tax: %.3f",salary,tax,net_s);
	return 0;
}