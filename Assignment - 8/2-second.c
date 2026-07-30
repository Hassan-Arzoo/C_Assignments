/*
Write a program to print greater between two numbers. Print one number if both are the same.
*/

#include<stdio.h>
int main(){
    int a,b;
    printf("Welcome to our program that tells us greater number between two\nPlease Enter numbers one by one: ");
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b)
    {
       printf("You have entered a:%d and b:%d and in this two number a is greater than b.",a,b);
    }
    else if (a<b)
    {
      printf("You have entered a:%d and b:%d and in this two number b is greater than a.",a,b);
    }else{
       printf("You have entered a:%d and b:%d and in this two number a is equal to b.",a,b);

    }
    
}