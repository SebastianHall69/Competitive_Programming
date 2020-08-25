/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 20, 2020, 5:06 PM
 * Purpose: https://atcoder.jp/contests/dp/tasks/dp_c
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0;
    vector<int> prev(3);
    
    cin>>n;
    
    for(int i = 0; i < n; ++i) {
        vector<int> happy(3), dp(3, 0);
        
        //Three potential activities of today
        cin>>happy[0]>>happy[1]>>happy[2];
        
        //For every combination of current days and previous days
        for(int curDay = 0; curDay < 3; ++curDay) {
            for(int prevDay = 0; prevDay < 3; ++prevDay) {
                if(curDay != prevDay) {//If not two activities same day in a row
                    dp[curDay] = max(dp[curDay], prev[prevDay] + happy[curDay]);
                }
            }
        }
        //Assign total of current days to previous
        prev = dp;
    }

    //Output answer
    cout<<(*max_element(prev.begin(), prev.end()))<<endl;
    
    //A Sebastian Production
    return 0;
}