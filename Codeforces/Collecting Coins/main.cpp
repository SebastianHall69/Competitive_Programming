/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 22, 2020, 6:43 AM
 * Purpose: http://codeforces.com/contest/1294/problem/A
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int q = 0;
    
    cin>>q;
    
    for(int i = 0; i < q; ++i) {
        long long a = 0LL, b = 0LL, c = 0LL, n = 0LL;
        
        cin>>a>>b>>c>>n;
        long long high = 0;
        high = max(a, high);
        high = max(b, high);
        high = max(c, high);
        
        n -= abs(high - a);
        n -= abs(high - b);
        n -= abs(high - c);
        
        if(n < 0 || n % 3 != 0) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
        
    }
    //A Sebastian Production
    return 0;
}