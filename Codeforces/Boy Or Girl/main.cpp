/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 23, 2020, 12:11 AM
 * Purpose: https://codeforces.com/contest/236/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    string str;
    
    cin>>str;
    sort(str.begin(), str.end());
    str.resize(distance(str.begin(), unique(str.begin(), str.end())));
    cout<<(str.size() & 1 ? "IGNORE HIM!\n" : "CHAT WITH HER!\n");

    //A Sebastian Production
    return 0;
}