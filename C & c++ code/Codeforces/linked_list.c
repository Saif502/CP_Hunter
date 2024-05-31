#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} ;

struct node *head,*newnode,*temp,*temp1;
void printNode(){
    temp1=head;
    while(temp1!=0){
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }
}
void insertNode()
{

    if(head==0)
    {
        head=temp=newnode;
        //printf("Value of head : %d ",head);
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }

}
int main()
{
    int choice;
    head=0;
    scanf("%d",&choice);
    //freopen("linkedlist.txt","r",stdin);
    while(choice--)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        //printf("Enter the value of New Node:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        insertNode();
    }
    printf("Values in the linked list are: \n");
    printNode();
}