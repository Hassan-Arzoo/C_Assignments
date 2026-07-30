/*
Write a program to check whether a given year is leap year or not.
*/
#include<stdio.h>
int main(){
    int year;
    printf("Welcome to the program that tells if the year is leap or not.");
    printf("\n");
    printf("Please Enter the Year you want to check:");
    printf("\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("\n");
        printf("The Year you have entered is %d and it is a leap year.",year);
        printf("\n");
    }
    else if(year%100==0)
    {
        printf("\n");
        printf("The Year you have entered is %d and it is not a leap year.",year);
        printf("\n");
    }
        
    
    else if(year%4==0){
        printf("\n");
        printf("The Year you have entered is %d and it is a leap year.",year);
        printf("\n");
    }
    else{
        printf("\n");
        printf("The Year you have entered is %d and it is not a leap year.",year);
        printf("\n");
    }
    return 0;
}