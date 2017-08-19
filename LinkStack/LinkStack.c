#include "LinkStack.h"

LStack InitLStack(void)
{
    LStack H = malloc(sizeof(LSnode));
    if(!H)
    {
        printf("initialize failed!\n");
        return NULL;
    }
    H->next = NULL;
    return H;
}
Bool is_empty(LStack H)
{
    return H->next ? 0:1;

}
Bool is_full(LStack H);
void show_element(LStack H)
{
    int cnt = 1;
    LStack S = H->next;
    if(is_empty(H))
    {
        printf("Empty Stack !\n");
        return ;
    }
    while(S)
    {
        printf("\telement %d: %d\n",cnt++,S->data);
        S = S->next;
    }
}

void push(LStack S, ElemType value)
{
    LStack H = S, tp = malloc(sizeof(LSnode));
    if(!tp)
    {
        printf("Fail to push !\n");
        return ;
    }
    tp->data = value;
    tp->next  = H->next; 
    H->next = tp;
    printf("\tpushing %d to queue!\n",tp->data);
}
ElemType pop(LStack S)
{
    ElemType value;
    LStack H = S,tp;
    if(is_empty(S))
    {
        printf("\nEmpty Stack can't be poped!\n");
        exit(UNDERFLOW);
    }
    value = S->next->data;
    tp = S->next;
    S->next = S->next->next;
    free(tp);
    return value;
}
