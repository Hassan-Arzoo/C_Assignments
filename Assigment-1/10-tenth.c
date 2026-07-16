/*
WAP to find the area of a circle. Take radius of circle from the user as input.
*/
#include<stdio.h>
int main(){
    float r;
    float area;
    printf("Welcome to a program that calculates area of a circle.");
    printf("\n");
    printf("Enter radius of a circle:");
    scanf("%f",&r);
    area =  (22.0/7.0)*r*r;
    printf("Area of a Cirle having radius %f is %f",r,area);
    printf("\n");
    printf("Program Finished.");
    return 0;

}