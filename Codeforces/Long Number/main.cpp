/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 7, 2020, 12:47 PM
 * Purpose: https://codeforces.com/gym/271433/problem/B
 */

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    //Make iostream not suck
    ios::sync_with_stdio;

    //Declare variables
    int n = 0, map[9];
    string s;
    
    
    cin>>n;
    cin.ignore();
    getline(cin, s);
    
    for(int i = 0; i < 9; ++i)
        cin>>map[i];
    
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= map[s[i] - '0' - 1]) {
            cout<<s[i];
        } else {
            cout<<map[s[i] - '0' - 1];
        }
    }
    

    //A Sebastian Production
    return 0;
}