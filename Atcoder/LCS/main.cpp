/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 22, 2020, 1:20 PM
 * Purpose: https://atcoder.jp/contests/dp/tasks/dp_f
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    string a, b;
    
    cin>>a>>b;
    
    //Make this retarded 2d dp array
    vector<vector<pair<int, pair<int, int> > > > dp(a.size() + 1, vector<pair<int, pair<int, int> > > (b.size() + 1, make_pair(numeric_limits<int>::min(), make_pair(0, 0))));
    
    
    

    //A Sebastian Production
    return 0;
}