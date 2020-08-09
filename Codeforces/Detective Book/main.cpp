/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 8, 2020, 2:05 PM
 * Purpose: https://codeforces.com/contest/1140/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, high = 0, x = 0, ans = 0;

    cin>>n;
    
    for(int i = 1; i <= n; ++i) {
        cin>>x;
        high = max(x, high);
        if(high <= i) ++ans;
    }
    
    cout<<ans<<endl;

    //A Sebastian Production
    return 0;
}