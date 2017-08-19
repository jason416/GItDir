#include <stdio.h>
#include "circle_queue.h"
int main(int agrc, char **agrv)
{
    ELemType val;
    CirNodePtr Head = InitCirQueue();
    if(!Head)
        return -1;
    show_element(Head);

    while(scanf("%d",&val))
        EnCirQueue(Head,val);
    printf("After entering queue,elements are : \n");
    show_element(Head);

    printf("Quit of queue ~\n");
    while(1)
       printf("\tQuiting  element: %d\n",OutCirQueue(Head));

    printf("After entering queue,elements are : \n");
    show_element(Head);

    return  0;
}
