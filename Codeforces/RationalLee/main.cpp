/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 18, 2020, 12:15 AM
 * Purpose: https://codeforces.com/contest/1369/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        int n = 0, k = 0, numOnes = 0, x = 0;
        long long ans = 0LL;
        vector<int> numGifts;
        deque<int> nums;
        
        //Read input
        cin>>n>>k;

        nums.resize(n);
        for(int j = 0; j < n; ++j) cin>>nums[j];

        for(int j = 0; j < k; ++j) {
            cin>>x;
            if(x == 1) ++numOnes;//One gift is special case 
            else numGifts.push_back(x);
        }
        k -= numOnes;//Remove special cases from friends

        //Sort numbers
        sort(nums.begin(), nums.end());
        sort(numGifts.rbegin(), numGifts.rend());

        //Add highest for each getting one gift
        while(numOnes--) {
            ans += 2 * nums.back();//For people with one gift min = max
            nums.pop_back();
        }

        //Add happiness for remaining people, at least 2 gifts
        for(int j = 0; j < numGifts.size(); ++j) {
            ans += nums.front() + nums.back();
            nums.pop_back();
            for(int k = 0; k < numGifts[j] - 1; ++k) {
                nums.pop_front();
            }
        }
        //Output answer
        cout<<ans<<endl;
    }

    //A Sebastian Production
    return 0;
}
