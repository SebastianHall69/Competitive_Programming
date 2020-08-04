/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 27, 2020, 10:23 PM
 * Purpose: NOT A PROBLEM, JUST GOOD TO KNOW
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
    bool dp[n + 1][target + 1];
    int arr[n];
    
    //Read in numbers
    cout<<"Enter numbers in set: ";
    for(int i = 0; i < n; ++i) cin>>arr[i];
    
    //Set initial row of table
    dp[0][0] = true;
    for(int i = 1; i <= target; ++i) dp[0][i] = false;
    
    //Fill out dp table
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j <= target; ++j) {
            dp[i][j] = (dp[i - 1][j] || (j - arr[i] >= 0 && dp[i - 1][j - arr[i]]));//If previous row was true or cur j - curNum is true
        }
    }
    
    //Output answer
    cout<<"\nAnswer: ";
    if(dp[n][target]) {
        cout<<"Yes\n";
    } else {
        cout<<"No\n";
    }
    
    cout<<"\nTable\n";
    for(int i = 0; i <= n; ++i) {
        for(int j = 0; j <= target; ++j) {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    //A Sebastian Production
    return 0;
}