#include <stdio.h>
#include "LinkList.h"
int main(int agrc, char *agrv[])                 //以下个个测试环节相互独立!!!  一次测试一个，取消注释即可正常运行
{
    lnode_p Head = Init_LinkList_2();
    show_element(Head);
    printf("\n");
//    lnode_p Head = Init_LinkList_1();
//    show_element(Head);
/*******************************************************
    int pos;  
    printf("search element by index, please input pos !\n");
    scanf("%d",&pos);
    lnode_p tp = search_index_linklist(Head,pos);
    if(!tp)
        printf("No this element !\n");
    else
        printf("success to search element %d: %d\n",pos,tp->data);
-------------------------------------------------------*/
/*******************************************************
    int value;
    printf("search element by value, please input value !\n");
    scanf("%d",&value);
    lnode_p tp1 = search_value_linklist(Head,value);
    if(!tp1)
        printf("No element equals to %d!\n",value);
    else
        printf("success to search element's value:%d equals to %d\n",tp1->data,value);
-------------------------------------------------------*/
/******************************************************* 
    int pos,value;  
    printf("insert a data to element n, please input pos and value !\n");
    scanf("%d%d",&pos,&value);
    int res = insert_pos_linklist(Head,pos,value);
    if(!res)
        printf("Faile to insert !\n");
    else
        printf("successe to insert %d ,index:%d\n",value,pos);
    show_element(Head);
-------------------------------------------------------*/
/*******************************************************
    int pos;
    printf("delete element n p, lease input pos !\n");
    scanf("%d",&pos);
    int res = delete_pos_linklist(Head,pos);
    if(!res)
        printf("Faile to delete !\n");
    show_element(Head);
-------------------------------------------------------*/
/********************************************************
    int pos,value;  
    printf("change element n's value, please input pos and value !\n");
    scanf("%d%d",&pos,&value);
    int res = change_element(Head,pos,value);
    if(!res)
        printf("Faile to change element's value !\n");
    else
        printf("succeed to change element's value !\n");
    show_element(Head);
-------------------------------------------------------*/
/********************************************************
    printf("After converting ~\n");
    convert_linklist(Head);
    show_element(Head);
-------------------------------------------------------*/
/*******************************************************
    int value;
    printf("insert a value to an orderd list, please input value !\n");
    scanf("%d",&value);
    printf("After inserting in an odred LinkList ~\n");
    insert_order_linklist(Head,value);
    show_element(Head);
-------------------------------------------------------*/
/*******************************************************/
    printf("After sorting a  LinkList ~\n");
    sort_linklist(Head);
    show_element(Head);
/******************************************************/
   return 0;
}
