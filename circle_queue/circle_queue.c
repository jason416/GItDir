#include "circle_queue.h"

CirNodePtr InitCirQueue(void)
{
    CirNodePtr H = malloc(sizeof(CirNode));
    if(!H)
    {
        printf("Fail to allocate memory !\n");
        return NULL;
    }
    H->front = H->rear = 0;
    return H;
}

Bool is_empty(CirNodePtr H)
{
    return H->front == H->rear ? 1:0;
}
Bool is_full(CirNodePtr H)
{
    return ((H->rear+1) == H->front) ? 1:0;
}

void show_element(CirNodePtr H)
{
    int pos = H->front,cnt = 1;
    if(is_empty(H))
    {
        printf("Empty queue !\n");
        return ;
    }
    while(pos != H->rear)
        printf("\tElement %d : %d\n",cnt++,H->data[pos++]);
}

void EnCirQueue(CirNodePtr Hd, ELemType val)
{
    CirNodePtr H = Hd;
    if(is_full(H))
    {
        printf("queue is full !\n");
        return ;
    }
    H->data[H->rear] = val;
    H->rear = (H->rear+1) % MAXSIZE;
}
ELemType OutCirQueue(CirNodePtr Hd)
{
    ELemType res;
    CirNodePtr H = Hd;
    if(is_empty(H))
    {
        printf("Empty queue can't be del.. !\n");
        exit(UNDERFLOW);
    }
    res = H->data[H->front];
    H->front = (H->front+1) %MAXSIZE;
    return res;
}
