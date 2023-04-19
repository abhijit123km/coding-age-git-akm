// question :-26
//Write a C program to calculate the total salary of an employee based on basic
salary, allowances, and deductions.

#include <stdio.h>

int main() {
    float basicsalary, allowances, deductions, totalsalary;
    
   
    printf("Enter basic salary: ");
    scanf("%f", &basicsalary);
    
    printf("Enter allowances: ");
    scanf("%f", &allowances);
    
    printf("Enter deductions: ");
    scanf("%f", &deductions);
    
   
    totalsalary = basicsalary + allowances - deductions;
    
   
    printf("Total Salary: %.2f\n", totalsalary);
    
    return 0;
}

