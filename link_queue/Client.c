#include <stdio.h>
#include "link_queue.h"
int main()
{
    ElemType e;
    lqueue lq;
    Init_linkqueue(&lq);
    show_element(&lq);
    
    printf("Please input value (exit when it's not ElemType)!\n");
    while(scanf("%d",&e))
        en_queue(&lq,e);
    printf("After enter the queue,elements are: \n");
    show_element(&lq);
    
    printf("After quit the queue !\n");
    while(1)
        printf("\tquit element: %d\n",out_queue(&lq));

    return 0;
}

