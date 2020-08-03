/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on January 25, 2020, 7:57 PM
 * Purpose: https://codeforces.com/contest/1272/problem/A
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0;
    
    cin>>n;
    
    for(int i = 0; i < n; ++i) {
        ll arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr, arr + 3);
        
        if(arr[0] < arr[2] - 1) ++arr[0];
        if(arr[2] > arr[0]) --arr[2];
        if(arr[1] < arr[0]) ++arr[1];
        if(arr[1] > arr[2]) --arr[1];
        
        int dist = abs(arr[0] - arr[1]) + abs(arr[0] - arr[2]) + abs(arr[1] - arr[2]);
        cout<<dist<<endl;
    }
    //A Sebastian Production
    return 0;
}