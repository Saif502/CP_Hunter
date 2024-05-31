#include<stdio.h>
#include<stdlib.h>
int graph[1000];
struct Queue {

	struct node
	{
	    int data;
	    struct node *next;
	}*head = NULL, *rear = NULL;
	
	bool isEmpty() {
	   return head == NULL;
	}
	void enqueue(int val)
	{
	    struct node *newNode =(struct node*)malloc(sizeof(struct node));
	    newNode->data = val;
	    newNode->next = NULL;
	    if(head == NULL && rear == NULL)
	        head = rear = newNode;
	    else
	    {
	        rear->next = newNode;
	        rear = newNode;
	    }
	}
	
	int front()
	{
		int d=head->data;
		return d;
	}
	
	void dequeue()
	{
	    struct node *temp;
	    
	    if(head == NULL)
	         printf("Queue is Empty. Unable to perform dequeue\n");
	    else
	    {
	        temp = head;
	        head = head->next;
	        if(head == NULL)
	            rear = NULL;
	       free(temp);
	    }
	
	}
	void printList()
	{
	    struct node *temp = head;
	
	    while(temp)
	    {
	        printf("%d->",temp->data);
	        temp = temp->next;
	    }
	    printf("NULL\n");
	}
	
};

void bfs(int S)
{
	 bool vis[10000]={0};
	 Queue P;
	 P.enqueue(S);
	 vis[S]=1;
	 while(P. isEmpty() == false)
	 {
	 	int x=P.front();
	 	P.dequeue();
	 	for(int child: graph[x])
		 {
		 	//cout<<"par "<<x<<" child "<<child<<endl;
		 	if(vis[child])continue;
		 	vis[x]=1;
		 	P.enqueue(X);
		 }
	
}
int main()
{
	Queue q;
   /* q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.printList();
    q.dequeue();
    q.printList();
    q.dequeue();
    q.printList();*/

    return 0;
}