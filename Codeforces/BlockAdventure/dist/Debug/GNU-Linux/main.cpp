/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 25, 2020, 1:23 PM
 * Purpose:
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int q = 0; 
    
    cin>>q;
    
    for(int i = 0; i < q; ++i) {
        long long n = 0, m = 0, k = 0, x = 0;
        bool flag = true;
        cin>>n>>m>>k;
        int arr[n];
        
        for(int j = 0; j < n; ++j)
            cin>>arr[n];
        
        for(int j = 0; j < n - 1; ++j) {
            if(arr[j] + k >= arr[j + 1]) {//If you can jump to next without using blocks in bag
                m += arr[j] + k - arr[j + 1];
            } else {//Else if you need to use the bag
                int a = arr[j + 1] - k - arr[j];//Dist between arr[i] and min jumping position
                if(a > m) {
                    cout<<"NO\n";
                    j = n;
                    flag = false;
                } else
                    m -= a;
            }
        }
        
        if(flag) cout<<"YES\n";
    }
    //A Sebastian Production
    return 0;
}