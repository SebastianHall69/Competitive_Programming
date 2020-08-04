/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 18, 2020, 2:09 PM
 * Purpose: https://codeforces.com/problemset/problem/1155/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0, l = 0, r = 0;
    string s;

    cin>>n>>s;

    for(int i = 0; i < n - 1; ++i) {
        if(s[i] > s[i + 1]) {
            l = i + 1;
            r = i + 2;
            break;
        }
    }

    if(r > l) cout<<"YES\n"<<l<<" "<<r<<"\n";

    //A Sebastian Production
    return 0;
}
