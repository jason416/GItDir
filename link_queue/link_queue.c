#include "link_queue.h"

void Init_linkqueue(lqptr L)
{
    L->front = L->rear = malloc(sizeof(LQnode));
    if(!L->front)
    {
        printf("Fail to make a headnode!\n");
        return ;
    }
    L->front->next = NULL;
}

Bool is_empty(lqptr L)
{
    return (L->front == L->rear) ? 1:0;
}

void show_element(lqptr L)
{
    int cnt = 1;
    LQPtr tp = L->front->next;
    if(is_empty(L))
    {
        printf("Empty queue !\n");
        return ;
    }
    while(tp != L->rear->next)
    {
        printf("\telement %d: %d\n",cnt++,tp->data);
        tp = tp->next;
    }
}

void en_queue(lqptr L, ElemType value)
{
    LQPtr tp = malloc(sizeof(LQnode));
    if(!tp)
    {
        printf("Fail to allocate memory!\n");
        return ;
    }
    tp->data = value;
    tp->next = L->rear->next;
    L->rear->next = tp;    
    L->rear = tp;          //update rear
}
ElemType out_queue(lqptr L)
{
    ElemType value;
    LQPtr tp;
    if(is_empty(L))
    {
        printf("empty link_queue can't be quit!\n");
        exit(UNDERFLOW);
    }
    tp = L->front->next;    //front always change nothing
    value = tp->data;
    L->front->next = tp->next;
    free(tp);
    if(!L->front->next)     //the last one!
        L->rear = L->front;
    return value;
}








