/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 4, 2020, 2:39 AM
 * Purpose: https://codeforces.com/contest/1389/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int **dp;

int func(int arr[], int z, int prev, int moveLeft, int curInd) {
    //Base bases
    if(dp[curInd][z] != -1) return dp[curInd][z];//If sub problem already solved return that answer
    if(moveLeft == 0) return arr[curInd];//If no moves left then answer is value of this array element
    
    //If cannot move left (Start of array, already went left, no more left moves) then must move right
    if(curInd == 0 || prev == -1 || z == 0) {
        return dp[curInd][z] = func(arr, z, 1, moveLeft - 1, curInd + 1) + arr[curInd];
    } 
    //Else see if going left or right is better
    else {
        int left = func(arr, z - 1, -1, moveLeft - 1, curInd - 1);
        int right = func(arr, z, 1, moveLeft - 1, curInd + 1);
        return dp[curInd][z] = max(left, right) + arr[curInd];
    }
}

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;
    
    //For each test case
    cin>>t;
    for(int i = 0; i < t; ++i) {
        //Create and initialize variables
        int n = 0, k = 0, z = 0;
        cin>>n>>k>>z;
        
        //Initialize dp array
        dp = new int*[n];
        for(int j = 0; j < n; ++j) {
            dp[j] = new int[z + 1];
            for(int l = 0; l <= z; ++l) dp[j][l] = -1;
        }
        
        //Read in input array
        int arr[n];
        for(int j = 0; j < n; ++j) cin>>arr[j];
        
        //Output answer
        cout<<func(arr, z, 1, k, 0)<<endl;
        
        //Deallocate dp array
        for(int j = 0; j < n; ++j) delete [] dp[j];
        delete [] dp;
    }
    //A Sebastian Production
    return 0;
}