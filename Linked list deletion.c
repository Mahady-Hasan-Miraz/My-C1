#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nextN;
}*stnode;

void NodeList(int n);
void NodeDel(int pos);
void DispList();

void NodeList(int n)
{
    struct node *NewNode, *tmp;
    int num, i;

    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == 0)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);

        stnode-> num = num;
        stnode-> nextN = 0; //Links the address field to NULL
        tmp = stnode;

        for(i=2; i<=n; i++)
        {
            NewNode = (struct node *)malloc(sizeof(struct node));

            if(NewNode == 0)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                NewNode->num = num;
                NewNode->nextN = 0;

                tmp->nextN = NewNode;
                tmp = tmp->nextN;
            }
        }
    }
}
void NodeDel(int pos)
{
    int i;
    struct node *Del, *preNode;

    if(stnode == 0)
    {
        printf(" There are no nodes in the List.");
    }
    else
    {
        Del = stnode;
        preNode = stnode;

        for(i=2; i<=pos; i++)
        {
            preNode = Del;
            Del = Del->nextN;

            if(Del == 0)
                break;
        }
        if(Del != 0)
        {
            if(Del == stnode)
            stnode = stnode->nextN;

            preNode->nextN = Del->nextN;
            Del->nextN = 0;
            free(Del);
        }
        else
        {
            printf(" Deletion can not be possible from that position.");
        }
    }
}
void DispList()
{
    struct node *tmp;
    if(stnode == 0)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != 0)
        {
            printf(" %d", tmp->num);
            tmp = tmp->nextN;
        }
    }
}
int main()
{
    int n,num,pos;

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    NodeList(n);

    printf("\n Data entered in the list are : ");
    DispList();

    printf("\n Input the position of node to delete : ");
    scanf("%d", &pos);

    if(pos<1 || pos>n)
    {
     printf("\n Deletion not possible.\n ");
    }
	      if(pos>=1 && pos<=n)
      {
	   NodeDel(pos);
      }
    printf("\n The new list are  : ");
    DispList();
    return 0;
}
