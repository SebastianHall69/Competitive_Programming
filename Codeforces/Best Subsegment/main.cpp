/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 1, 2020, 2:11 PM
 * Purpose: https://codeforces.com/contest/1117/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, high = 0;
    
    cin>>n;
    
    int arr[n];
    
    for(int i = 0; i < n; ++i) {
        cin>>arr[i];
        high = max(arr[i], high);
    }
    
    int ans = 0, cnt = 0;
    for(int i = 0; i < n; ++i) {
        if(arr[i] == high) {
            ++cnt;
        } else {
            cnt = 0;
        }
        ans = max(ans, cnt);
    }
    
    cout<<ans<<endl;

    //A Sebastian Production
    return 0;
}