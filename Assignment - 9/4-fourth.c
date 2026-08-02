/*
Write a program to check whether a given number is divisible by 3 and divisible by 2.
*/

#include<stdio.h>
int main(){
    int a;
    printf("Welcome to a program that tells whether the given number is divisible by 3 and divisible by 2.\n");
    printf("Please Enter a Number: ");
    scanf("%d",&a);
    if(a%3==0 && a%2==0){
        printf("The Number is divisble by 3 and 2");
    }else{
        printf("The Number is not divisble by 3 and 2");
    }
}