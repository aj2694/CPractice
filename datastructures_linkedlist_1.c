//Creating a linked list part1
#include<stdio.h>
#include<stdlib.h>
typedef struct node{

    void* dataPtr;
    struct node* nextPtr;
}NODE;
NODE* createNode(void* itemPtr)
{
    NODE* nodePtr;
    nodePtr=(NODE*)malloc(sizeof(NODE));
    nodePtr->dataPtr=itemPtr;
    nodePtr->nextPtr=NULL;
    return nodePtr;
}
void main()
{
    int* data,*nodedata;
    NODE* node;

    data=(int*)malloc(sizeof(int));
    *data=7;
    node=createNode(data);
    nodedata=(int*)node->dataPtr;
    printf("%d",*nodedata);

    data=(int*)malloc(sizeof(int));
    *data=79;
    node->nextPtr=createNode(data);
    nodedata=(int*)node->nextPtr->dataPtr;
    printf("%d",*nodedata);


}
