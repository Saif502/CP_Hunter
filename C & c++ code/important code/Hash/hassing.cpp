#include<bits/stdc++.h>

using namespace std;

#define fRead(x)        freopen(x,"r",stdin)
#define fWrite(x)       freopen (x,"w",stdout)

#define LL              long long
#define ULL             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define INF             1e18
#define PI              acos(-1.0)
#define mk              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>


#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define SQR(a)          ((a)*(a))
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))
#define ULL             unsigned long long

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);
inline LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}

const LL MOD = 1e9 + 7;
const ULL hs = 3797;
const int N = 3000006;

char in[N];
ULL F[N];

int main()
{
    F[0] = 1; for(int i = 1; i < N; i++) F[i] = F[i - 1] * hs;
    int t, qq = 1;
    scanf("%d", &t);
    while(t--) {
    	   
        ULL fr, bk; fr = bk = 0;
        scanf("%s", in);
        int n = strlen(in);
        printf("Case %d:\n", qq++);
        for(int i = 0; i < n; i++) {
            fr = fr * hs + in[i];
        }
        for(int i = n - 1; i >= 0; i--) {
            bk = bk * hs + in[i];
        }
        int qr; scanf("%d", &qr);
     

        while(qr--) {
            char type, ch;
            int add;
            scanf(" %c %c %d", &type, &ch, &add);
            while(add--) {
                if(type == 'R') {
                    fr = fr * hs + ch;
                    bk = bk + F[n] * (ch);
                    n++;
                }
                else {
                    bk = bk * hs + ch;
                    fr = fr + F[n] * (ch);
                    n++;
                }
            }
//            cout << s << '\n';
            if(fr == bk) puts("Yes");
            else puts("No");
        }
    }
    return 0;
}z