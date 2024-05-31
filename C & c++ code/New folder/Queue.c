#include<stdio.h>
#include<stdlib.h>

struct Queue {

	struct node
	{
	    int data;
	    struct node *next;
	}*front = NULL, *rear = NULL;
	
	bool isEmpty() {
	   return front == NULL;
	}
	void enqueue(int val)
	{
	    struct node *newNode =(struct node*)malloc(sizeof(struct node));
	    newNode->data = val;
	    newNode->next = NULL;
	    if(front == NULL && rear == NULL)
	        front = rear = newNode;
	    else
	    {
	        rear->next = newNode;
	        rear = newNode;
	    }
	}
	
	void dequeue()
	{
	    struct node *temp;
	    
	    if(front == NULL)
	         printf("Queue is Empty. Unable to perform dequeue\n");
	    else
	    {
	        temp = front;
	        front = front->next;
	        if(front == NULL)
	            rear = NULL;
	       free(temp);
	    }
	
	}
	void printList()
	{
	    struct node *temp = front;
	
	    while(temp)
	    {
	        printf("%d->",temp->data);
	        temp = temp->next;
	    }
	    printf("NULL\n");
	}
	
};


int main()
{
	Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.printList();
    q.dequeue();
    q.printList();
    q.dequeue();
    q.printList();

    return 0;
}