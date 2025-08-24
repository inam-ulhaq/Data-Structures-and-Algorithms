// Title: Factorial Using Recursion
// Author: Inam Ul Haq 
// Description:  
// The factorial of a number n, written as n!, is defined as the product of all
// positive integers from 1 up to n.
//
// Example:
//     5! = 1 * 2 * 3 * 4 * 5 = 120
//
// In general:
//     n! = 1 * 2 * 3 * ... * (n-1) * n
//
// Recursive definition:
//     n! = 1          , if n == 0
//     n! = n * (n-1)! , if n > 0
//
// This recursive formula can be directly translated into code.

#include <stdio.h>

int factorial(int n){
    if(n==0){
        return 1;
    }else {
        return factorial(n - 1) * n;
    }
}
int main(){
    int n;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    int result= factorial(n);
    printf("%d! = %d ",n,result);
    return 0;
}