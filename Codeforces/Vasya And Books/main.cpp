/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 18, 2020, 8:20 PM
 * Purpose: https://codeforces.com/problemset/problem/1073/B
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    int n = 0, x = 0;
    set<int> s;
    
    cin>>n;
    
    int *arr = new int[n];
    bool *b = new bool[n];
    
    
    for(int i = 0; i < n; ++i) {
        cin>>arr[i];
        b[i] = false;
    }
    
    int j = 0;
    for(int i = 0; i < n; ++i) {
        cin>>x;
        
        if(!b[x - 1]) {
            int ans = 0;
            for(; j < n; ++j) {
                ++ans;
                b[arr[j] - 1] = true;
                if(arr[j] == x) {
                    ++j;
                    break;
                }
            }
            
            cout<<ans<<" ";
        } else {
            cout<<0<<" ";
        }
    }
    
    
    delete [] arr;
    delete [] b;

    //A Sebastian Production
    return 0;
}