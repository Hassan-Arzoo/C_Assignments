/*
Write a program to check whether a given number is divisible by 5 or not.
*/

/*
First Approach - checking with last digit only
*/

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Welcome to the a program that tells you whether a number is divisible by 5 or not. ");
//     printf("\n");
//     printf("Please Enter a number: ");
//     scanf("%d",&a);
//     printf("\n");
//     printf("%d",a);
//     printf("\n");
//     if( a%10==0 || a%10==5|| a%10==-5 ){
//         printf("\n");
//         printf("The number you have entered is %d and it is divisible by 5",a);
//         printf("\n");
//     }
//     else{
//     printf("\n");
//     printf("The number you have entered is %d and it is not divisible by 5",a);
//     printf("\n");
//     }
// }
/*
Second Approach - checking with last digit only
*/
#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
                    int a;
                    printf("Welcome to the a program that tells you whether a number is divisible by 5 or not. ");
                    printf("\n");
                    printf("Please Enter a number: ");
                    scanf("%d",&a);
                    printf("\n");
                    printf("%d",a);
                    printf("\n");
                    if( a%5==0 ){
                        printf("\n");
                        printf("The number you have entered is %d and it is divisible by 5",a);
                        printf("\n");
    }
    else{
    printf("\n");
    printf("The number you have entered is %d and it is not divisible by 5",a);
    printf("\n");
    }
 }return 0;
}