/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 30, 2020, 10:10 AM
 * Purpose: http://codeforces.com/contest/1359/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, m = 0, x = 0, y = 0, costB = 0, cost = 0;
        char **arr;
        cin>>n>>m>>x>>y;
        
        //Get optimal cost for double tile
        costB = (2 * x < y) ? 2 * x : y;
        
        arr = new char*[n];
        for(int j = 0; j < n; ++j) {
            arr[j] = new char[m];
            for(int k = 0; k < m; ++k) {
                cin>>arr[j][k];
            }
        }
        
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < m; ++k) {
                if(arr[j][k] == '.') {
                    if(k + 1 < m && arr[j][k + 1] == '.') {
                        cost += costB;
                        ++k;
                    } else {
                        cost += x;
                    }
                }
            }
        }
        
        //Output answer
        cout<<cost<<endl;
        
        for(int j = 0; j < n; ++j) delete [] arr[j];
        delete [] arr;
    }
    
    
    //A Sebastian Production
    return 0;
}