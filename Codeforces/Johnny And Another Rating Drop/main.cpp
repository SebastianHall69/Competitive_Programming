/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 7, 2020, 8:23 AM
 * Purpose: https://codeforces.com/contest/1362/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    //Declare variables
    ll t = 0;

    scanf("%lld", &t);

    for(int i = 0; i < t; ++i) {
        ll n = 0LL, ans = 0LL;

        scanf("%lld", &n);
        
        bitset<64> b(n);
    
        for(ll j = 64; j > 0; --j) {
            if(b[j - 1LL]) {
                ans += pow(2LL, j) - 1LL;
            }
        }

        printf("%lld\n", ans);
    }

    //A Sebastian Production
    return 0;
}
