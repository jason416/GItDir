#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "joseph.h"

clink_p Init_JosephCircle(void)
{
    clink_p Head = malloc(sizeof(clnode));
    if(!Head)
    {
        printf("Failed to allocate memory !\n");
        return NULL;
    }
    clink_p t=Head,p;
    Head->data = 1;
    Head->next = Head;
    int num,i;

    printf("Please input a number (>1) ! : ");
    scanf("%d",&num);
    while(num<1)
    {
        printf("Please input a number (>1) ! : ");
        scanf("%d",&num);
        if(num>1)
            break;
    }
    for(i=1; i<num; i++)
    {
        p = malloc(sizeof(clnode));
        if(!Head)
        {
            printf("Failed to allocate memory !\n");
            return NULL;
        }
        p->data = i+1;
        p->next = t->next;
        t->next = p;
        t = p;
    }
    return Head;   
}

void show_element(clink_p Head)
{
    clink_p tp = Head->next;
    printf("%d  ",Head->data);
    while(tp != Head)
    {
        printf("%d  ",tp->data);
        tp = tp->next;
    }
    printf("\n");
}

void Joseph_change(clink_p Head,int m,int n)
{
    clink_p p=Head,tp,q;
    int i;
    for(i=1; i<m; i++)
        p = p->next;
    while(p->next != p)  //not left one
    {
        if(n == 1)       //deal with spical case, p -> the one defore p ,always point to the one you wanna del
        {
            q = p;
            while(q->next != p)
                q = q->next;
            p = q;
        }
        else            //normal case, p -> the one defore one you wanna delete
        {
            for(i=1; i<n-1; i++)
                p = p->next;
        }
        tp = p->next;
        p->next = tp->next;
        printf("deleting element: %d\n",tp->data);
        free(tp);
        tp = NULL;
        p = p->next;   //point the one after one you delete, index 1
    }
    printf("deleting element: %d\n",p->data);
    free(p);
    tp = NULL;
}




















