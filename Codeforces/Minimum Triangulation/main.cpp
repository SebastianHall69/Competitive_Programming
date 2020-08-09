/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 8, 2020, 2:51 PM
 * Purpose: https://codeforces.com/contest/1140/problem/D

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    ll n = 0, ans = 0;
    
    cin>>n;
    
    for(int i = 3; i <= n; ++i) {
        ans += i * (i - 1);
    }
    
    cout<<ans<<endl;

    //A Sebastian Production
    return 0;
}