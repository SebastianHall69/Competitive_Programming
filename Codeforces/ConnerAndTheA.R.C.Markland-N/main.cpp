/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 28, 2020, 11:53 AM
 * Purpose: http://codeforces.com/contest/1293/problem/A
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Declare variables
    int q = 0;
    
    //Read in number of queries
    scanf("%i", &q);
    
    for(int i = 0; i < q; ++i) {
        //Declare variables
        ll n = 0LL, s = 0LL, k = 0LL, y = 0LL;;
        set<ll> floors;
        set<ll>::iterator itr;
        
        //Read in variables
        scanf("%lli%lli%lli", &n, &s, &k);
        
        //Min and max floors within 1000 of current floor
        ll low = max(s - 1005LL, 1LL);
        ll high = min(n, s + 1005LL);
        
        //Insert all floors within 1000 or more of x
        for(ll j = low; j <= high; ++j)
            floors.insert(j);
        
        //Remove bad floors
        for(ll j = 0LL; j < k; ++j) {
            scanf("%lli", &y);
            itr = floors.find(y);
            if(itr != floors.end()) floors.erase(itr);
        }
        
        //Find first greater or equal to current floor
        itr = floors.lower_bound(s);
        
        //Output result
        if(itr == floors.begin()) {
            printf("%lli\n", *itr - s);
        } else if(itr == floors.end()) {
            printf("%lli\n", s - *(--itr));
        } else {
            ll x =  *itr - s;
            x = min(x, s - *(--itr));
            printf("%lli\n", x);
        }
        
    }
    //A Sebastian Production
    return 0;
}