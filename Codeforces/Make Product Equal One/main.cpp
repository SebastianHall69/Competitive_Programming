/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 25, 2020, 12:22 PM
 * Purpose: https://codeforces.com/problemset/problem/1206/B
 */

#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    //Declare variables
    ll n = 0LL, x = 0LL, ans = 0LL, count = 0LL;
    bool neg = false;
    
    cin>>n;
    
    for(ll i = 0; i < n; ++i) {
        cin>>x;
        
        if(x < 0LL) {
            ans += -1 - x;
            neg = !neg;
        } else if(x > 0) {
            ans += x - 1;
        } else
            ++count;
    }
    
    if(count > 0) {
        if(neg) {
            ans += 1;
            neg = !neg;
            count -= 1;
        }
        ans += count;
    }
    
    if(neg) ans += 2;
    cout<<ans<<endl;
    
    //A Sebastian Production
    return 0;
}