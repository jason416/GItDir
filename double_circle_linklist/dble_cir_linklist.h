#ifndef __DBLE_CIR_LINKLIST_H
#define __DBLE_CIR_LINKLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Base.h"

typedef int ElemType;
typedef struct node
{
    ElemType data;
    struct node *next;
    struct node *prior;
}dbnode, *dblink_p;

dblink_p Init_DLinkList(void);
dblink_p Init_DLinkList_in(void);
Bool is_empty(dblink_p Head);
void show_element(dblink_p Head);

dblink_p search_pos_dlinklist(dblink_p, int);
Bool insert_pos_dlinklist(dblink_p, int, ElemType);
Bool delete_pos_dlinklist(dblink_p, int);





#endif
