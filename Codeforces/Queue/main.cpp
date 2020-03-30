/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 29, 2020, 3:30 PM
 * Purpose: https://codeforces.com/contest/545/problem/D
 */

#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    ll n = 0, *arr = nullptr;
    
    
    //Read in size
    cin>>n;
    arr = new ll[n];
    
    
    //Read in people
    for(ll i = 0; i < n; ++i) 
        cin>>arr[i];
    
    //Sort by time to get through line
    sort(arr, arr + n);
    
    //Find number of happy people
    int wait = 0, happy = 0;
    for(ll i = 0; i < n; ++i) {
        if(arr[i] >= wait) {
            wait += arr[i];
            ++happy;
        }
    }
    
    cout<<happy<<endl;

    delete [] arr;
    
    //A Sebastian Production
    return 0;
}