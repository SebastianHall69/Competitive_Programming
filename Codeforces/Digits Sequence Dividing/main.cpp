/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 15, 2020, 2:11 PM
 * Purpose: https://codeforces.com/contest/1107/problem/A
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
        int n = 0;
        string s;
        
        cin>>n>>s;
        
        if(s.size() > 2) {
            cout<<"YES\n2\n"<<s[0]<<" "<<(s.substr(1, s.size() - 1))<<endl;
        } else {
            if(s[1] > s[0]) {
                cout<<"YES\n2\n"<<s[0]<<" "<<s[1]<<endl;
            } else {
                cout<<"NO\n";
            }
        }
        
    }

    //A Sebastian Production
    return 0;
}