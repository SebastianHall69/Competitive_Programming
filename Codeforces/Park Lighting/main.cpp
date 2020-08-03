/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 28, 2020, 8:51 PM
 * Purpose: https://codeforces.com/contest/1358/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, m = 0;
        cin>>n>>m;
        cout<<(n * m + 1) / 2<<"\n";//Area, optimal is 2 lamps per square, ceil because not all will be optimal in case of odd col amount
    }
    //A Sebastian Production
    return 0;
}