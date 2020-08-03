/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 4, 2020, 10:07 AM
 * Purpose: http://codeforces.com/contest/1296/problem/A
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Declare variables
    int t = 0;
    
    scanf("%i", &t);
    
    for(int i = 0; i < t; ++i) {
        int n = 0, x = 0, odd = 0, even = 0;
        
        scanf("%i", &n);
        
        for(int j = 0; j < n; ++j) {
            scanf("%i", &x);
            if(x & 1) ++odd;
            else ++even;
        }
        
        if((odd & 1) || (odd > 0 && even > 0)) printf("YES\n");
        else printf("NO\n");
        
    }

    //A Sebastian Production
    return 0;
}
