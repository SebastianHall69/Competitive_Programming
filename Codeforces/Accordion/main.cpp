/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 22, 2020, 2:03 PM
 * Purpose: https://codeforces.com/contest/1101/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //Declare variables
    string s;
    int start = -1, end = -1, bad = 0, oc = -1, ec = -1;
    
    cin>>s;
    
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '[') {
            start = i;
            break;
        }
    }
    for(int i = s.size() - 1; i >= 0; --i) {
        if(s[i] == ']') {
            end = i;
            break;
        }
    }
    
    if(end > start && start != -1 && end != -1) {
        for(int i = start + 1; i < end; ++i) {
            if(s[i] == ':') {
                oc = i;
                break;
            }
        }
        for(int i = end - 1; i > start; --i) {
            if(s[i] == ':') {
                ec = i;
                break;
            }
        }
        
        if(oc == ec || oc == -1 || ec == -1) {
            cout<<-1<<endl;
        } else {
            int ans = 4;
            for(int i = oc + 1; i < ec; ++i) {
                if(s[i] == '|') ++ans;
            }
            cout<<ans<<endl;
        }
    } else {
        cout<<-1<<endl;
    }

    //A Sebastian Production
    return 0;
}