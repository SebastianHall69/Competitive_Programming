/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 14, 2020, 2:30 PM
 * Purpose: UCR https://codeforces.com/group/1uT235pchJ/contest/271433/problem/C1
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[600000];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque<ll> d;
    ll n;
    cin>>n;
    int x;
    for(int i = 0; i < n; i++){
        cin>>x;
        d.push_back(x);
    }
    
    x = 0;
    string str = "";
    while(!d.empty()){
        int f = d.front();
        int b = d.back();
        if(f>x){
            if(b>x && b < f){
                str += "R";
                x = d.back();
                d.pop_back();
               
            }
            else{
                str += "L";
                x = d.front();
                d.pop_front();
            }
        }
        else if (b>x){
            str += "R";
            x = d.back();
            d.pop_back();
        }
        else break;
    }
    
    cout<<str.length()<<endl;
    cout<<str;
    
    return 0;
}