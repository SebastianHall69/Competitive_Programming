/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 15, 2020, 2:23 PM
 * Purpose: https://codeforces.com/contest/1107/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    ll t = 0, k = 0, x = 0;
    cin>>t;
    for(int i = 0; i < t; ++i) {
        cin>>k>>x;
        cout<<((x + (k - 1) * 9LL))<<endl;
    }
    //A Sebastian Production
    return 0;
}