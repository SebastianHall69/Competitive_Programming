/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 28, 2020, 1:32 PM
 * Purpose: private group https://codeforces.com/group/kbZwsm35Bw/contest/267138/problem/H
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0;
    scanf("%i", &x);
    
    if(x % 4 == 0) {
        if(x % 100 == 0) {
            if(x % 400 == 0) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            printf("YES\n");
        }
    } else {
        printf("NO\n");
    }
    
    return 0;
}