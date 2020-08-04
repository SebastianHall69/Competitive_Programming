/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 18, 2020, 12:15 AM
 * Purpose: https://codeforces.com/contest/1364/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);

    //Declare variables
    int t = 0;

    cin>>t;

    //For each test case
    for(int i = 0; i < t; ++i) {
        int n = 0, x = 0, *arr = nullptr, sum = 0, ans = 0;

        cin>>n>>x;

        //Read in array of numbers
        arr = new int[n];
        for(int j = 0; j < n; ++j) {
            cin>>arr[j];
        }

        //Add up to see if it is divisible
        sum = accumulate(arr, arr + n, 0);

        //Get answer
        ans = n;
        if(sum % x == 0) {//If sum is divisible by x
            int l = -1, r = -1;
            
            //Closest to remove from the left
            for(int j = 0; j < n; ++j) {
                if(arr[j] % x) {//If element not divisible by x
                    l = j + 1;
                    break;
                }
            }
            
            //Closest to remove from the right
            for(int j = n - 1; j >= 0; --j) {//If element not divisible by x
                if(arr[j] % x) {
                    r = n - j;
                    break;
                }
            }
            
            //Get answer
            if(l == -1) {//Impossible case, no element not div by x
                ans = -1;
            } else {
                ans -= min(l, r);
            }
        }

        //Output answer
        cout<<ans<<endl;
        
        //Deallocate data
        delete [] arr;
    }
    
    //A Sebastian Production
    return 0;
}