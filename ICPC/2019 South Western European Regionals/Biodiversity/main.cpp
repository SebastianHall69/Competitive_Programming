/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 30, 2020, 4:16 PM
 * Purpose: https://codeforces.com/gym/102501/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unordered_map<string, int> um;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    um m;
    string s, output = "NONE";
    
    cin>>n;
    cin.ignore();
    
    //Read in animals, find any that are greater than half
    for(int i = 0; i < n; ++i) {
        getline(cin, s);
        if(++m[s] > n / 2) {
            output = s;
            break;
        }
    }
    
    //Output
    cout<<output<<endl;
    //A Sebastian Production
    return 0;
}