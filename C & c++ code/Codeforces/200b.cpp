#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float sum=0;

    cin>>n;
    int x[n];
    for(i=0; i<n; i++){
        cin>>x[i];
        sum=sum+x[i];

    }
    cout<<sum/n<<endl;
}
