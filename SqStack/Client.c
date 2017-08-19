#include <stdio.h>
#include "SqStack.h"

int main()
{
    ElemType e;
    SqStack S = InitSqStack();
    if(!S)
        exit(OVERFLOW);
    while(scanf("%d",&e))
        push(S,e);
    printf("Stack's elements are as follows~\n");
    show_element(S);

    int i,n;
    printf("How many elements you want to pop: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int res = pop(S);
        if(res == FALSE)
            return -1;
        printf("delete element: %d\n",res);
    }
    printf("After poping ~\n");
    show_element(S);

    return 0;
}
