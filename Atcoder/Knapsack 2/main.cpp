/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 21, 2020, 4:50 PM
 * Purpose: https://atcoder.jp/contests/dp/tasks/dp_e
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    ll n = 0LL,  w = 0LL, total = 0LL;
    
    cin>>n>>w;
    
    //Read in values and weights, sum values for size of dp array
    vector<ll> weight(n), value(n);
    for(int i = 0; i < n; ++i) {
        cin>>weight[i]>>value[i];
        total += value[i];
    }
    
    vector<ll> dp(total + 1, 1e18 + 5);//Create dp array for each value, filled with max weight
    dp[0] = 0;//No value has no weight
    
    //For each item
    for(int i = 0; i < n; ++i) {
        //For each value in range of total to 0
        for(int j = total - value[i]; j >= 0; --j) {
            //The weight at current (val + new val) is minimized between itself and the weight of current val + weight of new val
            dp[j + value[i]] = min(dp[j + value[i]], dp[j] + weight[i]);
        }
    }
    
    //Get highest value with weight in range
    int ind = 0;
    for(int i = 0; i <= total; ++i) {
        if(dp[i] <= w) {
            ind = i;
        }
    }

    cout<<ind<<endl;
    //A Sebastian Production
    return 0;
}