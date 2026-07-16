/*
Write a program to calculate square of a given number. Number is entered by the user.
*/
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Welcome to a Program that calculates square of any number enterd by you.");
    printf("Enter a Number : ");
    scanf("%d",&a);
    b=a*a;
    printf("The number you have entered is %d and its Square is %d ",a,b);
}