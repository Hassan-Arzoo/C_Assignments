/*
Write a program to check whether a given alphabet is uppercase or lowercase.
*/
#include<stdio.h>
int main(){
    char a;
    printf("Welcome to program that tells whether the chracter you have entered is Upper-case or Lower-case\n");
    printf("Pleae Enter the chracter: ");
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        printf("The chracter is Upper-case. ");
    }else{
        if (a>='a' && a<='z')
        {
            printf("The chracter is Lower-case. ");
        }else{
            printf("Invalid Input ");
        }
        
    }return 0;
}