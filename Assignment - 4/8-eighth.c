/*
Write a program to swap values of two int varaibles in single line arithemetic 
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
    
    a = (a+b)-(b=a);

    printf("\n");
    printf("After Swap");
    printf("\n");
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    return 0;

}