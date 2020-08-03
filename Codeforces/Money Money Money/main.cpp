/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 28, 2020, 1:32 PM
 * Purpose: private group https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n = 0LL, x = 0LL, y = 0LL;
    scanf("%lli%lli%lli", &n, &x, &y);
    printf("%lli\n", (y * n) - (x * n));
    return 0;
}