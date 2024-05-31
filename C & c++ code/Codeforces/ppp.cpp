#include<iostream>
#include<math.h>
#include<vector>
#define                 ci(n) cin>>n
#define                 co(n) cout<<n
#define                 new cout<<endl
#define                 ses return 0

#define foR0(num)       for(ll i = 0; i < num; i++)
#define foR1(num)       for(ll i = 1; i <= num; i++)
#define foRev(num)      for(ll i = num - 1; i >= 0; i--)
#define forIn0(arr,num)  for(ll i = 0; i < num; i++) ci(arr[i]);
#define forIn1(arr,num) for(ll i = 1; i <= num; i++) ci(arr[i]);
#define pb              push_back
#define l(s)            s.size()
#define asort(a)        sort(a,a+n)
#define tcas(t)         while(t--)

#define no   cout << "NO" <<endl
#define yes  cout << "YES" <<endl

using namespace std;

typedef long long ll;
int main()
{
    ll tc;
    ci(tc);
    while(tc--)
    {
        ll n;
        ci(n);
        ll x[n],q[n],c1=0,c2=0;
        vector<int>v1,v2;
        foR0(n)
        {
            ci(x[i]);
            c1+=x[i];
        }
        foR0(n)
        {
            ci(q[i]);
            c2+=q[i];
        }


        if(c1!=c2)
        cout<<-1<<endl;
        else
        {
            foR0(n)
            {
   r1:
                if(x[i]>q[i])
                {
                    x[i]--;
                    v1.push_back(i+1);
                    goto r1;
                }
   r2:
                if(x[i]<q[i])
                {
                    x[i]++;
                    v2.push_back(i+1);
                    goto r2;
                }
            }
            cout<<v1.size()<<endl;
            foR0(v1.size())
            {
                cout<<v1[i]<<" ";
                cout<<v2[i]<<endl;
            }
        }
    }

    ses;
}
