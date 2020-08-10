/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 7, 2020, 6:51 AM
 * Purpose: https://codeforces.com/contest/1362/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        ll a = 0, b = 0, a2 = 0, b2 = 0;

        cin>>a>>b;
        
        while(!(a & 1)) {
            ++ a2;
            a /= 2;
        }
        
        while(!(b & 1)) {
            ++ b2;
            b /= 2;
        }

        if(a == b) {
            cout<<(abs(a2 - b2) + 2) / 3<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    //A Sebastian Production
    return 0;
}