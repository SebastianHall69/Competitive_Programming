/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 28, 2020, 1:32 PM
 * Purpose: private group https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/D
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, z;
    char a, b;
    
    cin>>x>>a>>y>>b>>z;
    
    switch(a) {
        case '-': x -= y;break;
        case '+': x += y;break;
        case '*': x *= y;break;
    }
    
    switch(b) {
        case '<': cout<< ((x < z) ? "YES\n" : "NO\n");break;
        case '>': cout<< ((x > z) ? "YES\n" : "NO\n");break;
        case '=': cout<< ((x == z) ? "YES\n" : "NO\n");break;
    }
    
    return 0;
}