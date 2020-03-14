/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 1:45 PM
 * Purpose: https://codeforces.com/contest/1165/problem/A
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll size, x, y;
    cin>>size>>x>>y;
    string str;
    cin>>str;
    string ans = "";
    string comp = "";
    for(int i = 0; i < x; i++){
        comp += '0';
    }
    comp[comp.length()-1-y] = '1';
    for(int i = str.length()-1; i>=str.length() - x; i--){
        ans = str[i] + ans;
    }
    
    ll a = 0;
    for(int i = 0; i < ans.length(); i++){
        if(ans[i] != comp[i])
            a++;
    }
    cout<<a;
    
    return 0;
}
