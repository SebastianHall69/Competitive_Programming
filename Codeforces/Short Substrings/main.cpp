/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 22, 2020, 11:45 PM
 * Purpose: https://codeforces.com/contest/1367/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    //Declare variables
    int t = 0;

    cin>>t;
    cin.ignore();

    for(int i = 0; i < t; ++i) {
        string s;
        getline(cin, s);
        cout<<s[0];
        for(int j = 1; j < s.size(); j += 2) cout<<s[j];
        cout<<endl;
    }


    //A Sebastian Production
    return 0;
}
