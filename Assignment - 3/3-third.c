/*
Write a program to input three chracters from the user and display chracters with their corresponding ASCII codes.
*/
#include<stdio.h>
int main(){
    char char1,char2,char3;
    printf("Please Enter First Chracter :");
    printf("\n");
    scanf(" %c",&char1);
    printf("\n");
    printf("Please Enter Second Chracter :");
    printf("\n");
    scanf(" %c",&char2);
    printf("\n");
    printf("Please Enter Third Chracter :");
    printf("\n");
    scanf(" %c",&char3); 
    printf("\n");
    printf("The user input chracter\'s is %c, %c and %c and its corresponding ASCII codes are \n%d\n%d\n%d",char1,char2,char3,char1,char2,char3);
    return 0;
}