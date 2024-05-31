#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    if(N==1){
        int x,y,p;
        scanf("%d%d",&x,&y);
        p=x*y;
        printf("%d\n",p);
    }
    if(N==2){
        int a,b,c,d;
        scanf("%d%d%d",&a,&b,&c);
        d=a*b*c;
        printf("%d\n",d);
    }
    if(N==3){
        int f;
        scanf("%d",&f);
        printf("%d\n",f);
    }
}
