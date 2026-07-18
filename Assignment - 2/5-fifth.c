/*
Write a program to ask the user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
*/
#include <stdio.h>
int main(){
    float sp,cp;
    printf("Enter Selling Price and Cost Price: ");
    scanf("%f%f",&sp,&cp);
    printf("Profit/loss=%f",25 * (sp-cp)/12);
    return 0;
}
