/*
Write a program to take marks of 5 sunjects from the user.
Assume marks are given out of 100 and passing marks is 33.
Now Display whether the candidate passed the examination or failed.
*/

#include<stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5;
    printf("Welcome to a program that tells whether the student is pass or fail.\n");
    printf("Please Enter Subject - 1 - Marks: ");
    scanf("%f",&sub1);
    printf("Please Enter Subject - 2 - Marks: ");
    scanf("%f",&sub2);
    printf("Please Enter Subject - 3 - Marks: ");
    scanf("%f",&sub3);
    printf("Please Enter Subject - 4 - Marks: ");
    scanf("%f",&sub4);
    printf("Please Enter Subject - 5 - Marks: ");
    scanf("%f",&sub5);
    if (sub1<33)
    {
        printf("FAIL");
    }else{
        if(sub2<33){
            printf("FAIL");
        }else{
            if(sub3<33){
                printf("FAIL");
            }else{
                if (sub4<33)
                {
                    printf("FAIL");
                }else{
                    if (sub4<33)
                    {
                        printf("FAIL");
                    }else{
                        if (sub5<33)
                        {
                            printf("FAIL");
                        }else{
                            printf("PASS");
                        }
                        
                    }
                    
                }
                
            }
        }
    }
    
    return 0;
}