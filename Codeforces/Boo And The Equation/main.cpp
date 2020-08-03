/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 28, 2020, 1:32 PM
 * Purpose: private group https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0, count = 0;
    
    scanf("%i", &x);
    
    if(x == 10) cout<<0<<endl;
    else {
        count += x/25;
        x %= 25;
        count += x/10;
        x %= 10;
        count += x/5;
        x %= 5;
        count += x;

        printf("%i\n", count);
    }
    
    return 0;
}