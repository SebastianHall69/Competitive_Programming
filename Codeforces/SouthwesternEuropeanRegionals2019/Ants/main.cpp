/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 30, 2020, 4:32 PM
 * Purpose: https://codeforces.com/gym/102501/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    ll n = 0LL, x = 0LL;
    vector<ll> arr;
    string s;
    
    cin>>n;
    cin.ignore();
    
    //Read in numbers
    for(ll i = 0; i < n; ++i) {
        getline(cin, s);
        if(s.size() < 18) {
            x = atoll(s.c_str());
            if(x > -1) arr.push_back(x);
        }
    }
    
    //Sort vector
    sort(arr.begin(), arr.end());
    
    //Find first number not present
    int ans = arr.size();
    for(int i = 0; i < arr.size(); ++i) {
        if(i != arr[i]) {
            ans = i;
            break;
        }
    }
    
    //Output answer
    cout<<ans<<endl;
    
    //A Sebastian Production
    return 0;
}