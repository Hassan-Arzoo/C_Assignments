/*
Write a program to print last digit of a given number.
*/

#include<stdio.h>
int main(){
    int number;
    int number1;
    printf("Please Enter a Number for which you want to print its last digit : ");
    scanf("%d",&number);
    number1 = number % 10 ;
    printf("The number you have entered is %d and its last digit is %d ",number,number1);
    return 0;

}