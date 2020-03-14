/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on February 8, 2020, 4:33 PM
 * Purpose: https://codeforces.com/gym/268612/problem/B
 */

#include <stdio.h>
#include <utility>
#include <map>
using namespace std;

typedef long long ll;

int main() {
    ll n = 0LL, m = 0LL, x = 0LL, sum = 0LL;
    map<ll, ll> v;
    
    scanf("%lld%lli", &n, &m);
    
    for(ll i = 1LL; i <= n; ++i) {
        scanf("%lli", &x);
        sum += x;
        v.insert(make_pair(sum, i));
    }
    
    for(ll i = 0LL; i < m; ++i) {
        scanf("%lli", &x);
        
        map<ll, ll>::iterator itr = v.lower_bound(x);
        
        if(itr == v.begin()) {
            printf("1 %lli\n", x);
        } else {
            --itr;
            printf("%lli %lli\n", itr->second + 1, x - itr->first);
        }
    }
    
    return 0;
}