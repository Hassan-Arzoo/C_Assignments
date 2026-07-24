#include<stdio.h>
int main(){
    char ch;
    printf("Please Enter the chracter constant for which you want to print the ASCII code: ");
    scanf("%c",&ch);
    printf("\n");
    printf("The ASCII code for the chracter %c is %d",ch,ch);
    return 0;
}