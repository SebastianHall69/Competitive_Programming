/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 18, 2020, 12:15 AM
 * Purpose: https://codeforces.com/contest/1369/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        int n = 0;

        cin>>n;

        cout<<(n % 4 ? "NO\n" : "YES\n");

    }
}
