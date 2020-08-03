/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 19, 2020, 3:04 PM
 * Purpose: http://codeforces.com/contest/1307/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    ll t = 0LL;
    
    cin>>t;
    
    for(ll i = 0LL; i < t; ++i) {
        ll numNums = 0LL, dist = 0LL, x;
        set<ll> nums;
        cin>>numNums>>dist;
        
        for(int j = 0; j < numNums; ++j) {
            scanf("%lli", &x);
            nums.insert(x);
        }
        
        auto itr = nums.end();
        --itr;
        ll val = *itr;
        
        if(nums.count(dist)) {
            printf("1\n");
        } else {
            printf("%lli\n", max(2LL, (dist + val - 1) / val));
        }
    }
    return 0;
}