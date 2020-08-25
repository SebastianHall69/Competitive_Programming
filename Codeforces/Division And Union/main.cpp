/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 22, 2020, 2:34 PM
 * Purpose: https://codeforces.com/contest/1101/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0;
        
        cin>>n;
        
        pair<pair<int, int>, int> arr[n];
        bool ans[n];
        
        for(int j = 0; j < n; ++j) {
            cin>>arr[j].first.first>>arr[j].first.second;
            arr[j].second = j;
        }
        
        sort(arr, arr + n);
        
        //Unite segments into different groups
        bool group = true, diff = false;
        int end = arr[0].first.second;
        ans[arr[0].second] = group;
        
        for(int j = 1; j < n; ++j) {
            if(arr[j].first.first > end) {
                group  = !group;
                diff = true;
            }
            ans[arr[j].second] = group;
            end = max(end, arr[j].first.second);
        }
        
        if(diff) {
            for(int j = 0; j < n; ++j) {
                cout<<(ans[j] ? 1 : 2)<<" ";
            }
            cout<<endl;
        } else {
            cout<<-1<<endl;
        }
    }

    //A Sebastian Production
    return 0;
}