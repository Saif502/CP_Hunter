#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, x[6];
    cin>>a>>b>>c;
    x[0]=a+b*c;
    x[1]=a*(b+c);
    x[2]=a*b*c;
    x[3]=(a+b)*c;
    x[4]=a*b+c;
    x[5]=a+b+c;

    sort(x,x+6);
    cout<<x[5]<<endl;

}


/*
    if(x>y){
        if(x>z){
            if(x>q){
                cout<<x<<endl;
            }
            else{
                cout<<q<<endl;
            }
        }
        else{
            if(z>q){
                cout<<z<<endl;
            }
            else{
                cout<<q<<endl;
            }
        }
    }
    else{
        if(y>z){
            if(y>q){
                cout<<y<<endl;
            }
            else{
                cout<<q<<endl;
            }

        }
        else{
            if(z>q){
                cout<<z<<endl;
            }
            else{
                cout<<q<<endl;
            }
        }
    }
    /
