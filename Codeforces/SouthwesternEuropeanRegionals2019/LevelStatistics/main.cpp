/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 31, 2020, 11:30 AM
 * Purpose: https://codeforces.com/contest/1334/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, *c, *p;
        bool flag = true;
        
        cin>>n;
        c = new int[n];
        p = new int[n];
        
        //Read in plays and clears, if c > p then bad stats
        for(int j = 0; j < n; ++j) {
            cin>>p[j]>>c[j];
            if(c[j] > p[j]) flag = false;
        }
        
        //Ensure stats are never decreasing
        for(int j = 0; j < n - 1; ++j) {
            if(p[j + 1] < p[j] || c[j + 1] < c[j] || c[j + 1] - c[j] > p[j + 1] - p[j]) {
                flag = false;
                break;
            }
        }
        
        //Output answer
        cout<<(flag ? "YES\n" : "NO\n");
        
        delete [] c;
        delete [] p;
    }
    //A Sebastian Production
    return 0;
}