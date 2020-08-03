/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 14, 2020, 7:43 PM
 * Purpose: https://codeforces.com/contest/1183/problem/A
 */

#include <iostream>
#include <string>
using namespace std;

typedef int longshort;

bool func(longshort x);

int main(int argc, char** argv) {
    //Declare variables
    longshort x = 0;
    
    cin>>x;
    while(!func(x)) { ++x; }
    
    cout<<x<<endl;
    //A Sebastian Production
    return 0;
}

bool func(longshort x) {
    string s = to_string(x);
    longshort sum = 0;
    for(int i = 0; i < s.size(); ++i)
        sum += s[i] - '0';
    return !(sum % 4);
}