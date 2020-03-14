/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 5, 2020, 7:47 PM
 * Purpose: http://codeforces.com/contest/1311/problem/A
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    int n = 0;
    
    cin>>n;
    
    for(int i = 0; i < n; ++i) {
        int a, b;
        
        cin>>a>>b;
        
        if(a == b) cout<<0<<endl;
        else if(b > a) {
            if((a + b) & 1) cout<<1<<endl;
            else cout<<2<<endl;
        } else {
            if((a + b) & 1) cout<<2<<endl;
            else cout<<1<<endl;
        }
    }

    //A Sebastian Production
    return 0;
}