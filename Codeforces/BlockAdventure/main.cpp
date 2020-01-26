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
        long long n = 0LL, m = 0LL, k = 0LL, x = 0LL;
        cin>>n>>m>>k;
        long long arr[n];
        
        //Read in column heights
        for(int j = 0; j < n; ++j)
            cin>>arr[j];
        
        //Do stuff
        for(int j = 0; j < n - 1; ++j) {
            //If you can jump to next without using blocks in bag
            if(arr[j] + k >= arr[j + 1])
                m += arr[j] + min(k, arr[j + 1]) - arr[j + 1];
            
            //Else if you need to use blocks in the bag
            else {
                m -= arr[j + 1] - k - arr[j];//Remove min blocks from your bag to make it to the next column
                if(m < 0) break;//Exit loop if can't get to next column
            }
        }
        //Output results
        cout<<((m < 0) ? "NO\n" : "YES\n");
    }
    //A Sebastian Production
    return 0;
}