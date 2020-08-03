/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 29, 2020, 11:13 AM
 * Purpose: https://codeforces.com/contest/1165/problem/B
 */

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    //Make iostream not suck
    ios::sync_with_stdio;
    cin.tie(0);

    //Declare variables
    int n = 0;
    int *arr;
    
    cin>>n;
    
    arr = new int[n];
    
    for(int i = 0; i < n; ++i)
        cin>>arr[i];
    
    sort(arr, arr + n);
    
    
    int count = 1;
    for(int i = 1; i < n; ++i) {
        if(arr[i] > count) ++count;
    }
    
    cout<<count<<endl;
    
    
    delete [] arr;

    //A Sebastian Production
    return 0;
}