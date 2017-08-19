#ifndef __SQSTACK_H
#define __SQSTACK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Base.h"
#define MAXSIZE 10
typedef int ElemType;
typedef struct node
{
    ElemType data[MAXSIZE];
    int top;
}SqNode, *SqStack;

SqStack InitSqStack(void);
Bool is_empty(SqStack H);
Bool is_full(SqStack H);
void show_element(SqStack H);

void push(SqStack, ElemType);
ElemType pop(SqStack);



#endif
