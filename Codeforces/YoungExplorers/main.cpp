/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 27, 2020, 2:07 PM
 * Purpose: https://codeforces.com/contest/1355/problem/B
 */

#include <bits/stdc++.h>
using namespace std;


int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, extra = 0, ans = 0;
        
        //Create and read in array
        cin>>n;
        int *arr = new int[n];
        for(int j = 0; j < n; ++j) cin>>arr[j];
        
        //Sort array
        sort(arr, arr + n);
        
        
        //Go through explorers
        for(int j = 0; j < n; ++j) {
            ++extra;
            if(extra >= arr[j]) {
                extra -= arr[j];
                ++ans;
            }
        }
        
        //Output answer
        cout<<ans<<endl;
        
        delete [] arr;
    }
    
    //A Sebastian Production
    return 0;
}