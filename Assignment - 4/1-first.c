/*
Write a program to calculate size of a chracter constant.
*/
#include<stdio.h>
int main(){
    char a,b;
    printf("Enter a chracter constant to calculate its size : ");
    scanf("%c",&a);
    b = sizeof(a);
    printf("\n");
    printf("%d",b);
    return 0;


}