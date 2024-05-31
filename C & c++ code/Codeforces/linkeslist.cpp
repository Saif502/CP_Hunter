#include<stdio.h>
#include<stdlib.h>
int i;
struct node
{
	int d;
	struct node *nxt;
	struct node *pre;
}*fst=NULL, *lst=NULL, *temp;
void Creat(int a[],int val)
{
	lst=(struct node*)malloc(sizeof(struct node));
	lst->d=a[0];
	fst=lst;
	lst->nxt=NULL;
	lst->pre=NULL;
	for(i=1; i<val; i++)
	{
		struct node *p=(struct node*)malloc(sizeof(struct node));
		p->d=a[i];
		p->pre=lst;
		p->nxt=NULL;
		lst->nxt=p;
		lst=p;
	}
}
void insertfast(int val)
{
	    node *t=(struct node*)malloc(sizeof(struct node));
	    t->d=val;
		t->nxt=fst;
		t->pre=NULL;
		t->nxt->pre=t;
		fst=t;
}
void remove_first() {
	fst =fst->nxt;
	free(fst->pre);
	fst->pre = NULL;
}
void insrt(int x,int val){
	    node *t=(struct node*)malloc(sizeof(struct node));
		node *p;
		p=fst;
		for(i=0;i<x-1;i++){
			p=p->nxt;
		}
		printf("%d \n",p->d);
		t->d=val;
		t->pre=p->pre;
		t->nxt=p;
		p->pre->nxt=t;
		p->pre=t;
}
void insrt(int x)
{
	    node *p;
		p=fst;
		for(i=0;i<x-1;i++){
			p=p->nxt;
		}
}
node *Reverse(node *nod)
{
     
    if (!nod)
        return NULL;
    temp = nod->nxt;
    nod->nxt = nod->pre;
    nod->pre = temp;
 
    if (!nod->pre)
        return nod;
    //printf("%d \n",nod->pre->d);
    return Reverse(nod->pre);
}

void display(int a[])
{
	node *p;
	p=fst;
	while(p!=0)
	{ 
		printf("%d ",p->d);
		p=p->nxt;
	}
}
int main()
{
	int a[]={1,3,4,4,9};
	Creat(a,5);
	
	//remove_first();
	insrt(3,5);
	//remove_first();
	/*insrt(3,5);
	insrt(0,5);
	insrt(7,5);
	insertlast(20);
	insertfast(20);*/
	display(a);
	fst=Reverse(fst);
	printf("\n");
	
	//display(a);
}