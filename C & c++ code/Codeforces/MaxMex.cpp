#include <bits/stdc++.h>
using namespace std;

void maxMEX(int arr[], int N, int K)
{
	set<int> s;
	int sum=0;
	for (int i = 1; i <= N + 1; i++)
		s.insert(i);
	for (int i = 0; i < K; i++)
		s.erase(arr[i]);
	int mex = *(s.begin());
	for (int i = K; i < N; i++) {
		s.erase(arr[i]);
		s.insert(arr[i - K]);
		int firstElem = *(s.begin());
		mex = max(mex, firstElem);
		sum+=mex;
	}
	cout << sum << ' ';
}

// Driver Code
int main()
{
	int n=4;
	//cin>>n;
	int arr[n] = { 3, 2, 1, 4 };
	int K = 2;
	maxMEX(arr, n, K);
	return 0;
}
