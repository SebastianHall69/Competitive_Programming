/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 26, 2020, 1:42 PM
 * Purpose: http://codeforces.com/contest/1360/problem/C
 */

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, odd = 0, even = 0;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int j = 0; j < n; ++j) { 
            cin>>arr[j];
            if(arr[j] % 2 == 1) ++odd;
            else ++even;
        }
        
        if(even % 2 == 0 && odd % 2 == 0) cout<<"YES\n";
        else {
            bool flag = false;
            sort(arr.begin(), arr.end());
            for(int j = 0; j < n - 1; ++j) if(arr[j + 1] - arr[j] == 1) {flag = true; break;}
            cout<<(flag ? "YES\n" : "NO\n");
        }
    }
    //A Sebastian Production
    return 0;
}