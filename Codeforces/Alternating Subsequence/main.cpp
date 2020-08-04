/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 30, 2020, 12:30 AM
 * Purpose: https://codeforces.com/problemset/problem/1343/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        ll n = 0, x = 0, sum = 0;
        priority_queue<ll> q;
        
        cin>>n;
        
        cin>>x;
        q.push(x);
        
        for(int i = 1; i < n; ++i) {
            cin>>x;
            if(signbit(x) != signbit(q.top())) {
                sum += q.top();
                q = priority_queue<ll>();
            }
            q.push(x);
        }
        
        if(!q.empty()) sum += q.top();
        
        cout<<sum<<endl;
        
    }
    //A Sebastian Production
    return 0;
}