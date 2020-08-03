/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 26, 2020, 1:16 PM
 * Purpose: http://codeforces.com/contest/1360/problem/A
 */

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int a, b, val, w, h;
        
        cin>>a>>b;
        w = min(a, b);
        h = max(a, b);
        val = (2 * w > h) ? 2 * w : h;
        cout<<val * val<<endl;
    }
    //A Sebastian Production
    return 0;
}