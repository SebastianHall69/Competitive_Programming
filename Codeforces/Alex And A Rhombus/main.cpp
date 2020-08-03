/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 25, 2020, 12:09 PM
 * Purpose: https://codeforces.com/problemset/problem/1180/A
 */

#include <iostream>
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0;
    int *arr;
    
    cin>>n;
    arr = new int[n + 1];
    
    arr[0] = 1;
    for(int i = 1; i <= n; ++i) {
        arr[i] = arr[i - 1] + (i - 1) * 4;
    }
    
    cout<<arr[n]<<endl;
    
    delete [] arr;
    //A Sebastian Production
    return 0;
}