#include "dble_cir_linklist.h"
#include "Base.h"


dblink_p Init_DLinkList(void)
{
    dblink_p Head = NULL;
    if((Head = malloc(sizeof(dbnode))) == NULL)
    {
        printf("Fail to allocate memory !\n");
        exit(OVERFLOW);
    }
    Head->next = Head;
    Head->prior = Head;
    return Head;
}
dblink_p Init_DLinkList_in(void)
{
    dblink_p Head = NULL,tp;
    ElemType num;
    if((Head = malloc(sizeof(dbnode))) == NULL)
    {
        printf("Fail to allocate memory !\n");
        exit(OVERFLOW);
    }
    Head->next = Head;
    Head->prior = Head;

    printf("Please input data to insert in list! (exit:-1 or not int)\n");
    while(scanf("%d",&num) && num!=-1)
    {
        if((tp = malloc(sizeof(dbnode))) == NULL)
        {
            printf("Fail to allocate memory !\n");
            exit(OVERFLOW);
        }
        tp->data = num;
        tp->prior = Head->prior;
        tp->next = Head;
        Head->prior->next = tp;
        Head->prior = tp;
    }
    return Head;
}

Bool is_empty(dblink_p Head)
{
    return Head->next == Head ? TRUE:FALSE;
}
void show_element(dblink_p Head)
{
    dblink_p H = Head;
    int cnt = 0;
    printf("Print elements ~\n");
    if(is_empty(Head))
    {
        printf("Empty dblinklist !\n");
        return ;
    }
    while(H->next != Head)
    {
        H = H->next;
        cnt++;
        printf("Element %d: %d\n",cnt,H->data);
    }
}

dblink_p search_pos_dlinklist(dblink_p Head, int pos)
{
    dblink_p H = Head->next;
    int cnt=1;
    while(H!=Head && cnt<pos)
    {
        H = H->next;
        cnt++;
    }
    if(H==Head || cnt>pos)    //H==head,empty or pos too big. cnt>pos,pos too small
        return NULL;
    return H;
}

Bool insert_pos_dlinklist(dblink_p Head, int pos, ElemType value)
{
    dblink_p tp,t;    
    tp =search_pos_dlinklist(Head,pos);     //1...pos,but pos+1 is also valide
    if(!tp)
    {
        tp = search_pos_dlinklist(Head,pos-1);  //find pos-1
        if(!tp)                            //pos and pos-1 both can't find
            return FALSE;
        else                               //pos-1 is the last,insert to the tail
        {
            if((t = malloc(sizeof(dbnode))) == NULL)
            {
                printf("Fail to allocate memory !\n");
                exit(OVERFLOW);
            }
            t->data = value;
            t->prior = Head->prior;
            t->next = Head;
            Head->prior = t;
            Head->prior->next = t;
            return TRUE;
        }
    }
    else                                   //pos is int the middle pos
    {
        if((t = malloc(sizeof(dbnode))) == NULL)
        {
            printf("Fail to allocate memory !\n");
            exit(OVERFLOW);
        }
        t->data = value;
        t->next = tp;
        t->prior = tp->prior;
        tp->prior->next = t;
        tp->prior = t;     
        return TRUE;
    }

}
Bool delete_pos_dlinklist(dblink_p Head, int pos)
{
    dblink_p tp;    
    tp =search_pos_dlinklist(Head,pos);     //1...pos
    if(!tp)
        return FALSE;
    tp->prior->next = tp->next;
    tp->next->prior = tp->prior;
    printf("Succeedto delete element: %d\n",tp->data);
    free(tp);
    tp = NULL;
    return TRUE;
}
