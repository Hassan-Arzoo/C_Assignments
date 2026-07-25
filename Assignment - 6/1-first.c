/*
Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.
*/

#include<stdio.h>
int main(){
    float a,b;
    printf("Welcome to Currency Converter");
    printf("\n");
    printf("We Convert Indian Curreny and convert it into Us Dollars");
    printf("\n");
    printf("Please Enter Indian Rupees : ");
    scanf("%f",&a);
    b=a/84.23;
    printf("\n");
    printf("The Amount You have Entered in INR is %f and its Us dollar value is %.2f",a,b);
    return 0;

}