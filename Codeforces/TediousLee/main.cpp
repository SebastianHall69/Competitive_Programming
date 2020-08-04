/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 18, 2020, 12:15 AM
 * Purpose: https://codeforces.com/contest/1369/problem/D
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    ll t = 0, mod = 1000000007, size = 2000000;
    ll *dp = new ll[size];

    //Create dp array
    dp[0] = dp[1] = 0;
    dp[2] = 4;
    for(int i = 3; i < size; ++i) {
        dp[i] = (2 * dp[i - 2] + dp[i - 1]) % mod;
        if(i % 3 == 2) dp[i] += 4; 
    }


    cin>>t;

    for(int i = 0; i < t; ++i) {
        int n = 0;
        cin>>n;
        cout<<dp[n - 1]<<endl;
    }

    delete [] dp;

    //A Sebastian Production
    return 0;
}
