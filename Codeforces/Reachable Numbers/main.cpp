/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 7, 2020, 12:15 PM
 * Purpose: https://codeforces.com/problemset/problem/1157/A
 */

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <set>

using namespace std;

int main(int argc, char** argv) {
    //Make iostream not suck
    ios::sync_with_stdio;

    //Declare variables
    int x = 0, tmp = 0;
    set<int> s;
    
    cin>>x;
    
    while(s.count(x) == 0) {
        s.insert(x);
        ++x;
        
        while(x % 10 == 0) {
            x /= 10;
        }
    }
    
    cout<<s.size()<<endl;
    
    //A Sebastian Production
    return 0;
}

