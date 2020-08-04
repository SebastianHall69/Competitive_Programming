/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 4, 2020, 2:00 PM
 * Purpose: https://codeforces.com/contest/1345/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios::sync_with_stdio(false);

    //Precalculate array of sizes
    vector<ll> arr;
    ll ind = 0;
    ll val = ind * (ind + 1) + ind * (ind - 1) / 2;

    while(val <= 1000000000LL) {
        arr.push_back(val);
        ++ind;
        val = ind * (ind + 1) + ind * (ind - 1) / 2;
    }

    //Do problem regularly
    int t = 0;

    cin>>t;

    for(ll i = 0; i < t; ++i) {
        ll n = 0, ans = 0;

        cin>>n;
        
        //While there are cards remaining
        while(n > 1) {
           vector<ll>::iterator itr = lower_bound(arr.begin(), arr.end(), n);
            if(*itr != n) --itr;
            n -= *itr;
            ++ans;
        }

        //Output answer
        cout<<ans<<endl;
    }

    //A Sebastian Production
    return 0;
}
