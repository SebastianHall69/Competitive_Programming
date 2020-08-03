/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 29, 2020, 4:43 PM
 * Purpose: https://codeforces.com/contest/1167/problem/A 
 */

#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    int t = 0;
    string str;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0;
        bool ans = false;
        char c;
        
        cin>>n;
        cin.ignore();
        for(int j = 10; j < n; ++j) {
            cin>>c;
            if(c == '8')  { ans = true; }
        }
        getline(cin, str);
        
        cout<<(ans ? "YES\n" : "NO\n");
    }

    //A Sebastian Production
    return 0;
}