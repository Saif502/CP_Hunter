#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head,*newnode,*temp,*prevnode,*nextnode,*currentnode,*tail;
void createlink()
{
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
            tail=temp;
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
    printf("Enter data you want insert at beginning :");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}

void insert_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data you want insert at end :");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;


}

void insert_givenpos()
{
    int pos,i=1;
    printf("Enter position for insert :");
    scanf("%d",&pos);
    // if pos is valid
    if(pos==1)
    {
        insert_beginning();
    }
    else
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        printf("Enter data you want insert :");
        scanf("%d",&newnode->data);
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev=newnode;
    }

}

void insert_after_givenpos()
{
    int pos,i=1;
    printf("Enter position for insert :");
    scanf("%d",&pos);
    // if pos is valid
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    printf("Enter data you want insert :");
    scanf("%d",&newnode->data);
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;

}

void delete_from_beginning()
{
    if(head==0)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        head=head->next;
        head->prev=0;
        free(temp);
    }
}

void delete_from_end()
{
    if(tail==0)
        printf("list is empty");
    else
    {
        temp=tail;
        tail->prev->next=0;
        tail=tail->prev;
        free(temp);

    }
}

void delete_from_pos()
{
    int pos,i=1;
    printf("Enter position for delete : ");
    scanf("%d",&pos);
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}

int main()
{
    createlink();
    display();
    insert_beginning();
    display();
    insert_end();
    display();
    insert_givenpos();
    display();
    insert_after_givenpos();
    display();
    delete_from_beginning();
    display();
    delete_from_end();
    display();
    delete_from_pos();
    display();
    return 0;
}
