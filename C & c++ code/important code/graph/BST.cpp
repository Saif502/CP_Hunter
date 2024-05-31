#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *l_c;
    int d;
    struct node *r_c;
}*root=NULL;
void insert(int key)
{
	struct node *t=root,*r,*p;
	if(root==NULL)
	{
		p=(struct node*)malloc(sizeof(struct node));
		p->d=key;
		p->l_c=p->r_c=NULL;
		root=p;
		return;
	}
	while(t!=NULL)
	{
		r=t;
		if(key<t->d)t=t->l_c;
		else if(key>t->d)t=t->r_c;
		else return;
	}
	    p=(struct node*)malloc(sizeof(struct node));
		p->d=key;
		p->l_c=p->r_c=NULL;
		
		if(key<r->d) r->l_c=p;
		else r->r_c=p;
}
void inorder(struct node *p)
{
	if(p)
	{
		inorder(p->l_c);
		printf("%d ",p->d);
		inorder(p->r_c);
	}
}
struct node* BST_S(int key)
{
	struct node *t=root;
	while(t!=NULL)
	{
		if(key<t->d)t=t->l_c;
		else if(key>t->d)t=t->r_c;
		else return t;
	}
}
int main()
{
	struct node* temp;
	insert(10);
	insert(5);
	insert(20);
	insert(8);
	insert(30);
	inorder(root);
    printf("\n");
	temp=BST_S(0);
	if(temp!=NULL)printf(" found %d ",temp->d);
	else printf("Not found");
}