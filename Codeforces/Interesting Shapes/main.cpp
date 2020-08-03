/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 28, 2020, 1:32 PM
 * Purpose: private group https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/E
 */

#include <bits/stdc++.h>
using namespace std;

const long double PI = 3.141592653589793238462643383279502884L;

int main() {
    long double r = 0L, n = 0L;
    scanf("%Lf%Lf", &n, &r);
    printf("%.6Lf\n", PI * r * r - n * n);
    return 0;
}