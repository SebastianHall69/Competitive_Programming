/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 28, 2020, 1:32 PM
 * Purpose: private group https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/G
 */

#include <bits/stdc++.h>
using namespace std;

const long double PI = 3.141592653589793238462643383279502884L;

int main() {
    long long x = 0LL, ans = 0LL, a = 0LL, b = 0LL;
    scanf("%lli", &x);
    
    b = x;
    
    ans += x / 50;
    x %= 50;
    ans += x / 20;
    x %= 20;
    ans += x;
    
    a = ans;
    ans = 0;
    
    ans += b / 20;
    b %= 20;
    ans += b;
    
    cout<<min(a, ans)<<endl;
    
    return 0;
}