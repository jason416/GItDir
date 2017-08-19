#include <stdio.h>
#include "joseph.h"
int main()
{
    clink_p Head = Init_JosephCircle();
    if(!Head)
        exit(-1);
    show_element(Head);
   int m,n;
    printf("please input m and n ! : ");
    scanf("%d%d",&m,&n);
    Joseph_change(Head,m,n);
    return 0;
}

