/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 27, 2020, 2:35 PM
 * Purpose: https://codeforces.com/contest/1355/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    //Declare variables
    ll t = 0;
    
    cin>>t;
    
    for(ll i = 0; i < t; ++i) {
        ll a = 0, k = 0;
        
        cin>>a>>k;
        
        for(ll j = 1; j < k; ++j) {
            string s = to_string(a);
            char low = '9', high = '0';
            for(int ind = 0; ind < s.size(); ++ind) {
                low = min(low, s[ind]);
                high = max(high, s[ind]);
            }
            a += (high - '0') * (low -'0');
            if(low == '0') break;
        }
        
        cout<<a<<endl;
    }
    
    //A Sebastian Production
    return 0;
}