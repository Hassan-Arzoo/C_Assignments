/*
Write a program to input a three digit number and display the sum of the digits.
*/
#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Please Enter a three digit number: ");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=c/10;
    f=b+d+e;
    printf("\n");
    printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\nf=%d",a,b,c,d,e,f);
    printf("\n");
    printf("The sum of the individual digits you have entered is %d",f);
    return 0;
}