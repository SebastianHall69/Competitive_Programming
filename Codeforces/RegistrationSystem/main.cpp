/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 10, 2020, 6:17 PM
 * Purpose: http://codeforces.com/contest/4/problem/C
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <utility>
#include <map>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0;
    map<string, int> m;
    string s;
    map<string, int>::iterator x;
    
    cin>>n;
    for(int i = 0; i < n; ++i) {
        cin>>s;
        x = m.find(s);
        if(x == m.end()) {
            m.insert(make_pair(s, 1));
            printf("OK\n");
        } else {
            printf("%s%i\n", x->first.c_str(), x->second);
            x->second++;
        }
    }
    //A Sebastian Production
    return 0;
}