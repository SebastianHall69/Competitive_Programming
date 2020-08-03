/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 *  Created on March 13, 2020, 12:26 PM
 * Purpose: http://codeforces.com/contest/1095/problem/A
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    int n = 0;
    string str;
    
    cin>>n;
    cin.ignore();
    getline(cin, str);
    
    int i = 0, diff = 0;
    
    while(i < n) {
        cout<<str[i];
        i += ++diff;
    }
    cout<<endl;
    
    return 0;
}