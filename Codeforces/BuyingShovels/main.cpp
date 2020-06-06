/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 26, 2020, 2:26 PM
 * Purpose: http://codeforces.com/contest/1360/problem/D
 */

#include <bits/stdc++.h>
using namespace std;

vector<int> getFactors(int n);

int main() {
    ios::sync_with_stdio(false);
    int t = 0;
    
    cin>>t;
    
    //For each test case
    for(int i = 0; i < t; ++i) {
        int n, k, ans;
        cin>>n>>k;
        
        //Get all factors of k
        vector<int> v = getFactors(n);
        
        //Find the highest factor of n that is  <= k
        for(vector<int>::reverse_iterator itr = v.rbegin(); itr < v.rend(); ++itr) {
            if(*itr <= k) {
                ans = *itr;
                break;
            }
        }
        
        //Output answer
        cout<<n / ans<<endl;
        
    }
    //A Sebastian Production
    return 0;
}

//Gets all factors of a number
vector<int> getFactors(int n) {
    vector<int> v;
    
    for(int i = 1, lim = sqrt(n); i <= lim; ++i) {
        if(n % i == 0) {
            v.push_back(i);
            v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    return v;
}