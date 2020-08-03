/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 16, 2020, 12:20 PM
 * Purpose: http://codeforces.com/problemset/problem/996/A
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0LL, ans = 0, coins[] = {1,5,10,20,100};
    
    scanf("%i", &n);
    
    for(int i = 4; i >= 0; --i) {
        ans += n / coins[i];
        n %= coins[i];
    }
    
    printf("%i\n", ans);

    //A Sebastian Production
    return 0;
}

/* DP Solution
 * 
 *   ll n = 0LL, *dp = nullptr;
    int coins[5] = {1,5,10,20,100};
    
    //Read in size of dp array and create it
    scanf("%lli", &n);//Read in
    dp = new ll[n + 1];//Because we want [0,n]
    memset(dp, 0, sizeof(dp) * (n + 1));//Initialize to zero
    
    //Calculate answer to each sub problem
    for(ll i = 1LL; i <= n; ++i) {//For each sub problem
        ll amnt = i;//Highest it could be
        for(ll j = 0LL; j < 5; ++j) {//For each coin to be tested
            if(coins[j] <= i) {//If the coin value can be subtracted from sub problem amount
                amnt = min(amnt, dp[i - coins[j]] + 1);
            }
        }
        dp[i] = amnt;
    }
    
    //Output answer
    printf("%lli\n", dp[n]);
    
    //Deallocate memory
    delete [] dp;
 */