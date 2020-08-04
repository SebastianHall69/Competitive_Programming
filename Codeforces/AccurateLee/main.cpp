/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 18, 2020, 12:15 AM
 * Purpose: https://codeforces.com/contest/1369/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        int n = 0, numZero = 0;
        string s;

        cin>>n>>s;

        for(int j = n - 1; j >= 0; --j) {
            if(s[j] == '0') {
                ++numZero;
            } else {
                if(numZero > 1) {
                    s.erase(j + 2, numZero - 1);
                    numZero = 1;
                }
                if(numZero == 1) s.erase(j, 1);
            }
        }
        
        //Output answer
        cout<<s<<endl;
    }

    //A Sebastian Production
    return 0;
}
