/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 1, 2020, 12:04 PM
 * Purpose: http://codeforces.com/contest/1176/problem/B
 */

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Declare variables
    int t = 0;
    
    scanf("%i", &t);
    
    for(int i = 0; i < t; ++i) {
        int n = 0;
        ll ans = 0;
        scanf("%i", &n);
       
        vector<ll> v;
        ll x, a = 0, b = 0;
        
        for(int j = 0; j < n; ++j) {
            scanf("%lli", &x);
            if(x % 3 ==2) ++b;
            else if(x % 3 == 1) ++a;
            else ++ans;
        }
        
        ll c = min(a, b);
        ans += c;
        a -= c;
        b -= c;
        ans += a / 3;
        ans += b / 3;
        
        printf("%lli\n", ans);
        
    }
    //A Sebastian Production
    return 0;
}