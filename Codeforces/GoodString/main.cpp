/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 29, 2020, 11:17 AM
 * Purpose: https://codeforces.com/problemset/problem/1165/C
 */

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    //Make iostream not suck
    ios::sync_with_stdio;
    cin.tie(0);

    //Declare variables
    int n = 0;
    string s;
    vector<int> ind;
    
    cin>>n;
    cin.ignore();
    getline(cin, s, '\n');
    
    int ans = 0;
    
    for(auto itr = s.begin(); itr < s.end();) {
        auto tmp = itr + 1;
        if(*itr == *tmp) {
            itr = s.erase(itr);
            ++ans;
        } else {
            itr += 2;
        }
    }
    
    if(s.size() & 1) {
        ++ans;
        s.erase(s.end() - 1);
    }
    
    cout<<ans<<endl<<s<<endl;
    

    //A Sebastian Production
    return 0;
}