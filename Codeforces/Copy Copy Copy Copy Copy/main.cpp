/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 6:06 PM
 * Purpose: http://codeforces.com/contest/1325/problem/B
 */

#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

#define io ios::sync_with_stdio(false)
typedef long long ll;
typedef long double triple;


int main(int argc, char** argv) {
    //Fast IO
    io;

    //Declare variables
    int t = 0;
    
    cin>>t;
    
    for(int j = 0; j < t; ++j) {
        int n = 0, *arr;
        cin>>n;
        arr = new int[n];

        for(int i = 0; i < n; ++i)
            cin>>arr[i];

        sort(arr, arr + n);

        cout<<(unique(arr, arr + n) - arr)<<endl;

        delete [] arr;
    }
    //A Sebastian Production
    return 0;
}