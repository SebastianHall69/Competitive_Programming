/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 12, 2020, 6:02 PM
 * Purpose: http://codeforces.com/contest/1324/problem/B
 */

#include <iostream>
#include <map>

using namespace std;

int main(int argc, char** argv) {
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, x = 0;
        bool flag = false;
        map<int, int> m;
        cin>>n;
        
        for(int j = 0; j < n; ++j) {
            cin>>x;
            if(m.count(x)) {
                if((j - m.find(x)->second) > 1) {
                    flag = true;
                }
            } else {
                m[x] = j;
            }
        }
        
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}