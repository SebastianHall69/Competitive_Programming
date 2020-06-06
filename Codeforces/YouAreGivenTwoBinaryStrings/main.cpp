/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 30, 2020, 12:00 PM
 * Purpose: https://codeforces.com/problemset/problem/1202/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t = 0;
    
    cin>>t;
    cin.ignore();
    
    for(int i = 0; i < t; ++i) {
        string x, y;
        getline(cin, x);
        getline(cin, y);
        
        int yPos = 0;
        for(int j = y.size() - 1; j >= 0; --j) {
            if(y[j] == '1') {
                yPos = y.size() - j;
                break;
            }
        }
        
        int xPos = 0;
        for(int j = x.size() - 1; j >= 0; --j) {
            if(x[j] == '1' && x.size() - j >= yPos) {
                xPos = x.size() - j;
                break;
            } 
        }
        cout<<xPos - yPos<<endl;
    }
    //A Sebastian Production
    return 0;
}