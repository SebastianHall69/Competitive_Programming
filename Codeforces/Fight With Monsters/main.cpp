/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 4, 2020, 11:35 AM
 * Purpose: http://codeforces.com/contest/1296/problem/D
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Declare variables
    ll n = 0LL, a = 0LL, b = 0LL, k = 0LL, x = 0LL, ans = 0LL;
    
    
    scanf("%lli%lli%lli%lli", &n, &a, &b, &k);
    ll v = new ll[n];
    ll ind = 0LL;
    
    for(ll i = 0LL; i < n; ++i) {
        scanf("%lli", &x);
        
        ll cnt = 0;
        while(!(x % (a + b) > 0 && x % (a + b) <= a)) {
            x += b;
            ++cnt;
        }
        if(cnt > 0)
            v[ind++] = cnt;
        else 
            ++ans;
    }
    
    sort(v, v + ind);
    
    for(ll i = 0; i < ind; ++i) {
        if(k - v[i] >= 0) {
            ++ans;
            k -= v[i];
        } else break;
    }
    
    printf("%lli\n", ans);

    //A Sebastian Production
    return 0;
}
