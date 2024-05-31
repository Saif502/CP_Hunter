#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,X=0,y=0,z=0,m=999999,N;
    int t1[10000], t2[10000], t3[10000];
    cin>>n;
    int x[n];
    for( i=0; i<n; i++)
    {
        cin>>x[i];

        if(x[i]==1)
        {

           t1[X]=i+1;
            X++;
        }
        if(x[i]==2)
        {

           t2[y]=i+1;
           y++;
        }
        if(x[i]==3)
        {

           t3[z]=i+1;
            z++;
        }

    }
    m=min(X,y);
    N=min(m,z);
    cout<<N<<endl;
    for(X=0,y=0,z=0; X<=N, y<N, z<N; X++, y++, z++)
    {
        cout<<t1[X]<<" "<<t2[y]<<" "<<t3[z]<<endl;
    }

}
