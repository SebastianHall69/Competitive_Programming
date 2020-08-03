/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 5, 2020, 8:43 PM
 * Purpose: http://codeforces.com/contest/1311/problem/C
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, m = 0, x = 0, ans[26];
        char c;
        vector< vector<int> > v(26);
        memset(ans, 0, 26 * sizeof(int));
        
        cin>>n>>m;
        cin.ignore();
        
        //Save indices of each letter
        for(int j = 0; j < n; ++j) {
            cin>>c;
            v[c - 'a'].push_back(j);
        }
        
        //Count the frequency for each messed up combo
        for(int j = 0; j < m; ++j) {
            cin>>x;
            for(int k = 0; k < 26; ++k)
                ans[k] += lower_bound(v[k].begin(), v[k].end(), x) - v[k].begin();
        }
        
        //Output messed up combos plus final correct one for each letter
        for(int j = 0; j < 26; ++j)
            cout<<ans[j] + v[j].size()<<" ";
        cout<<endl;
    }
    //A Sebastian Production
    return 0;
}