/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 2:05 PM
 * Purpose: https://codeforces.com/contest/750/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    int n = 0, k = 0, ans = 0;
    cin>>n>>k;
    cout<<min(n, static_cast<int>((-5 + sqrt(25 + 40 * (240 - k)) ) / 10))<<endl;
    return 0;
}
