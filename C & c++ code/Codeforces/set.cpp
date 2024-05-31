#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<set>
#include<iterator>
#include<vector>
#include<string.h>
using namespace std;


int main()
{

    int i;
    string sk;
    cin>>sk;
    set<char>s;
    set<char>::iterator it;

    for(i=0; i<sk.size(); i++)
    {
        s.insert(sk[i]);
    }
    it=s.find('AB');
    s.erase(it);
    for(it=s.begin();it!=s.end(); ++it)
        cout<<*it;
    cout<<endl;
}
