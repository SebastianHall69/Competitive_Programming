/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 5, 2020, 10:17 PM
 * Purpose: http://codeforces.com/contest/1311/problem/B
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, m = 0, *arr, *ind;
        
        cin>>n>>m;
        
        arr = new int[n];
        ind = new int[m];
        
        for(int j = 0; j < n; ++j)
            cin>>arr[j];
        
        for(int j = 0; j < m; ++j) {
            cin>>ind[j];
            --ind[j];
        }
        sort(ind, ind + m);
        
        int start = ind[0];
        for(int j = 0; j < m - 1; ++j) {
            if(ind[j + 1] > ind[j] + 1) {
                sort(arr + start, arr + ind[j] + 2);
                start = ind[j + 1]; 
            }
        }
        sort(arr + start, arr + ind[m - 1] + 2);
        
        if(is_sorted(arr, arr + n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        delete [] ind;
        delete [] arr;
    }


    //A Sebastian Production
    return 0;
}