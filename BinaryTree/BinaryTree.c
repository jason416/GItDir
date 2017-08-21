#include <stdio.h>
#include "BinaryTree.h"

BTPtr creat_btree(int n, int i)
{
    BTPtr t = malloc(sizeof(BTNode));
    if(!t)
    {
        printf("Fail to allocate memory !\n");
        return NULL;
    }
    t->data = i;

    if(2*i <= n)  //2*i<=n, node i has lchild, then creat node 2*i
        t->LChild = creat_btree(n,i*2);
    else          //...>n, node i has no lchild
        t->LChild = NULL;
    if(2*i+1 <= n)//2*i+1 <=n, node i has rchild, then creat node 2*i+1
        t->RChild = creat_btree(n,i*2+1);
    else          //...>n, node i has no rchild
        t->RChild = NULL;

    return t;
}

BTPtr creat_btree_keyborad()
{
    BTPtr bt = NULL;
    ElemType val;
    scanf("%c",&val);

//’*‘ -> exit recursion,means not to make a  child(r/l)
//give BTNode's (l/r)child = NULL ,by return NULL
    if(val == '*')  
        return NULL;
    else
    {
        bt = malloc(sizeof(BTNode));
        if(!bt)
        {
            printf("Fail to allocate memory !\n");
            exit(UNDERFLOW);
        }
        bt->data = val;
        bt->LChild = creat_btree_keyborad();
        bt->RChild = creat_btree_keyborad();
    }
    return bt;

}
void PreOderBTree(BTPtr bt)
{
    if(bt == NULL)            //recursion exit time 
        return ;
    printf("%c ",bt->data);   //print root->data  ->
    PreOderBTree(bt->LChild); //lchild->
    PreOderBTree(bt->RChild); //rchild, then exit recursion
}
void InOderBTree(BTPtr bt)
{
    if(bt == NULL)
        return ;
    InOderBTree(bt->LChild);  //lchild->
    printf("%c ",bt->data);   //print root->data ->
    InOderBTree(bt->RChild);  //rchild, exit

}
void PostOderBTree(BTPtr bt)
{
    if(bt == NULL)
        return ;  
    PostOderBTree(bt->LChild); //lchild
    PostOderBTree(bt->RChild); //rchild
    printf("%c ",bt->data);    //print root->data, then exit

}
