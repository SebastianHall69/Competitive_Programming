/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 28, 2020, 1:32 PM
 * Purpose: private group https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/I
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    
    scanf("%lli%lli%lli", &a, &b, &c);
    
    if((a * b) % c != 0)
        printf("double\n");
    else {
        if((a * b) / c > numeric_limits<int>::max())
            printf("long long\n");
        else
            printf("int\n");
    }
    return 0;
}