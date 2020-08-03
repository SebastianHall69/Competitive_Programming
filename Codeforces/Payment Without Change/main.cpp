/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 2:55 PM
 * Purpose: https://codeforces.com/contest/1256/problem/A
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    int q = 0;
    
    scanf("%lli", &q);
    
    for(int i = 0; i < q; ++i) {
        long long a = 0LL, b = a, n = b, s = n;
        
        scanf("%lli%lli%lli%lli", &a, &b, &n, &s);
        
        long long numA = s / n;
        numA = min(numA, a);
        
        if(numA * n + b >= s) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}