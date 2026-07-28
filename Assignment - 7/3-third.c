/*
Write a program to check whether a given number is an even number or an odd number.
*/
#include<stdio.h>
int main(){
    int a;
    printf("Welcome to the program that finds if a number is even or odd.");
    printf("\n");
    printf("Please Enter a Number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("The number you have entered is %d and it is even.",a);
        printf("\n");
    }
    if(a%2==1){
        printf("The number you have entered is %d and it is odd.",a);
        printf("\n");
    }
    printf("Thanks for using our program.");
}