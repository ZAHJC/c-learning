//Writing a program that takes 3 grades and calculates exact average
#include <stdio.h>

int _gradeOne = 0;
int _gradeTwo = 0;
int _gradeThree = 0;

int main(){
    printf("Please enter the grades with a space between them\n");
    scanf("%d %d %d",&_gradeOne, &_gradeTwo, &_gradeThree);
    float _finalGrade = ((float)_gradeOne+(float)_gradeTwo+(float)_gradeThree)/3;
    printf("Your final grade was %.2f\n", _finalGrade);
    return 0;
}
