#include <bits/stdc++.h>
using namespace std;
 
// To find sum of all subsequences
int findSum(int arr[], int n)
{
    // Sum all array elements
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    // Result is sum * 2^(n-1)
    return sum * (1 << (n - 1));
}
 
// Driver program to test findSum()
int main()
{
    int arr[] = { 1, 2,3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findSum(arr, n);
    return 0;
}
