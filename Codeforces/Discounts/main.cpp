/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 25, 2020, 2:10 PM
 * Purpose: http://codeforces.com/contest/1132/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, *a = nullptr, m = 0, q = 0;
    ll cost = 0;
    
    cin>>n;
    
    a = new int[n];
    for(int i = 0; i < n; ++i) {
        cin>>a[i];
        cost += a[i];
    }
    sort(a, a + n, greater<int>());
    
    cin>>m;
    
    for(int i = 0; i < m; ++i) {
        cin>>q;
        cout<<cost - a[q - 1]<<endl;
    }
    
    delete [] a;

    //A Sebastian Production
    return 0;
}