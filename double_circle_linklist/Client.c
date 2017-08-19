#include <stdio.h>
#include "dble_cir_linklist.h"

int main()
{
    dblink_p Head = Init_DLinkList_in();
    show_element(Head);
    
#if 0
    int index;
    printf("please input which position you want to find: ");
    scanf("%d",&index);
    dblink_p tp = search_pos_dlinklist(Head,index);
    if(!tp)
    {
        printf("Fail to find Element %d\n",index);
        return -1;
    }
    printf("Succeed to fine Element %d : %d\n",index,tp->data);

#endif

#if 0
    int index,res;
    ElemType value;
    printf("please input which position and value you want to insert: ");
    scanf("%d%d",&index,&value);
    res = insert_pos_dlinklist(Head,index,value);
    if(!res)
    {
        printf("Fail to insert !\n");
        return -1;
    }
    printf("Succeed to insert value: %d at pos: %d\n",value,index);
    show_element(Head);

#endif

#if 1
    int index,res;
    printf("please input which position you want to delete: ");
    scanf("%d",&index);
    res = delete_pos_dlinklist(Head,index);
    if(!res)
    {
        printf("Fail to delete !\n");
        return -1;
    }
    show_element(Head);


#endif
    return 0;
}
