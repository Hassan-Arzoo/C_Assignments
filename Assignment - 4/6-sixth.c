/*
Write a program to without using third variable and without using +,- operators.
*/
#include<stdio.h>
int main(){
    int a;
    int b;

    scanf("%d",&a);
    scanf("%d",&b);
    printf("\n");
    printf("Before Swap");
    printf("\n");
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("\n");
    printf("After Swap");
    printf("\n");
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    return 0;

}
