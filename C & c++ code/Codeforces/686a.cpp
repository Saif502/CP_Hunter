#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int T,k;
    cin>>T>>k;
    char s[T];

    long long int x[T], sum=k,c=0,i;

     for( i=0; i<T; i++)
     {
         cin>>s[i]>>x[i];

         if(s[i]=='+')
         {
             sum+=x[i];
         }

         else
         {

             if(sum>=x[i])
             {
                sum-=x[i];

             }
             else{
               c++;

             }
         }


     }
      cout<<sum<<" "<<c<<endl;

      return 0;


}
