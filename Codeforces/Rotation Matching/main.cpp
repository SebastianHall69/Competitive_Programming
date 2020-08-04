/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 8, 2020, 4:20 PM
 * Purpose: https://codeforces.com/contest/1365/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int n = 0, *a = nullptr, x = 0;
    unordered_map<int, int> m;

    //Read in size and create arrays
    cin>>n;
    a = new int[n];

    //Mark positions on first permutation 
    for(int i = 0; i < n; ++i) {
        cin>>x;
        a[x - 1] = i;
    }

    //Get distances from second permutation to first
    for(int i = 0; i < n; ++i) {
        cin>>x;
        int dist = (a[x - 1] > i ? n - a[x - 1] + i : i - a[x - 1]);//Distance cycling to right only 
        ++m[dist];//Count frequency of distance
    }

    //Get most frequest distance
    int ans = 0;
    for(unordered_map<int, int>::const_iterator itr = m.cbegin(); itr != m.cend(); ++itr) {
        ans = max(ans, itr->second);
    }

    //Output anwer
    cout<<ans<<endl;

    //Deallocate memory
    delete [] a;

    //A Sebastian Production
    return 0;
}
