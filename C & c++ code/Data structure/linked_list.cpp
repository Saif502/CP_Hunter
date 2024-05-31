#include<stdio.h>
#include<stdlib.h>

int z=0;
struct node
{
	struct node *l_c;
    int d;
    struct node *r_c;
}*root=NULL,*X,*Y;
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
		
		if(key<r->d) r->l_c=p,X=p;
		else r->r_c=p,Y=p;
        
}
int printLeafNodes(struct node *root)
{
    if (root!=NULL)
    {
    	if (!root->l_c && !root->r_c)
	    {
	        return (root->d);
	    }
	    return  printLeafNodes(root->l_c)+printLeafNodes(root->r_c);
    }
    
   return 0;   
    
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		int x;
		scanf("%d",&x);
		insert(x);
	}
	
	printf("%d\n",printLeafNodes(root));
}