#include<stdio.h>
int dp[100][100];
int csum[100],key[100],frequency[100],root[100][100];
int optimalcost(int i,int j)
{
    if(i==j)return 0;
    if(j<i)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int cost=csum[j]-csum[i];
    int min=1000000000;
    for(int k=i+1;k<=j;k++)
    {
        int now=optimalcost(i,k-1)+optimalcost(k,j);
        if(now<min)
        {
            min=now;
            root[i][j]=k;
        }
    }
    dp[i][j]=cost+min;
    return dp[i][j];
}
void tree(int i,int j)
{
    if(j<=i)return;
    int cur=root[i][j];
    int left=root[i][root[i][j]-1];
    int right=root[root[i][j]][j];
    printf("root left right %d %d %d\n",cur,left,right);
    tree(i,root[i][j]-1);
    tree(root[i][j],j);
}
int main()
{
    int n,i,j;
    freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=n;i++)scanf("%d",&key[i]);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&frequency[i]);
        csum[i]=csum[i-1]+frequency[i];
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)dp[i][j]=-1;
    }
    int ans=optimalcost(0,n);
    printf("Optimal ans: %d\n",ans);

    printf("Dp table:\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%d ",dp[i][j] );
        }
        printf("\n");
    }
    printf("\n");
    printf("Root table:\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%d ",root[i][j] );
        }
        printf("\n");
    }
    printf("\n");
    printf("Tree will be:\n");
    tree(0,n);
}

