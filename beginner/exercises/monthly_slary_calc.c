//Calculate total monthly salary

#include <stdio.h>

double payPerHour = 0;
double hoursPerMonth = 0;

int main(){
    printf("Please enter your hourly wage:\n");
    scanf("%lf", &payPerHour);
    printf("Please enter your monthly hours worked:\n");
    scanf("%lf", &hoursPerMonth);
    double monthlySalary = payPerHour*hoursPerMonth;
    printf("Your monthly salary is: $%.2lf \n", monthlySalary);
    return 0;
}
