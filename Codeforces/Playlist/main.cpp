/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 8, 2020, 2:18 PM
 * Purpose: https://codeforces.com/contest/1140/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    ll n = 0, k = 0;
    priority_queue<ll, vector<ll>, greater<ll> >  q;
    
    cin>>n>>k;
    
    pair<ll, ll> arr[n];
    for(int i = 0; i < n; ++i) {
        ll x = 0, y = 0;
        cin>>arr[i].second>>arr[i].first;
    }
    
    sort(arr, arr + n, greater<pair<int, int> >());
    
    ll ans = 0LL, len = 0LL;
    for(int i = 0; i < n; ++i) {
        q.push(arr[i].second);
        len += arr[i].second;
        if(q.size() > k) {
            len -= q.top();
            q.pop();
        }
        ans = max(ans, arr[i].first * len);
    }
    
    cout<<ans<<endl;
    
    //A Sebastian Production
    return 0;
}