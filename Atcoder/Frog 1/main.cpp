/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 20, 2020, 3:29 PM
 * Purpose: https://atcoder.jp/contests/dp/tasks/dp_a
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0; 
    
    //Create arrays and read input
    cin>>n;
    int arr[n], dp[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];
    
    //Create dp array
    dp[0] = 0, dp[1] = abs(arr[1] - arr[0]);
    for(int i = 2; i < n; ++i) {
        dp[i] = min(dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + abs(arr[i] - arr[i - 2]));
    }

    //Output answer
    cout<<dp[n - 1]<<endl;
    //A Sebastian Production
    return 0;
}