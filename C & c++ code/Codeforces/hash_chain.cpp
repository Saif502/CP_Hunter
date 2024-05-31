
/*open hashing/closed addressing
using division method */

#include<stdio.h>
#include<stdlib.h>
#define size 7
struct node
{
    int data;
    struct node *next;
};
struct node *newnode, *head, *temp, *chain[size];
int arr()
{
    int i;
    for(i=0;i<size;i++)
    {
        chain[i]=0;
    }
}
int insert(int value)
{
    newnode= (struct node*)malloc(sizeof(struct node));

    newnode->data=value;
    newnode->next=0;

    int key=value%size;

    if(chain[key]==0)
    {
        chain[key]=newnode;
    }
    else{
            temp = chain[key];
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
int printnode()
{
    int i;
    for(i = 0; i < size; i++)
    {
        temp = chain[i];
        printf("chain[%d]-->",i);
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("0\n");
    }
}
int main()
{
    freopen("openhashing.txt","r",stdin);
    int n,i;
    arr();
    for(i=0;i<size;i++)
    {
        scanf("%d",&n);
        insert(n);
    }

    printnode();

    return 0;
}