/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 4, 2020, 10:21 AM
 * Purpose: http://codeforces.com/contest/1296/problem/B
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
        ll n = 0LL, ans = 0LL, x = 0LL;
        bool flag = true;
        scanf("%lli", &n);
        
        x = n;
        
        while(x >= 10) {
            ans += x / 10;
            x -= x / 10 * 9;
        }
        
        printf("%lli\n", ans + n);
    }
    //A Sebastian Production
    return 0;
}
