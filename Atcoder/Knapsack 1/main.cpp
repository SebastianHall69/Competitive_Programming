/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 20, 2020, 7:27 PM
 * Purpose: https://atcoder.jp/contests/dp/tasks/dp_d
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    ll n = 0, w = 0;
    
    cin>>n>>w;
    
    vector<ll> dp(w + 1);
    
    //Read in items weights and values
    for(int i = 0; i < n; ++i) {
        ll weight = 0, value = 0;
        
        cin>>weight>>value;
        
        //For each index where weight would fill bag all the way to empty bag
        for(ll j = w - weight; j >= 0; --j) {
            dp[j + weight] = max(dp[j + weight], dp[j] + value);//Value where item would be added is max of current value or value if item is added
        }
    }
    
    //Output answer
    cout<<dp[w]<<endl;

    //A Sebastian Production
    return 0;
}