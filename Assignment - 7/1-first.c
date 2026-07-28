/*
Write a program to check whether a given number is positive or non-positive.
*/
#include<stdio.h>
int main(){
    int a;
    printf("Welcome to the program that finds if a number is positive or non-positive.");
    printf("\n");
    printf("Please Enter a Number: ");
    scanf("%d",&a);
    if(a>0){
        printf("The number you have entered is %d and it is Positive.",a);
        printf("\n");
    }
    if(a<=0){
        printf("The number you have entered is %d and it is Non-Positive.",a);
        printf("\n");
    }
    printf("Thanks for using our program.");
}