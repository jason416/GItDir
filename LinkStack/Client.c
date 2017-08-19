#include <stdio.h>
#include "LinkStack.h"
int main()
{
    int value;
    LStack S = InitLStack();
    if(!S)
        return -1;
    show_element(S);
    printf("pushing time! please input value~\n");
    while(scanf("%d",&value))
        push(S,value);
    printf("After Pushing ~\n");
    show_element(S);
    
    printf("Poping elements:");
    while(1)
       printf(" %d", pop(S));

    return 0;
}
