/*
Write a program which takes the cost price and selling price of a product from the user. Now calculate the profit or loss percentage.
*/
#include<stdio.h>
int main(){
    float sp,cp,pp,lp;
    printf("Welcome to the program that calculates profit percentage and loss percentage.\n");
    printf("Please Enter Selling Price.\n");
    scanf("%f",&sp);
    printf("Please Enter cost Price.\n");
    scanf("%f",&cp);
    if(sp>cp){
        pp=((sp-cp) * 100) / cp;
        printf("The profit Percentage is : %f",pp);
    }else{
        if(cp>sp){
            lp=((cp-sp) * 100) / cp;
            printf("The loss Percentage is : %f",lp);
        }else{
            printf("Breakthrough Point i.e No profit and No loss");
        }
    }
    return 0;
}