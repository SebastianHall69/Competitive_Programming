/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 14, 2020, 8:28 PM
 * Purpose: https://codeforces.com/contest/1183/problem/B
 */

#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int q = 0;
    cin>>q;
    
    for(int i = 0; i < q; ++i) {
        int n = 0;
        long long k = 0LL, x = 0LL;
        long long high = numeric_limits<long long>::min(), low = numeric_limits<long long>::max();
        
        cin>>n>>k;
        for(int i = 0; i < n; ++i) {
            cin>>x;
            high = max(high, x);
            low = min(low, x);
        }
        
        long long b = low + k;
        if(high - k > b) b = -1;
        cout<<b<<endl;
    }
    //A Sebastian Production
    return 0;
}