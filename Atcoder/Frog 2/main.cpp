/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 20, 2020, 4:10 PM
 * Purpose: https://atcoder.jp/contests/dp/tasks/dp_b
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, k = 0;
    
    //Read input
    cin>>n>>k;
    int arr[n], dp[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];
    
    //Create dp array
    dp[0] = 0;
    for(int i = 1; i < n; ++i) {
        //Take min of all possible answers from [i - 1, i - k]
        dp[i] = numeric_limits<int>::max();
        for(int j = 1; j <= k && j <= i; ++j) {
            dp[i] = min(dp[i], dp[i - j] + abs(arr[i] - arr[i - j]));
        }
    }
    
    //Output answer
    cout<<dp[n - 1]<<endl;

    //A Sebastian Production
    return 0;
}