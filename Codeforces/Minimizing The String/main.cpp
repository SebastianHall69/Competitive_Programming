/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 23, 2020, 12:39 PM
 * Purpose: http://codeforces.com/contest/1076/problem/A
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    int n = 0;
    string s;
    bool flag = true;
    
    cin>>n;
    cin.ignore();
    
    getline(cin, s);
    
    for(int i = 0; i < n - 1; ++i) {
        if(s[i] > s[i + 1])  {
            s.erase(i,1);
            i = n;
            flag = false;
        }
    }
    if(flag) s.erase(n - 1, 1);
    
    cout<<s<<endl;
    
    return 0;
}