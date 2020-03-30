/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 29, 2020, 3:54 PM
 * Purpose: https://codeforces.com/contest/1005/problem/A
 */

#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    int n = 0, *arr;
    vector<int> stairs;
    
    cin>>n;
    arr = new int[n];
    
    for(int i = 0; i < n; ++i) 
        cin>>arr[i];
    
    for(int i = 0; i < n - 1; ++i) {
        if(arr[i] >= arr[i + 1])
            stairs.push_back(arr[i]);
    }
    stairs.push_back(arr[n - 1]);
    
    //Output answer
    cout<<stairs.size()<<endl;
    for(auto a : stairs) {
        cout<<a<<" ";
    }
    cout<<endl;
    
    

    //A Sebastian Production
    return 0;
}