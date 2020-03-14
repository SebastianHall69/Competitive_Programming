/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 14, 2020, 9:12 PM
 * Purpose: https://codeforces.com/contest/1183/problem/C
 */

#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //Declare variables
    int q = 0;
    ll n = 0LL, k = 0LL, a = 0LL, b = 0LL;
    
    cin>>q;
    
    for(int i = 0; i < q; ++i) {
        cin>>k>>n>>a>>b;
        k -= 1;
        
        if(k / b < n)//If it cannot be completed
            cout<<"-1\n";
        else
            cout<<min((k - n * b) / (a - b), n)<<"\n";
    }
    //A Sebastian Production
    return 0;
}