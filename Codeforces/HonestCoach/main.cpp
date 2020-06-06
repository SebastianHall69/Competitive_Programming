/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 26, 2020, 1:31 PM
 * Purpose: http://codeforces.com/contest/1360/problem/B
 */

#include <bits/stdc++.h>
using namespace std;


int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, dist = 1001;
        
        cin>>n;
        
        int *arr = new int[n];
        
        for(int j = 0; j < n; ++j) cin>>arr[j];
        sort(arr, arr + n);
        
        for(int j = 0; j < n - 1; ++j) dist = min(dist, arr[j + 1] - arr[j]);
        cout<<dist<<endl;
        
        delete [] arr;
    }

    return 0;
}