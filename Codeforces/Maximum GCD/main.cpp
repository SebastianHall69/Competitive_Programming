/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 21, 2020, 2:15 PM
 * Purpose: https://codeforces.com/contest/1370/problem/A
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
        cout<<n / 2<<endl;//N and N / 2 have greatest gcd with n/2 being gcd 
    }
}
