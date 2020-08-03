/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 30, 2020, 5:32 PM
 * Purpose: https://codeforces.com/gym/102501/problem/F
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    
    ll t = 0;
    ll total = 0;
    
    cin>>t;
    
    //For each polygon
    for(ll i = 0; i < t; ++i) {
        ll n = 0, *x, *y, area = 0;
        cin>>n;
        
        x = new ll[n];
        y = new ll[n];
        
        //Read in points
        for(ll j = 0; j < n; ++j) cin>>x[j]>>y[j];
        
        //Calculate area for each consecutive point
        for(ll j = 0; j < n - 1; ++j) {
           area += (x[j + 1] - x[j]) * (y[j] + y[j + 1]);
        }
        area += (x[0] - x[n - 1]) * (y[0] + y[n - 1]);//Last point to first point
        
        total += abs(area);
        
        delete [] x;
        delete [] y;
    }
    
    //Output answer
    cout<<total / 2<<endl;
    
    //A Sebastian Production
    return 0;
}