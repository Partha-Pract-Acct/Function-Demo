/* Write a program to determine whether a student passed or failed. to pass a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user*/


#include<stdio.h>

int main(){
    int marks1, marks2, marks3;

    printf("Enter marks1:");
    scanf("%d", &marks1);
    printf("Enter marks2:");
    scanf("%d", &marks2);
    printf("Enter marks3:");
    scanf("%D", &marks3);

    printf("The marks are %d %d and %d\n", marks1, marks2, marks3);
    
    if(marks1>100 || marks2>100 || marks3>100){
        printf("Invalid input!");
    }
    else if(marks1<33 || marks2<33 || marks3<33){
        printf("You are failed due to less marks in individual subject(s)");
    }
    else if((marks1 + marks2 + marks3)/3<40){
        printf("You are failed due to less percentage");
    }
    else{
        printf("You are passed!");
    }
    return 0;
}