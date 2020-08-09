/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 8, 2020, 2:09 PM
 * Purpose: https://codeforces.com/contest/1140/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, l = 0, r = 0;
        string str;
        
        cin>>n>>str;
        
        for(int j = 0; j < n; ++j) {
            if(str[j] == '<') ++l;
            else break;
        }
        for(int j = n - 1; j >= 0; --j) {
            if(str[j] == '>') ++r;
            else break;
        }
        
        cout<<min(l, r)<<endl;
    }

    //A Sebastian Production
    return 0;
}