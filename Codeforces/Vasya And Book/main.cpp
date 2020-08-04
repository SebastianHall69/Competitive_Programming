/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 28, 2020, 1:51 AM
 * Purpose: https://codeforces.com/contest/1082/problem/A
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
        int n = 0, x = 0, y = 0, d = 0, ans = (int) 2e9;
        
        cin>>n>>x>>y>>d;
        
        //If I can move directly there, always fastest
        if(abs(x - y) % d == 0) {
            ans = abs(x - y) / d;
        }
        //If I can move there from the last page
        if((n - y) % d == 0) {
            int val = ((n - x + d - 1) / d) + ((n - y) / d);
            ans = min(ans, val);
        }
        //If I can move there from the first page
        if((y - 1) % d == 0) {
            int val = ((x + d - 2) / d) + ((y - 1)/ d);
            ans = min(ans, val);
        }
        
        //Output answer
        cout<<(ans != (int) 2e9 ? ans : -1)<<endl;
        
    }

    //A Sebastian Production
    return 0;
}