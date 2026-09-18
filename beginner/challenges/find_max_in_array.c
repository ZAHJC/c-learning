#include <stdio.h>
#include <stdlib.h>

int myArray[10] = {0,2,6,6,4,6,2,5,7,8};
int i;
int main(){
	int largestNum = 0;
	for(i=0; i<10; i++)
	{
		if(largestNum < myArray[i]){
			largestNum = myArray[i];
		}
	}
	printf("The Largest Number is %d \n", largestNum);
}
