/*
Write a program to input a chracter from the user and print its ASCII code.
*/

#include<stdio.h>
int main(){
    char char1;
    printf("Please Enter a Chracter:");
    scanf("%c",&char1);
    printf("The user input chracter is %c and its ASCII code is %d",char1,char1);
    return 0;
}