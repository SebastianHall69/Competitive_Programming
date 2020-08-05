/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 5, 2020, 2:26 AM
 * Purpose: https://codeforces.com/contest/1374/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, x = 0, y = 0;
        
        cin>>x>>y>>n;
        int ans = n - (n % x) + y;
        if(ans > n) ans -= x;
        cout<<ans<<endl;
    }
    //A Sebastian Production
    return 0;
}