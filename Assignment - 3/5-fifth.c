/*
Write a program to print a given number without its last digit.
*/

#include<stdio.h>
int main(){
    int number;
    int number1;
    printf("Please Enter a Number for which you want to print its last digit : ");
    scanf("%d",&number);
    number1 = number / 10 ;
    printf("The number you have entered is %d and without last digit is %d ",number,number1);
    return 0;

}