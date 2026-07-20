/*
Write a program to input an ASCII code from the user and print its corredponding chracter.
*/

#include<stdio.h>
int main(){
    int ASCII;
    printf("Please Enter a ASCII code :");
    scanf("%d",&ASCII);
    printf("The user input ASCII code is %d and its chracter  is %c",ASCII,ASCII);
    return 0;
}