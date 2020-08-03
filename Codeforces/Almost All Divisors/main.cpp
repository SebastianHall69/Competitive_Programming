/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 29, 2020, 11:47 AM
 * Purpose: UCR Problem https://codeforces.com/group/1uT235pchJ/contest/270705/problem/D
 */

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

typedef long long ll;

vector<ll> getUniqueFactors(ll);

int main(int argc, char** argv) {
    //Make iostream not suck
    ios::sync_with_stdio;

    //Declare variables
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        ll n = 0LL, ans = 0LL;
        cin>>n;
        vector<ll> arr(n);

        for(ll i = 0; i < n; ++i) {
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end());

        ans = arr[0] * arr[n-1];
        
        for(int i = 0; i < n; ++i) {
            if(ans % arr[i] != 0) {
                ans = -1;
                break;
            }
        }
        
        vector<ll> tmp = getUniqueFactors(ans);
        sort(tmp.begin(), tmp.end());
        
        
        if(tmp == arr)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    
    }
    //A Sebastian Production
    return 0;
}

vector<ll> getUniqueFactors(ll num) {
    vector<ll> fac;
    for(ll i = 2LL, max = sqrt(num); i <= max; ++i) {
        if(num % i == 0LL) {
            fac.push_back(i);
            if(i != num / i)
                fac.push_back(num / i);
        }
    }
    
    return fac;
}