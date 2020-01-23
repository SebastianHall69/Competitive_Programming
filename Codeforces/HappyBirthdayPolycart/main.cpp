/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 21, 2020, 4:35 PM
 * Purpose: https://codeforces.com/contest/1277/problem/A
 */

#include <iostream>
#include <string>
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0;
    ll x = 0LL;
    
    cin>>n;
    
    for(int i = 0; i < n; ++i) {
        short count = 0;
        cin>>x;
        
        for(int i = 1; i < 10; ++i) {
            string s = to_string(i);
            while(stoll(s) <= x) {
                ++count;
                s.append(to_string(i));
            }
        }
        cout<<count<<endl;
    }
    //A Sebastian Production
    return 0;
}
