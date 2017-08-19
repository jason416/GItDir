#ifndef __LINK_QUEUE_H
#define __LINK_QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Base.h"

typedef int ElemType;
typedef struct node
{
    ElemType data;
    struct node *next;
}LQnode, *LQPtr;

typedef struct
{
    LQPtr front;
    LQPtr rear;
}lqueue, *lqptr;

void Init_linkqueue(lqptr L);
Bool is_empty(lqptr L);
void show_element(lqptr L);

void en_queue(lqptr, ElemType);
ElemType out_queue(lqptr L);
#endif
