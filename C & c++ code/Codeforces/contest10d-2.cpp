#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n;

        cin>>n;

        char a[n][n];
        int i,j,c=0,d=0,x[2],y[2];

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(a[i][j]=='*')
                {


                    x[c]=i;
                    y[d]=j;
                    //cout<<x[c]<<" "<<y[d]<<endl;
                    c++;
                    d++;
                }
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(x[0]==x[1])
                {
                    if(x[0]==n-1)
                    {
                        a[x[0]-1][y[0]]='*';
                        a[x[0]-1][y[1]]='*';
                    }
                    else
                    {
                        a[x[0]+1][y[0]]='*';
                        a[x[0]+1][y[1]]='*';
                    }
                }
                if(y[0]==y[1])
                {
                    if(y[0]==n-1)
                    {
                        a[x[0]][y[0]-1]='*';
                        a[x[1]][y[1]-1]='*';
                    }
                    else
                    {
                        a[x[0]][y[0]+1]='*';
                        a[x[1]][y[1]+1]='*';
                    }
                }
                else
                {
                    a[x[0]][y[1]]='*';
                    a[x[1]][y[0]]='*';
                }
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }


    }

    return 0;

}
