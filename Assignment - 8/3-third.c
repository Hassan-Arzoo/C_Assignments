/*
Write a program to check whether roots of a given quadratic equations are real & distinct, real and equal or imaginary roots.
*/

#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Welcome to our program that tells you about whether roots of a given quadratic equations are real & distinct, real and equal or imaginary roots.");
    printf("\n");
    printf("Standard Quadratic Equation looks like that : the equation in standard form: (ax^2 + bx + c = 0).");
    printf("\n");
    printf("Please Enter the value of \"a\"of your quadratic equation.");
    printf("\n");
    scanf("%d",&a);
    printf("\n");
    printf("Please Enter the value of \"b\"of your quadratic equation.");
    printf("\n");
    scanf("%d",&b);
    printf("\n");
    printf("Please Enter the value of \"c\"of your quadratic equation.");
    printf("\n");
    scanf("%d",&c);
    printf("\n");

    d = (b*b) - (4*a*c);

    if(d>0){
        
        printf("The equation has two different real number answers.");
    }
    else if (d==0){
        
        printf("The equation has two identical or one repeated real number answer.");
    }
    else{
        
        printf("The equation has no real answers, only complex or imaginary numbers.");
    }
    return 0;  
}



// You can check the nature of the roots of a quadratic equation (\(ax^2 + bx + c = 0\)) by finding the discriminant (\(D = b^2 - 4ac\)), which tells you if the roots are real and distinct (\(D > 0\)), real and equal (\(D = 0\)), or imaginary (\(D < 0\)).Steps to Check the RootsWrite the equation in standard form: \(ax^2 + bx + c = 0\).Find the numbers for \(a\), \(b\), and \(c\).Calculate the discriminant using the formula: \(D = b^2 - 4ac\).Compare \(D\) to zero using the rules below:Rules for the Discriminant (\(D\))Real and Distinct Roots (\(D > 0\)): The value of \(b^2 - 4ac\) is positive. The equation has two different real number answers.Real and Equal Roots (\(D = 0\)): The value of \(b^2 - 4ac\) is zero. The equation has two identical or one repeated real number answer.Imaginary Roots (\(D < 0\)): The value of \(b^2 - 4ac\) is negative. The equation has no real answers, only complex or imaginary numbers.