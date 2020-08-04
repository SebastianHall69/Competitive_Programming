/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 13, 2020, 6:22 AM
 * Purpose: https://codeforces.com/contest/1380/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        int n = 0, low = 1001, high = -1, x = 0, ind = 0, ans[3];
        fill(ans, ans + 3, -1);//Default values

        cin>>n;

        //Find low and first potential high
        for(; ind < n; ++ind) {
            cin>>x;
            if(x < low) {
                low = x;
                ans[0] = ind;
            } else if(x > low) {
                high = x;
                ans[1] = ind++;
                break;
            }
        }
        
        //Continue looking for more high and next low
        for(; ind < n; ++ind) {
            cin>>x;
            if(x > high) {
                high = x;
                ans[1] = ind;
            } else if(x < high) {
                ans[2] = ind;
                break;
            }
        }

        //Clear remaining line if any
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        //Output answer
        if(ans[2] != -1) {
            cout<<"YES\n";
            for(int j = 0; j < 3; ++j) cout<<ans[j] + 1<<" ";//One index it
            cout<<"\n";
        } else {
            cout<<"NO\n";
        }
    }

    //A Sebastian Production
    return 0;
}
