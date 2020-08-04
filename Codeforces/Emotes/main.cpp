/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 1, 2020, 2:18 PM
 * Purpose: https://codeforces.com/contest/1117/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    ll n = 0, m = 0, k = 0;
    
    cin>>n>>m>>k;
    
    ll arr[n];
    
    for(ll i = 0; i < n; ++i) cin>>arr[i];
    
    sort(arr, arr + n, greater<ll>());
    
    ll val = m / (k + 1);
    
    ll ans = val * arr[1];
    
    m -= val;
    
    ans += m * arr[0];

    cout<<ans<<endl;

    //A Sebastian Production
    return 0;
}