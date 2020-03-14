/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 11, 2020, 3:05 PM
 * Purpose: http://codeforces.com/problemset/problem/1092/B
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    int n = 0, ans = 0;
    
    cin>>n;
    
    int arr[n];
    
    for(int i = 0; i < n; ++i)
        cin>>arr[i];
    
    sort(arr, arr + n);
    
    for(int i = 0; i < n; i += 2)
        ans += arr[i + 1] - arr[i];
    
    cout<<ans<<endl;
    
    return 0;
}