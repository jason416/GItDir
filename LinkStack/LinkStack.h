#ifndef _LINKSTACK_H
#define _LINKSTACK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Base.h"
#define MAXSIZE 10
 typedef int ElemType;
 typedef struct node
 {
    ElemType data;
    struct node *next;
 }LSnode, *LStack;



LStack InitLStack(void);
Bool is_empty(LStack H);
Bool is_full(LStack H);
void show_element(LStack H);

void push(LStack, ElemType);
ElemType pop(LStack);


#endif

