// Title: Head Recurisive Function
// Author: Inam Ul Haq 
// Discription:
// A function is head recursive of the recursive is happens first, and then some work is done after the recursive
// call returns.
#include <stdio.h>

void headFun(int x){
    if(x>0){
        headFun(x-1);
        printf("%d ",x);
    }
}
int main(){
    int x;
    printf("Enter value for function calls: ");
    scanf("%d",&x);
    headFun(x);
    return 0;
}