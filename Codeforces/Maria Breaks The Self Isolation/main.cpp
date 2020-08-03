/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 28, 2020, 9:39 PM
 * Purpose: https://codeforces.com/contest/1358/problem/B
 */

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        //Declare variables
        int n = 0, *arr, oldHags = 1, excessHags = 0;
        
        //Create, read in, and sort the old lady array
        cin>>n;
        arr = new int[n];
        for(int j = 0; j < n; ++j) cin>>arr[j];
        sort(arr, arr + n);
        
        //For each lady send to party if ready or stick into old lady pool until an adequate number arrive to send
        for(int j = 0; j < n; ++j) {
            if(oldHags + excessHags >= arr[j]) {
                oldHags += excessHags + 1;
                excessHags = 0;
            } else {
                ++excessHags;
            }
        }
        
        //Output the answer
        cout<<oldHags<<endl;
        
        //Deallocate data
        delete [] arr;
    }
    //A Sebastian Production
    return 0;
}