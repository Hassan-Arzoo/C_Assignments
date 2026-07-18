/*
Write a program to calculate the circumference of a circle.
*/
#include<stdio.h>
int main(){
    float radius;
    float circumference;
    printf("Welcome to Program which calculates circumference of a circle:- ");
    printf("\n");
    printf("Please Enter the radius for which you want to calculate circumference of a circle:- ");
    scanf("%f",&radius);
    circumference = 2 * 22.0/7 * radius;
    printf("You have Entered the radius - %f and it\'s circumference is %f",radius,circumference);
    printf("\n");
    printf("Program Finished !!");





}