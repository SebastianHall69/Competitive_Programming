/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 22, 2020, 2:00 PM
 * Purpose: https://codeforces.com/contest/1101/problem/A
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
        int l = 0, r = 0, d = 0, x = 0;
        
        cin>>l>>r>>d;
        
        if(d < l || d > r) cout<<d<<endl;
        else {
            cout<<((r / d + 1) * d)<<endl;
        }
    }


    //A Sebastian Production
    return 0;
}