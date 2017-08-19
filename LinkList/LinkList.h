#ifndef _LINKLIST_H
#define _LINKLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Bool int
typedef int data_t;
typedef struct node
{
    data_t data;
    struct node *next;
}lnode, *lnode_p;

lnode_p Init_LinkList_1(void);   //insert after head node
lnode_p Init_LinkList_2(void);   //insert one by one,use keyborad inpu,exit :-1
int is_empty_linklist(lnode_p Head);
void show_element(lnode_p L);

lnode_p search_index_linklist(lnode_p Head, int index);    //by index
lnode_p search_value_linklist(lnode_p Head, data_t value); //by value

Bool insert_pos_linklist(lnode_p Head, int pos, data_t value);//insert by index
Bool delete_pos_linklist(lnode_p Head, int pos);            //delete by index
Bool change_element(lnode_p Head, int pos, data_t value);  //change index=pos element

void convert_linklist(lnode_p Head);                        //convert 
void insert_order_linklist(lnode_p Head, data_t value);    //insert in an order linklist

void sort_linklist(lnode_p Head);                          //sort linklist






#endif
