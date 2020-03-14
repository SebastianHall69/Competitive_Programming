/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 17, 2020, 2:57 PM
 * Purpose: https://codeforces.com/contest/1300/problem/A
 */

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

int main(int argc, char** argv) {
    long long t = 0;
    
    cin>>t;
    
    for(long long i = 0; i < t; ++i) {
        long long n = 0;
        
        cin>>n;
        
        long long arr[n];
        
        for(long long j = 0; j < n; ++j) 
            cin>>arr[j];
        
        long long sum = accumulate(arr, arr + n, 0, plus<long long>());
        long long prod = accumulate(arr, arr + n, 1, multiplies<long long>());
        
        
        
    }

    //A Sebastian Production
    return 0;
}

