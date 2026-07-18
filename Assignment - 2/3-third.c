/*
Write a program to calculate simple intrest.
*/
#include<stdio.h>
int main(){
    float si,p,r,t;
    printf("Plese Enter Principal Amount:");
    printf("\n");
    printf("Plese Enter Rate:");
    printf("\n");
    printf("Plese Enter Time:");
    printf("\n");
    scanf("%f%f%f",&p,&r,&t);
    si = (p * r * t) / 100;
    printf("The simple intresrt for the principal Amount - %f, Rate - %f, Time - %f is %f",p,r,t,si);
    printf("\n");
    printf("Program Finished !! ");



}