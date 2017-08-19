#include "LinkList.h"
#include "Base.h"

lnode_p Init_LinkList_1(void)
{
    lnode_p Head = (lnode_p)malloc(sizeof(lnode));
    if(!Head)
        exit(OVERFLOW);
    Head->next = NULL;
    return Head;
}

lnode_p Init_LinkList_2(void)
{
    lnode_p Head = (lnode_p)malloc(sizeof(lnode));
    if(!Head)
        exit(OVERFLOW);
    Head->next = NULL;
   
    lnode_p ptr,tmp=Head;
    data_t element;
    while(scanf("%d",&element) && element!=-1)
    {
        ptr = malloc(sizeof(lnode));
        if(!ptr)
            exit(OVERFLOW);
       
        ptr->data = element;
        ptr->next = tmp->next;
        tmp->next = ptr;
        tmp = ptr;
    }
    return Head;
}

int is_empty_linklist(lnode_p Head)
{
    return Head->next ? FALSE:TRUE;
}

void show_element(lnode_p Head)
{
    lnode_p L = Head->next;
    int cnt=1;
    if(is_empty_linklist(Head))
    {
        printf("Empty list\n");
        return ;
    }
    while(L)
    {
        printf("element %d： %4d\n",cnt++,L->data);
        L = L->next;
    }
}

lnode_p search_index_linklist(lnode_p Head, int index)
{
    lnode_p L = Head->next;
    int cnt=1;
    while(L && cnt<index)
    {
        L = L->next;
        cnt++;
    }
    if(!L || cnt>index)
        return NULL;
    return L;
}

lnode_p search_value_linklist(lnode_p Head, data_t value)
{
    lnode_p L = Head->next;
    while(L && L->data!=value)
        L = L->next;
    if(!L)
        return NULL;
    return L;
}

Bool insert_pos_linklist(lnode_p Head, int pos, data_t value)
{
    lnode_p L = Head;    //should not be Head->next,for pos may equal 1
    int cnt=0;
    while(L && cnt<pos-1) //locate pos-1
    {
        L = L->next;
        cnt++;
    }
    if (!L || cnt>pos-1) //should be cnt > pos-1 ,L=0->pos too big,cnt>pos-1->pos too small                      
        return FALSE;
    lnode_p p = malloc(sizeof(lnode));
    p->data = value;
    p->next = L->next;
    L->next = p; 
    printf("%d is succeed to insert in pos: %d\n",value,pos);
    return TRUE;
}

Bool delete_pos_linklist(lnode_p Head, int pos)            //delete by index
{
    lnode_p L = Head;  //pos may be 1
    int cnt =0;
    while(L->next && cnt<pos-1)     //locate the  pos-1
    {
        L = L->next;
        cnt++;
    }
    if(!L->next || cnt>pos-1)       //should be L->next,L can't be the last one and the Head!
        return FALSE;
    lnode_p tp = L->next;
    L->next = L->next->next;
    free(tp);
    tp = NULL;
    printf("element: %d is succeed to delete\n",pos);
    return TRUE;
}

Bool change_element(lnode_p Head, int pos, data_t value)  //change index=pos element
{
    lnode_p tp = search_index_linklist(Head, pos);
    if(!tp) 
        return FALSE;
    tp->data = value;
    return TRUE;
}


void convert_linklist(lnode_p Head)                     //convert 
{
    lnode_p tp=Head->next,tq;           //first time tp->the first vailid node
    Head->next = NULL;
    while(tp)                       //tp traverse 1->last
    {
        tq = tp;                    //tq keep tp's old value
        tp = tp->next;
        tq->next= Head->next;       //tq link to the Head node
        Head->next = tq;
    }
}

void insert_order_linklist(lnode_p Head, data_t value)    //insert in an order linklist
{
    lnode_p L =Head,tp;         //if no one equals value,insert this to the last
    if(!L)
    {
        printf("Empty linklist !\n");
        return ;
    }
    while(L->next && L->next->data<value)
        L = L->next;
    tp = malloc(sizeof(lnode));
    if(!tp)
        return ;
    tp->data = value;
    tp->next = L->next;
    L->next = tp;
}

void sort_linklist(lnode_p Head)                       //sort linklist
{
    lnode_p L=Head->next,tp;
    Head->next = NULL;
    if(!L)
        return ;
    while(L)
    {
        tp = L;
        insert_order_linklist(Head, tp->data);
        L = L->next;
        free(tp);
    }
}
