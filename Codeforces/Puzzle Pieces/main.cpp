/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 8, 2020, 11:43 PM
 * Purpose: https://codeforces.com/contest/1345/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        int n = 0, m = 0;

        cin>>n>>m;

        if(n == 1 || m == 1 || (n == 2 && m == 2)) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }

    //A Sebastian Production
    return 0;
}
