/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 8, 2020, 5:21 AM
 * Purpose: https://codeforces.com/problemset/problem/1167/D
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, r = 0, b = 0;
    char c;
    
    cin>>n;

    for(int i = 0; i < n; ++i) {
        cin>>c;
        
        if(c == '(') {
            if(r > b) {
                ++b;
                cout<<'1';
            } else {
                ++r;
                cout<<'0';
            }
        } else if(c == ')') {
            if(r > b) {
                --r;
                cout<<'0';
            } else {
                --b;
                cout<<'1';
            }
        } 
    }

    //A Sebastian Production
    return 0;
}