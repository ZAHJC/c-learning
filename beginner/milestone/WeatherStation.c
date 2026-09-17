// Convert celsius to fahrenheit
#include <stdio.h>
#include <stdlib.h>

double celsius = 0.0;

int main(){
   printf("please enter the temperature in celsius\n");
   scanf("%lf", &celsius);
   double fahrenheit = celsius * 1.8 + (double)32;
   printf("The temperature in Fahrenheit is: %.1lf\n", fahrenheit);
   return 0;
}
