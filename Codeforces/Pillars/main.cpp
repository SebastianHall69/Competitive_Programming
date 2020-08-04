/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 4, 2020, 12:46 PM
 * Purpose: https://codeforces.com/problemset/problem/1197/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, *arr = nullptr, high = 0, ind = -1;
    bool ans = true;
    
    cin>>n;
    
    arr = new int[n];
    for(int i = 0; i < n; ++i) {
        cin>>arr[i];
        if(arr[i] > high) {
            high = arr[i];
            ind = i;
        }
    }
    
    for(int i = ind; i > 0; --i) {
        if(arr[i] <= arr[i - 1]) {
            ans = false;
            break;
        }
    }
    
    if(ans) {
        for(int i = ind; i < n - 1; ++i) {
            if(arr[i] <= arr[i + 1]) {
                ans = false;
                break;
            }
        }
    }
    
    cout<<(ans ? "YES\n" : "NO\n");
    
    delete [] arr;

    //A Sebastian Production
    return 0;
}