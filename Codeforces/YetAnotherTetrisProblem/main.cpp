/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 2:03 PM
 * Purpose: https://codeforces.com/contest/1324/problem/A
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    
    int t  = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, parity = 0, x = 0;
        cin>>n;
        cin>>parity;
        parity %= 2;
        
        for(int j = 1; j < n; ++j) {
            cin>>x;
            if(x % 2 != parity) {
                parity = -1;
            }
        }
        
        if(parity > -1) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    
    return 0;
}