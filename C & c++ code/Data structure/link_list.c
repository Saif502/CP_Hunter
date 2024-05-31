#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head,*newnode,*temp,*prevnode,*nextnode,*currentnode;
void createlink()
{
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue (0,1)?");
        scanf ("%d",&choice);

    }
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
     printf("\n");
}
void insert_beginning()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data you want insert");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insert_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data you want insert");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}
void insert_givenpos()
{
    int pos,i=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter position");
    scanf("%d",&pos);
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    printf("Enter data you want insert");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;

}
void delete_from_beginning()
{
    temp=head;
    head=head->next;
    free(temp);
}
void delete_from_end()
{
    temp=head;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;

    }
    if(temp==head)
    {
        head=0;
    }
    else
    {
        prevnode->next=0;
    }
    free(temp);
}
void delete_from_pos()
{
    int pos,i=1;
    printf("Enter position");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}

void reverse()
{
    prevnode=0;
    currentnode=nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
}
int main()
{
    createlink();
    /*display();
    insert_beginning();
    display();
    insert_end();
    display();
    insert_givenpos();
    display();
    delete_from_beginning();
    display();
    delete_from_end();
    display();
    delete_from_pos();
    display();*/
    reverse();
    display();
}
