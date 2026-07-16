/*
Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.
*/
#include<stdio.h>
int main(){
    int a; 
    int b;
    int c;
    printf("Please enter first number : ");
    scanf("%d",&a);
    printf("Please enter second number : ");
    scanf("%d",&b);
    c = a + b;
    printf("Sum of %d and %d is %d",a,b,c);
    return 0;
}