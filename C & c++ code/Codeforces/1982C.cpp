// Problem: C. Boring Day
// Contest: Codeforces - Codeforces Round 955 (Div. 2, with prizes from NEAR!)
// URL: https://codeforces.com/contest/1982/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
using namespace std;

int maxWinningRounds(int n, int l, int r, vector<int>& cards) {
    int maxWins = 0;
    int currentSum = 0;
    int start = 0;

    for (int end = 0; end < n; ++end) {
        currentSum += cards[end];
        
        while (currentSum > r && start <= end) {
            currentSum -= cards[start];
            start++;
        }

        if (currentSum >= l && currentSum <= r) {
            maxWins++;
            currentSum = 0;
            start = end + 1;
        }
    }

    return maxWins;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> cards(n);
        for (int i = 0; i < n; ++i) {
            cin >> cards[i];
        }

        cout << maxWinningRounds(n, l, r, cards) << endl;
    }

    return 0;
}
