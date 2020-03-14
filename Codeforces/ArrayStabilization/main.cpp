/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 1:52 PM
 * Purpose: https://codeforces.com/contest/1095/problem/B
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0, *arr;
    
    cin>>n;
    arr = new int[n];
    
    for(int i = 0; i < n; ++i)
        cin>>arr[i];
    
    sort(arr, arr + n);
    
    if((arr[1] - arr[0]) > (arr[n - 1] - arr[n - 2]))
        cout<<arr[n - 1] - arr[1]<<endl;
    else
        cout<<arr[n - 2] - arr[0]<<endl;
    
    
	delete [] arr;
	return 0;
}