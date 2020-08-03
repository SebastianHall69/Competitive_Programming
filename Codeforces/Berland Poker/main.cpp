/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 30, 2020, 9:57 AM
 * Purpose: http://codeforces.com/contest/1359/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n, m, k;
        
        cin>>n>>m>>k;
        
        int high = min(m, n / k);
        m -= high;
        cout<<high - (m + k - 2) / (k - 1)<<endl;
    }
    //A Sebastian Production
    return 0;
}