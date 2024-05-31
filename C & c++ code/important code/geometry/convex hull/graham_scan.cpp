//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              1000000007
#define       i_for(n)         for(ll i=0;i<n;i++)
#define       j_for(n)         for(ll j=0;j<n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)

#define       min_heap         priority_queue <ll, vector<ll>, greater<ll> >
#define       Ex()             cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
//order_of_key,find_by_order
#define       MAX              100009
#define       sq(x)            ((x)*(x))

using namespace std;

struct point {
    ll x, y;
} P[MAX], C[MAX], P0;

inline ll TriArea2(point a, point b, point c) {
    return (a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y));
}

inline ll sqDist(point a, point b) {
    return (sq(a.x-b.x) + sq(a.y-b.y));
}

bool comp(point a, point b) {
    if(TriArea2(P0,a,b)==0) // co linear
        return sqDist(P0,a)<sqDist(P0,b) ;
    
    double d1x = a.x-P0.x ; double d1y = a.y-P0.y ;
    double d2x = b.x-P0.x ; double d2y = b.y-P0.y ;
    return (atan2(d1y,d1x)-atan2(d2y,d2x))<0  ;
}

void ConvexHull(int np, int &nc) {

    int i, j, pos = 0;
    for(i=1; i<np; i++){
        if(P[i].x<P[pos].x || (P[i].x==P[pos].x && P[i].y>P[pos].y))    pos = i;
	}

    swap(P[0], P[pos]);
    P0 = P[0];

    sort(&P[1], P+np,comp);
    C[0] = P[0] ;
    C[1] = P[1] ;
    C[2] = P[2];
    
    for(i=j=3; i<np; i++) {
        while(TriArea2(C[j-2], C[j-1], P[i]) <= 0) j--;
        C[j++] = P[i];
    }

    nc = j;
}

int main(void){
    int np,nc ;
    scanf("%lld",&np) ;
    for(int i=0;i<np;i++){
        scanf("%lld %lld",&P[i].x,&P[i].y) ;
    }
    ConvexHull(np,nc) ;
    for(int i=0;i<nc;i++){
        printf("%lld %lld\n",C[i].x,C[i].y) ;
    }

}