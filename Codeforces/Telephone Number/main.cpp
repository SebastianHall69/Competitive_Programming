/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 3, 2020, 4:27 PM
 * Purpose: https://codeforces.com/problemset/problem/1167/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
    int main() {
        ios::sync_with_stdio(false);
     
        int t = 0;
     
        cin>>t;
        cin.ignore();
     
        for(int i = 0; i < t; ++i) {
            string s;
            int n = 0;
            bool ans = false;
     
            cin>>n;
            n -= 10;
            cin.ignore();
            getline(cin, s);
            
            for(int j = 0; j < n; ++j) {
                if(s[j] == '8') {
                    ans = true; break;
                }
            }
     
            //Output answer
            cout<<(ans ? "Yes\n" : "No\n"); 
        }
        //A Sebastian Production
        return 0;
    }

