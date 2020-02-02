/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 29, 2020, 6:35 AM
 * Purpose: http://codeforces.com/contest/1295/problem/A
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Declare variables
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i){ 
        int n = 0;
        string ans;
        cin>>n;
        
        if(n % 2 == 1) {
            ans += "7";
            n -= 3;
        }
        
        string t(n / 2, '1');
        ans += t;
        cout<<ans<<endl;
        
    }
    //A Sebastian Production
    return 0;
}