/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 8, 2020, 10:50 AM
 * Purpose: http://codeforces.com/contest/580/problem/A
 */
 
#include <iostream>
using namespace std;
 
int main(int argc, char** argv) {
    int n = 0;
    int a = 0, b = 0;
    int ans = 0;
    int count = 0;
    
    cin>>n;
    
    for(int i = 0; i < n; ++i) {
        cin>>a;
        if(a >= b) {
            ++count;
        } else {
            count = 1;
        }
        ans = max(ans, count);
        b = a;
    }
    
    cout<<ans<<endl;
    
    return 0;
}