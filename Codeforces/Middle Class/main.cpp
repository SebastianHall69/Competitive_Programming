/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 1, 2020, 11:16 AM
 * Purpose: https://codeforces.com/contest/1334/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, x = 0, *arr = nullptr, ans = 0;
        float total = 0.0F;
        
        cin>>n>>x;
        
        //Read in array of money
        arr = new int[n];
        for(int j = 0; j < n; ++j) cin>>arr[j];
        
        //Sort with wealthiest first
        sort(arr, arr + n, greater<int>());
        
        //Total wealthiest first until average is just over or at wealthy line
        ans = n;
        for(int j = 0; j < n; ++j) {
            total += arr[j];
            if(total / (j + 1) < x) {
                ans = j;
                break;
            }
        }
        
        //Output answer
        cout<<ans<<endl;
        
        //Deallocate memory
        delete [] arr;
    }
    
    //A Sebastian Production
    return 0;
}