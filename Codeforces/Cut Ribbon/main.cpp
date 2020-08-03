/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 3:03 PM
 * Purpose: https://codeforces.com/contest/189/problem/A
 */

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    int n = 0, *arr, a = 0, b = 0, c = 0;
    
    cin>>n>>a>>b>>c;
    arr = new int[n + 1];
    
    memset(arr, -1, n + 1);
    arr[0] = 0;
    for(int i = 1; i <= n; ++i) {
        int high = -1;
        if(i - a >= 0)
            if(arr[i - a] >= 0)
                high = max(arr[i - a] + 1, high);
        if(i - b >= 0)
            if(arr[i - b] >= 0)
                high = max(arr[i - b] + 1, high);
        if(i - c >= 0)
            if(arr[i - c] >= 0)
                high = max(arr[i - c] + 1, high);
        arr[i] = high;
    }
    
    cout<<arr[n]<<endl;
    
    delete [] arr;
    
    return 0;
}