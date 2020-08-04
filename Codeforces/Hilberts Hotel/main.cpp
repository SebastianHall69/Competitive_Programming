/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 4, 2020, 3:13 PM
 * Purpose: https://codeforces.com/contest/1345/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        int n = 0, x = 0, *arr = nullptr;
        unordered_set<int> s;
        bool flag = false;

        cin>>n;

        arr = new int[n];
        for(int j = 0; j < n; ++j) {
            cin>>arr[j];
        }

        for(int j = 0; j < n; ++j) {
            int val = j + arr[j];
            val = ((val % n) + n) % n;

            if(s.count(val)) {
                flag = true;
                break;
            } else {
                s.insert(val);
            }
        }

        //Output answer
        if(flag) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }

        delete [] arr;
    }

    //A Sebastian Production
    return 0;
}
