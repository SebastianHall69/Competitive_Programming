/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 28, 2020, 12:34 AM
 * Purpose: NOT PROBLEM, JUST USEFUL DP THING TO KNOW
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, target = 0;
    
    //Read in set size and target number
    cout<<"Enter size of set and target number: ";
    cin>>n>>target;
    
    //Create dp array and number set
    int dp[target + 1];
    memset(dp, 0, sizeof(int) * (target + 1));
    int arr[n];
    
    //Read in numbers
    cout<<"Enter numbers in set: ";
    for(int i = 0; i < n; ++i) cin>>arr[i];

    //Create dp array
    dp[0] = 1;
    for(int i = 0; i < n; ++i) {
        for(int j = target - arr[i]; j >= 0; --j) {
            if(dp[j] && !dp[j + arr[i]]) dp[j + arr[i]] = arr[i];
        }
    }
    
    //Output answer
    cout<<"answer: ";
    cout<<(dp[target] ? "Yes\n" : "No\n");
    
    //Output array
    cout<<"dp array: ";
    for(int i = 0; i <= target; ++i) {
        cout<<dp[i]<<" ";
    }
    
    //Output subset
    cout<<"\nsubset: ";
    if(dp[target]) {                        //If subset exists
        while(target) {                     //While not at 0 of dp array
            cout<<dp[target]<<" ";          //Output last number used
            target -= dp[target];           //Remove last number used from target to go down array
        }
    } else {                                //Else output default
        cout<<-1<<endl;
    }
    //A Sebastian Production
    return 0;
}