// Question

// Write a C program to find the greatest among three given numbers using nested if-else statements.

// If all three numbers are equal, print "All numbers are equal".
// If the greatest number appears two or three times, print that number only once.
// If all three numbers are different, print the greatest number.

// Sample Input/Output

// Input 1

// 5 5 5

// Output

// All numbers are equal.
// Greatest Number: 5

// Input 2

// 8 8 5

// Output

// Greatest Number: 8

// Input 3

// 4 9 4

// Output

// Greatest Number: 9

// Input 4

// 2 7 9

// Output

// Greatest Number: 9
// Short Exam Version

// Write a C program using nested if-else statements to find the greatest among three numbers. If the greatest number occurs more than once, print it only once. If all three numbers are equal, display an appropriate message.




#include <stdio.h>
int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    //case-1
    if(a==b && b==c){
        printf("All numbers are equal");
    }else{
        //case-2 
        if(a==b && a>c){
            printf("%d",a);
        }else{
            //case-3
            if(a==b && c>a){
                printf("%d",c);
            }else{
                //case-4
                if(a==c && c>b){
                    printf("%d",c);
                }else{
                    //case-5
                    if(a==c && b>c){
                        printf("%d",b);
                    }else{
                        //case-6
                        if(b==c && a>c){
                            printf("%d",a);
                        }else{
                            //case-7
                            if(b==c && c>a){
                                printf("%d",c);
                            }else{
                                //case-8.1
                                if(a>b && a>c){
                                    printf("%d",a);
                                }else{
                                    //case-8.2
                                    if(b>c && b>a){
                                        printf("%d",b);
                                    }else{
                                        //case-8.3
                                        printf("%d",c);
                                    }
                                }


                            }
                        }
                    }
                }
            }
        }
    }
    

    return 0;
}