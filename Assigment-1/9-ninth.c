/*
Write a program to calculate are of a rectangle. Input appropriate data from the user.
*/
#include<stdio.h>
int main(){
    int length;
    int breadth;
    int area;

    printf("Welcome to a program that calculates area of a rectangle :-");

    printf("\n");

    printf("Please Enter Length of a rectangle: ");

    scanf("%d",&length);

    printf("Please Enter Breadth of a rectangle: ");

    scanf("%d",&breadth);

    area = length*breadth;

    printf("The area of a rectangle having length: %d and breadth: %d is %d.",length,breadth,area);

    return 0;

}