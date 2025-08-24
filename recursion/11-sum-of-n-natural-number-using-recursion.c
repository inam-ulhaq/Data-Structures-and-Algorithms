// Title: Sum of N Natural Numbers Using Recursion
// Author: Inam Ul Haq 
// Description:
// if we want to sum first 5 natural numbers then we can do it like this:
// Sum(5)= 1 + 2 + 3 + 4 + 5

// in same we if we want to sum first N natural numbers then we can do it like this:
// sum(n) = 1 + 2 + 3 ....+ (n-1) + n
// sum(n) = sum(n-1) + n

// so the recursive formula become
// sum(n) = 0              ,n==0
// sum(n) = sum(n-1) + n   ,n>0

// now if we convert this to code it will look like:

#include <stdio.h>

int sum(int n){
    if(n > 0){
        return sum(n - 1)+n;
    }else{
        return 0;
    }
}
int main(){
    int n;
    printf("Enter the value of (n): ");
    scanf("%d",&n);
    int _sum=sum(n);
    printf("Sum of %d natural numbers: %d",n,_sum);
    return 0;
}