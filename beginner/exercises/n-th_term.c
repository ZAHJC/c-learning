//for a sequence of numbers calculate the Nth term, sequence d=2, a1=1 n=9

#include <stdio.h>

int interval = 2;
int startPoint = 1;
int count = 9;
int endPoint = 0;
int main(){
    int endPoint = startPoint + interval * (count-1);
    printf("The end point is %d \n", endPoint); 
}

