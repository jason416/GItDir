#include "Base.h"
#include "SqStack.h"


SqStack InitSqStack(void)
{
    SqStack H = NULL;
    if((H = malloc(sizeof(SqNode))) == NULL)
    {
        printf("Fail to allocate memory !\n");
        return NULL;
    }
    H->top = 0;
    return H;
}

Bool is_empty(SqStack H)
{
    return H->top == 0 ? TRUE:FALSE;
}
Bool is_full(SqStack H)
{
    return H->top == MAXSIZE ? TRUE:FALSE;
}
void show_element(SqStack H)
{
    int cnt=0;
    if(is_empty(H))
    {
        printf("Empty Stack !\n");
        return ;
    }
    while(cnt < H->top)
    {
        printf("Element %d: %d\n",cnt+1,H->data[cnt]);
        cnt++;
    }
}

void push(SqStack H, ElemType value)
{
    if(is_full(H))
    {
        printf("Stack is full !\n");
        return ;
    }
    H->data[H->top++] = value;
}
ElemType pop(SqStack H)
{
    ElemType value;
    if(is_empty(H))
    {
        printf("Stack is empty !\n");
        return FALSE;
    }
    value = H->data[--H->top];
    return value;
}


