#ifndef _JOSEPH_H
#define _JOSEPH_H

typedef struct node
{
    int data;
    struct node *next;
}clnode, *clink_p;

clink_p Init_JosephCircle(void);
void show_element(clink_p Head);
void Joseph_change(clink_p Head,int m,int n);

#endif

