/*

#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n,i,j,p,q,k;
    char x[100],y[100];
    cin>>n;
    cin>>p;
    for(i=0; i<p; i++)
    {
        cin>>x[i];
    }
    cin>>q;
    for(i=0; i<q; i++)
    {
        cin>>y[i];
    }
    strcat(x,y);
    int c=0;
    for(j=0; j<p+q; j++)
    {
        for(int k=j+1; k<p+q; k++)
        {
            if(x[j]==x[k])
            {
                c++;
                continue;
            }

        }

    }
    cout<<(p+q)-c;


}
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,q,xp[100],xq[100],al[1000],i,j,c=0;

    cin>>n;
    cin>>p;

    for(i=0,j=0; i<p; i++,j++)
    {
        cin>>xp[i];
        al[j]=xp[i];
    }
    cin>>q;
    for(i=0,j=p; i<q; i++,j++)
    {
        cin>>xq[i];
        al[j]=xq[i];
    }
    sort(al,al+(p+q));
    for(i=0; i<p+q; i++)
    {
        if(al[i]==al[i+1])
        {
            continue;
        }
        else
        {
            c++;
        }
    }

    if(c==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }


    return 0;
}

