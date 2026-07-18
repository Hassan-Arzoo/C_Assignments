/*
Write a program to calculate volume of a cuboid.
*/
#include<stdio.h>
int main(){
    float l,b,h,v;
    printf("Welocme to the program that finds voloume of a cuboid");
    printf("\n");
    printf("Please Enter Length, Breadth and Height:");
    scanf("%f%f%f",&l,&b,&h);
    v = l * b * h;
    printf("The volume of a cuboid is %f",v);

}