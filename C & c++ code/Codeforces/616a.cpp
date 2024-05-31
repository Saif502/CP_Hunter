#include<bits/stdc++.h>
#include<string.h>

using namespace std;
int main()
{
    char x[1000010],y[1000010];
    int c=0,k=0;
    cin>>x>>y;
    int l=strlen(x);
    for(int i=0; i<l; i++)
    {
        if(x[i]=='0')
        {
            c++;
        }
        else
        {
            break;
        }

    }

    int l1=strlen(y);

    for(int i=0; i<l1; i++)
    {
        if(y[i]=='0')
        {
            k++;
        }
        else
        {
            break;
        }

    }


    if((l-c)>(l1-k))
    {
        cout<<">"<<endl;
    }
    else if((l-c)<(l1-k))
    {
        cout<<"<"<<endl;
    }
    else
    {
        int z=strcmp(x+c,y+k);
        if(z==0)
        {
             cout<<"="<<endl;
        }
        else if(z>0)
        {
             cout<<">"<<endl;
        }
        else{
             cout<<"<"<<endl;
        }
    }

}
