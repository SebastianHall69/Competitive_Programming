/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 13, 2020, 5:19 PM
 * Purpose: http://codeforces.com/contest/1095/problem/D
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(false);
    int n = 0, ind = 0;
    pii *arr;
    int *ans;

    cin>>n;
    arr = new pii[n];
    ans = new int[n];

    for(int i = 0; i < n; ++i) {
        cin>>arr[i].first>>arr[i].second;
    }

    ans[0] = 1;
    if(n > 3) {
        for(int i = 1; i < n; ++i) {
            int a = arr[ind].first, b = arr[ind].second;
            if(arr[a - 1].first == b || arr[a - 1].second == b) {
                ans[i] = a;
                ind = a - 1;
            } else {
                ans[i] = b;
                ind = b - 1;
            }
        }
    } else {
        int a = arr[ind].first, b = arr[ind].second;
        if(arr[a - 1].first == b || arr[a - 1].second == b) {
            ans[1] = a;
            ans[2] = b;
        } else {
            ans[1] = b;
            ans[2] = a;
        }
    }
    
    for(int i = 0; i < n; ++i)
        cout<<ans[i]<<" ";
    cout<<endl;


    delete [] arr;
    delete [] ans;

    return 0;
}

