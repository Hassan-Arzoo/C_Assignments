/*
Write a program to calculate size of a real constant.
*/
#include<stdio.h>
int main(){
    float b;
    printf("Enter a real constant to calculate its size : ");
    //scanf("%f",&a);
    b = sizeof(3.14);
    printf("\n");
    printf("%f\n",b);
    return 0;


}