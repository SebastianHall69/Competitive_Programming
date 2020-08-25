/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 23, 2020, 1:14 PM
 * Purpose: https://codeforces.com/problemset/problem/271/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int year = 0;
    set<char> s;
    
    cin>>year;
    
    do {
        s.clear();
        ++year;
        string str = to_string(year);
        for(int i = 0; i < str.size(); ++i) s.insert(str[i]);
    } while(s.size() < 4);
    
    cout<<year<<endl;

    //A Sebastian Production
    return 0;
}