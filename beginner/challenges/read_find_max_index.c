#include <stdio.h>
#include <stdlib.h>


char numArray[10];
int i;
int largestNum = 0;
int largestNumIndex;

int main(){
	printf("Please enter a 10 digit list of numbers: \n");
	scanf("%9s", numArray);
	for(i=0; i<10; i++)
	{
		int currentNum = numArray[i] - '0';
		if(currentNum > largestNum)
		{
			largestNum = currentNum;
			largestNumIndex = i;
		}
	}
	printf("The Largest Number is %d \n", largestNum);
	printf("The Largest Number index is %d \n",largestNumIndex);
}
