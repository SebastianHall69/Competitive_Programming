/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 30, 2020, 1:02 PM
 * Purpose: https://codeforces.com/problemset/problem/1202/D
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t = 0, n = 0;
    
    scanf("%i", &t);
    
    while(t--) {
        scanf("%i", &n);
        
        int threes = 2;
        
        while((threes) * (threes + 1) / 2 <= n) {
            ++threes;
        }
        
        n -= (threes - 1) * (threes) / 2;
        
        threes -= 2;
        cout<<"133";
        for(int i = 0; i < n; ++i) cout<<"7";
        for(int i = 0; i < threes; ++i) cout<<"3";
        cout<<"7\n";
    }
    
    //A Sebastian Production
    return 0;
}