/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 3, 2020, 2:34 AM
 * Purpose: https://codeforces.com/contest/1388/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0, arr[3] = {6, 10, 14};
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0;
        
        cin>>n;
        
        if(n < 31) {
            cout<<"NO\n";
        } else if(n == 36 || n == 40  || n == 44) {
            cout<<"YES\n6 10 15 "<<(n - 31)<<endl;
        } else {
            cout<<"YES\n6 10 14 "<<(n - 30)<<"\n";
        }
    }
    
    //A Sebastian Production
    return 0;
}