#include <stdio.h>
int fib(int n){
    if(n<=1){
        return n;
    }else{
        return fib(n-2)+fib(n-1);
    }
}
int main(){
    int n;
    printf("Enter value for N: ");
    scanf("%d",&n);
    int result=fib(n);
    printf("the fibonacci series for %d is: %d",n,result);
    return 0;
}