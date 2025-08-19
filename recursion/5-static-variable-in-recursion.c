// Titile:Static Variable in Recursion
// Author:Inam Ul Haq
// Description:
// A static variable is not stored in stack frame. It stored in the data segment of memory. That mean
// only one copy of static variable exits for the whole program.

// Recursion
//     for every function call new stack frame is created. So every thing part of the stack frame will
// create new copy.
// 1- Local variable: new copy created with each function call(stored in stack).
// 2- Static variable: not part of the stack, no new copy will be created and the same single copy share
// by all calls.
// So a static variable will not reset no every recursive call.
// it will keep the current or modified value and use it in the next call.

#include <stdio.h>

int recFun(int x){
    static int staticVar=0;
    if(x>0){
        staticVar++;
        return recFun(x-1)+staticVar;
    }
    return 0;
}

int main(){
    int x;
    printf("Enter value for X: ");
    scanf("%d",&x);
    printf("Result: %d",recFun(x));
    return 0;
}