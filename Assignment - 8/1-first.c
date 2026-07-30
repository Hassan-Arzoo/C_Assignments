/*
Write a program to check whether a given number is three digit number or not.
*/

#include<stdio.h>
int main(){
    int a;
    printf("Welcome to our program that checks whether if a number is three digit or not.\nPlease Enter a Number : ");
    scanf("%d",&a);
    if(a >= 100 && a <= 999){
        printf("The number you have entered is %d and it contains three digit.",a);
    }else{
        printf("The number you have entered is %d and it does not contains three digit.",a);
    }
    return 0;
}


/*
Note: if(100 > a < 999)

In C, chained comparisons don't work like mathematics. This is evaluated as:

(100 > a) < 999
100 > a returns either 0 or 1.
Then 0 < 999 or 1 < 999 is always true.
So your if condition always executes.

*/