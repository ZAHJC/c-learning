// The tasl is to create a calculator using switch case statements
#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1;
    double num2;
    double answer;
    char operation;

    printf("Please enter your full equation, this program only supports a single operation,  *(Multiply), /(Divide), +(Add), -(subtract)\n");
    scanf("%lf%c%lf", &num1, &operation, &num2);
    
    switch(operation){
        case '+':
            answer = num1 + num2;
            printf("%.2lf\n", answer);
            break;
        case '*':
            answer = num1 * num2;
            printf("%.2lf\n", answer);
            break;
        case '/':
            answer = num1 / num2;
            printf("%.2lf\n", answer);
            break;
        case '-':
            answer = num1 - num2;
            printf("%.2lf\n", answer);
            break;
    }
    return 0;
}
