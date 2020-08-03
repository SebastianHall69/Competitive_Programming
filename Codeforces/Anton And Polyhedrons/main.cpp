/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 12, 2020, 6:02 PM
 * Purpose: https://codeforces.com/contest/785/problem/A
 */

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    int n = 0;
    int ans = 0;
    string str;
    unordered_map<string, int> m;
    m["Tetrahedron"] = 4;
    m["Cube"] = 6;
    m["Octahedron"] = 8;
    m["Dodecahedron"] = 12;
    m["Icosahedron"] = 20;
    
    cin>>n;
    cin.ignore();
    
    for(int i = 0; i < n; ++i) {
        getline(cin, str);
        ans += m[str];
    }
    
    cout<<ans<<endl;
    
    return 0;
}