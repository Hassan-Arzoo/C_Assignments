/*
Write a program to with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.
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
    c = a;
    a = b;
    b = c;
    printf("\n");
    printf("After Swap");
    printf("\n");
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    return 0;

}
