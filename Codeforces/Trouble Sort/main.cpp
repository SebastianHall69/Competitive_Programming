/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 4, 2020, 2:53 PM
 * Purpose: https://codeforces.com/contest/1365/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        int n = 0, *a = nullptr, x = 0;
        bool flag = false, flag2 = false;

        cin>>n;

        a = new int[n];
        for(int j = 0; j < n; ++j) cin>>a[j];
        for(int j = 0; j < n; ++j) { 
            cin>>x;
            if(x) flag = true;//Mark presence of a type 1
            else flag2 = true;//Mark presence of a type 0
        }

        //Output answer, if both types are available or a is already sorted then it is sortable
        cout<<((flag && flag2) || is_sorted(a, a + n) ? "Yes\n" : "No\n");

        delete [] a;
    }

    //A Sebastian Production
    return 0;
}
