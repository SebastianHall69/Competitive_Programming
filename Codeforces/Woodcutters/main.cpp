/*
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 14, 2020, 4:05 PM
 * Purpose: http://codeforces.com/contest/545/problem/C
 */

#include <iostream>
#include <limits>
using namespace std;

typedef int longshort;
typedef long long ll;

int main() {
    longshort n = 0, ans = 0;
    ll x1 = 0, x2 = 0, h1 = 0, h2 = 0, l = numeric_limits<ll>::min();
    cin>>n;
    
    cin>>x1>>h1;
    for(int i = 0; i < n; ++i) {
        if(i + 1 < n)
            cin>>x2>>h2;
        else {
            x2 = numeric_limits<ll>::max();
            h2 = 0;
        }
        
        if(x1 - h1 > l) {//If it can fall left
            l = x1;
            ++ans;
        } else if (x1 + h1 < x2) {//If it can fall right
            l = x1 + h1;
            ++ans;
        } else {
            l = x1;
        }
        
        x1 = x2;
        h1 = h2;
    }
   
    cout<<ans<<endl;
    //A Sebastian Production
    return 0;
}