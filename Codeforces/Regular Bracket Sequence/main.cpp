/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 25, 2020, 2:03 PM
 * Purpose: http://codeforces.com/contest/1132/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);

    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    
    cin>>cnt1>>cnt2>>cnt3>>cnt4;

    if(cnt1 == cnt4) {
        if(cnt3) {
            if(cnt1) {
                cout<<1<<endl;
            } else {
                cout<<0<<endl;
            }
        } else {
            cout<<1<<endl;
        }
    } else {
        cout<<0<<endl;
    }

    //A Sebastian Production
    return 0;
}