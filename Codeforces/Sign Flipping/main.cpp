/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 9, 2020, 1:41 AM
 * Purpose: https://codeforces.com/contest/1375/problem/A
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
        int n = 0, x = 0;
        
        //Create and read in number array
        cin>>n;
        
        for(int j = 0; j < n; ++j) {
            cin>>x;
            if(j & 1) {
                if(x < 0) x *= -1;
            } else {
                if(x > 0) x *= -1;
            }
            cout<<x<<" ";
        }
        cout<<endl;   
    }
    //A Sebastian Production
    return 0;
}