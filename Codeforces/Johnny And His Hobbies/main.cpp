/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 7, 2020, 6:36 AM
 * Purpose: https://codeforces.com/contest/1362/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        int n = 0, x = 0, ans = -1;
        unordered_set<int> a;

        cin>>n;

        for(int j = 0; j < n; ++j) {
            cin>>x;
            a.insert(x);
        }
        
        for(int j = 1; j < 1024; ++j) {
            unordered_set<int> b;
            bool flag = true;

            for(unordered_set<int>::iterator itr = a.begin(); itr != a.end(); ++itr) {
                b.insert(j ^ (*itr));
            }

            for(unordered_set<int>::iterator itr = a.begin(); itr != a.end(); ++itr) {
                if(!b.count(*itr)) {
                    flag = false;
                    break;
                }
            }

            if(flag) {
                ans = j;
                break;
            }
        }
        cout<<ans<<endl;

    }




    //A Sebastian Production
    return 0;
}
