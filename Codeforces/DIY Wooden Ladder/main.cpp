/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 4, 2020, 12:11 PM
 * Purpose: https://codeforces.com/problemset/problem/1197/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, k = 0, left = 0, right = 0;
        deque<int> d;
        
        cin>>n;
        d.resize(n);
        for(int j = 0; j < n; ++j) cin>>d[j];
        
        sort(d.begin(), d.end());
        bool flag = true;
        while(flag) {
            flag = false;
            while(left < k + 1) {
                if(!d.size()) break;
                left += d.back();
                d.pop_back();
                flag = true;
            }
            
            while(right < k + 1) {
                if(!d.size()) break;
                right += d.back();
                d.pop_back();
                flag = true;
            }
            
            while(d.size() && k + 1 < left && k + 1 < right) {
                ++k;
                d.pop_front();
                flag = true;
            }
        }
        
        cout<<k<<endl;
    }
    //A Sebastian Production
    return 0;
}