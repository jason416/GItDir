#ifndef _BINARYTREE_H
#define _BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Base.h"

//typedef int ElemType;
typedef char ElemType;  //for creating by keyborad

typedef struct node
{
    ElemType data;
    struct node *LChild;
    struct node *RChild;
}BTNode, *BTPtr;

//build a complete BTree
BTPtr creat_btree(int n, int i);
//build a normal tree by keyborad,'*' means don't make a child(r/l), in PreOder ways! root->lchild->rchild
BTPtr creat_btree_keyborad(void);

//visit order: root->lchild->rchild
void PreOderBTree(BTPtr bt);
//visit order: lchild->root->rchild
void InOderBTree(BTPtr bt);
//visit order: lchild->rchild->root
void PostOderBTree(BTPtr bt);




#endif
