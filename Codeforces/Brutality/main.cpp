/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 15, 2020, 2:30 PM
 * Purpose: https://codeforces.com/contest/1107/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    ll n = 0, k = 0, ans = 0;
    char prev, cur;
    vector<ll> v;
    
    cin>>n>>k;
    
    ll arr[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];
    
    cin>>prev;
    v.push_back(arr[0]);
    
    for(int i = 1; i < n; ++i) {
        cin>>cur;
        if(prev == cur) {
            v.push_back(arr[i]);
        } else {
            if(v.size() > k) {
                partial_sort(v.begin(), v.begin() + k, v.end(), greater<ll>());
                ans += accumulate(v.begin(), v.begin() + k, 0LL);
            } else {
                ans += accumulate(v.begin(), v.end(), 0LL);
            }
            v.clear();
            v.push_back(arr[i]);
        }
        prev = cur;
    }
    
    if(v.size()) {
        if(v.size() > k) {
            partial_sort(v.begin(), v.begin() + k, v.end(), greater<ll>());
            ans += accumulate(v.begin(), v.begin() + k, 0LL);
        } else {
            ans += accumulate(v.begin(), v.end(), 0LL);
        }
    }
    cout<<ans<<endl;
    //A Sebastian Production
    return 0;
}