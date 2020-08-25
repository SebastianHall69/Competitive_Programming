/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 22, 2020, 3:29 PM
 * Purpose: https://codeforces.com/contest/1101/problem/E
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //Declare variables
    int n = 0, width = 0, height = 0;
    
    cin>>n;
    
    for(int i = 0; i < n; ++i) {
        char c;
        int x, y;
        
        cin>>c>>x>>y;
        
        if(c == '+') {
            width = max(width, min(x, y));
            height = max(height, max(x, y));
        } else {
            if(min(x, y) < width || max(x, y) < height) {
                cout<<"NO\n";
            } else {
                cout<<"YES\n";
            }
        }
    }


    //A Sebastian Production
    return 0;
}