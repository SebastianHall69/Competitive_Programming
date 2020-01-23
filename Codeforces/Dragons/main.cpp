/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 16, 2020, 11:33 PM
 * Purpose: http://codeforces.com/contest/230/problem/A
 */

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0, s = 0, a = 0, b = 0;
    vector<pair<int, int>> v;
    
    cin>>s>>n;
    
    for(int i = 0; i < n; ++i) {
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    
    sort(v.begin(), v.end());
    
    for(vector<pair<int, int>>::iterator itr = v.begin(); itr != v.end(); ++itr) {
        if((*itr).first < s) {
            s += (*itr).second;
        } else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    //A Sebastian Production
    return 0;
}

