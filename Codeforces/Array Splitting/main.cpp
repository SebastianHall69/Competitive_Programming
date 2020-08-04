/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 4, 2020, 1:03 PM
 * Purpose: https://codeforces.com/problemset/problem/1197/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, k = 0, *arr = nullptr, ans = 0;
    vector<int> diff;
    
    cin>>n>>k;
    
    arr = new int[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];
    for(int i = 0; i < n - 1; ++i) diff.push_back(arr[i + 1] - arr[i]);
    
    sort(diff.rbegin(), diff.rend());
    ans = arr[n - 1] - arr[0];
    
    for(int i = 0, lim = k - 1; i < lim; ++i) ans -= diff[i];
    
    cout<<ans<<endl;
    
    delete [] arr;

    //A Sebastian Production
    return 0;
}