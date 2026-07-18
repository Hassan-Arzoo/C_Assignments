/*
Write a program to calculate average of three integers. Number are given by the user.
*/
#include<stdio.h>
int main(){
    float a;
    float b;
    float c;
    float avg;
    printf("Welcome to Program which calculates average of three number:-🫡");
    printf("Now, Enter first No: ");
    scanf("%f",&a);
    printf("Now, Enter second No: ");
    scanf("%f",&b);
    printf("Now, Enter third No: ");
    scanf("%f",&c);
    avg=(a+b+c)/3;
    printf("The average of %f , %f and %f is %f",a,b,c,avg);
    return 0;
}