/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 31, 2020, 1:27 PM
 * Purpose: https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/K from that one Egypt group
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    long double x1, y1, x2, y2, r;
    cin>>x1>>y1>>r>>x2>>y2;
    cout<<(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) <= r ? "Yes\n" : "No\n");
    //A Sebastian Production
    return 0;
}