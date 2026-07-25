/*
Write a program to take three digit number from the user and rotate its digit by one position towards the right.
*/
// #include<stdio.h>
// int main(){
//     int a,b,c,d,e;
//     printf("Please Enter a Number: ");
//     scanf("%d",&a);
//     b = a % 10;
//     c = a / 10;
//     d = c % 10;
//     e = c / 10;

//     printf("%d%d%d",b,e,d);
//     return 0;

// }

#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Please Enter a Number: ");
    scanf("%d",&a);
    b = a / 10;
    c = a % 10;
    d = (c * 100) + b;
    printf("%d",d);
    return 0;

}