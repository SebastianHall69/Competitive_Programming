/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 3:02 PM
 * Purpose: https://codeforces.com/contest/580/problem/B
 */

#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<pair<ll, ll> > vpll;
typedef int longshort;

int main(int argc, char** argv) {
    ll n = 0LL, d = 0LL, a = 0LL, b = 0LL;
    vpll v;
    
    scanf("%lli%lli", &n, &d);
    
    for(ll i = 0; i < n; ++i) {
        scanf("%lli %lli", &a, &b);
        v.push_back(make_pair(a, b));
    }
    
    sort(v.begin(), v.end());
    
    longshort upper = 0;
    ll sum = 0;
    ll ans = 0;
    for(int i = 0; i < n; ++i) {
        while(upper < n && v[upper].first < v[i].first + d) {
            sum += v[upper].second;
            ++upper;
        }
        ans = max(ans, sum);
        sum -= v[i].second;
    }
    printf("%lli\n", ans);
    return 0;
}