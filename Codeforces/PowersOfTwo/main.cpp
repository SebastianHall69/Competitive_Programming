/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 1:53 PM
 * Purpose: https://codeforces.com/contest/1095/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    ll n = 0LL, k = 0LL, *arr, cur = 0LL;
    
    cin>>n>>k;
    
    if(k > n) {
        cout<<"NO\n";
        return 0;
    } else if(k == n) {
        cout<<"YES\n";
        for(int i = 0; i < n; ++i) cout<<1<<" ";
        cout<<endl;
        return 0;
    }
    
    arr = new ll[k];
    for(ll i = 0LL; i < k; ++i)
        arr[i] = 1;
    
    ll num = k;
    bool flag = false;
    
    for(ll i = 0LL; i < k; ++i) {
        flag = false;
        while(num + arr[i] <= n) {
            num += arr[i];
            arr[i] *= 2;
            flag = true;
        }
        if(!flag) break;
    }
    
    if(num == n) {
        cout<<"YES\n";
        for(ll i = 0LL;  i < k; ++i) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    } else {
        cout<<"NO\n";
    }
    
    
    delete [] arr;
    
	return 0;
}