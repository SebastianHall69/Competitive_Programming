/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 16, 2020, 2:10 PM
 * Purpose: 
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    ll n = 0;
    
    cin>>n;
    
    for(ll i = 0; i < n; ++i) {
        ll num = 6, denom = 1, a = 0, b;
        
        for(ll j = 0; j < 3; ++j) {
            cin>>a>>b;
            num *= a;
            denom *= b;
        }
        
        if(num > 0) {
            ll gcd = __gcd(num, denom);
            num /= gcd;
            denom /= gcd;
            cout<<num<<"/"<<denom<<endl;
            
        } else {
            cout<<"0"<<endl;
        }
    }

    //A Sebastian Production
    return 0;
}