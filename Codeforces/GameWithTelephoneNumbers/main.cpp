/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 11, 2020, 2:27 PM
 * Purpose: https://codeforces.com/contest/1155/problem/B
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0, num8 = 0, other = 0;
    char c;
    cin>>n;
    
    for(int i = 0; i < n - 10; ++i) {
        cin>>c;
        if(c == '8') ++num8;
        else ++other;
    }
    
    if(num8 > other) cout<<"YES\n";
    else cout<<"NO\n";

    //A Sebastian Production
    return 0;
}
