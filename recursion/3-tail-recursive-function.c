// Tail recursion:
// A function is tail recursive if the recursive call is the last statement in that function.
// i.e. after the recursive calls, there is no more work to do.

#include <stdio.h>

void tailFun(int x){
    if(x>0){
        printf("%d ",x);
        tailFun(x-1);
    }
}

int main(){
    int x;
    printf("Enter value for function calls: ");
    scanf("%d",&x);
    tailFun(x);

    return 0;
}