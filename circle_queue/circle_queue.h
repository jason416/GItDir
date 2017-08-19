#ifndef __CIRCLE_QUEUE_H
#define __CIRCLE_QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Base.h"
#define MAXSIZE 10
typedef int ELemType;
typedef struct node
{
    ELemType data[MAXSIZE];
    int front;
    int rear;
}CirNode, *CirNodePtr;


CirNodePtr InitCirQueue(void);
Bool is_empty(CirNodePtr);
Bool is_full(CirNodePtr);

void show_element(CirNodePtr);

void EnCirQueue(CirNodePtr, ELemType);
ELemType OutCirQueue(CirNodePtr);








#endif
