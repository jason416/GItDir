#include <stdio.h>
#include "BinaryTree.h"
int main(int agrc, char **garv)
{
#if 0
    int num;
    printf("please input numbers of btree node: ");
    scanf("%d",&num);
    BTPtr bt = creat_btree(num,1);
#endif

#if 1
    BTPtr bt = creat_btree_keyborad();

#endif
    if(!bt)
        return -1;
    printf("PreOderBTree ~\n\t");
    PreOderBTree(bt);
    printf("\n");
    printf("InOderBTree ~\n\t");
    InOderBTree(bt);
    printf("\n");
    printf("PostOderBTree ~\n\t");
    PostOderBTree(bt);
    printf("\n");

    return 0;
}
