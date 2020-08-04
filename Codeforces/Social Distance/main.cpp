/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 18, 2020, 12:15 AM
 * Purpose: https://codeforces.com/contest/1367/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        //Declare variables
        int n = 0, k = 0, ans = 0, dist = 0, first = 200000, last = -1;
        string input; 

        //Read in sizes
        cin>>n>>k;
        
        //Read in string and mark position of first and last filled tables
        input.resize(n); 
        for(int j = 0; j < n; ++j) {
            cin>>input[j];

            //Mark positions of first and last occupied table
            if(input[j] == '1') {
                first = min(first, j);
                last = max(last, j);
            }
        }

        //Loop from first to last searching for intermediary tables
        for(int j = first; j < last; ++j) {
            if(input[j] == '0') {
                ++dist;
                if(dist > 2 * k) {
                    ++ans;
                    dist = k;//Dist is k because I place table at k + 1 after I reach 2k + 1
                }
            } else {
                dist = 0;
            }
        }

        //Insert edge tables
        if(last > -1) {//If restaurant was not empty
            ans += (first) / (k + 1);
            ans += (n - last - 1) / (k + 1);
        } else {
            ans = (n + k) / (k + 1);
        }

        //Output answer
        cout<<ans<<endl;
    }


    //A Sebastian Production
    return 0;
}
