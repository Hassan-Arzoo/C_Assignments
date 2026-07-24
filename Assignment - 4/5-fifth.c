/*
Write a program to swap values of two int variables without using third variable.
*/
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;

    scanf("%d",&a);
    scanf("%d",&b);
    printf("\n");
    printf("Before Swap");
    printf("\n");
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\n");
    printf("After Swap");
    printf("\n");
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    return 0;

}

