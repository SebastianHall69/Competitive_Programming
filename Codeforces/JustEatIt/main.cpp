/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 10, 2020, 6:35 AM
 * Purpose: https://codeforces.com/contest/1285/problem/B
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;

ll getSum(int i, int j, ll *arr);

int main(int argc, char** argv) {
    //Declare variables
    int n = 0, t = 0;
    ll * arr;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        ll y = 0;
        cin>>n;
        arr = new ll[n];
        
        for(int i = 0; i < n; ++i) {
            scanf("%lli", &arr[i]);
            y += arr[i];
        }
        
        //Kadane's algorithm
        ll current_sum = 0;
        ll best_sum = 0;
        for(ll i = 0; i < n - 1; ++i) {
            
            current_sum = max(0LL, current_sum + arr[i]);
            best_sum = max(best_sum, current_sum);
        }
        current_sum = 0;
        for(ll i = 1; i < n; ++i) {
            
            current_sum = max(0LL, current_sum + arr[i]);
            best_sum = max(best_sum, current_sum);
        }
        
        if(y > best_sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        delete [] arr;
    }
    

    //A Sebastian Production
    return 0;
}
