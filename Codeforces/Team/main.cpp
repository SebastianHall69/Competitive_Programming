/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on February 20, 2020, 9:23 PM
 * Purpose: http://codeforces.com/contest/1307/problem/A
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
typedef long double triple;

int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    //Declare variables
    int t = 0;
    cin>>t;
    
    //For each query
    for(int i = 0; i < t; ++i) {
        //Declare variables
        int n = 0, d = 0, x = 0, ans = 0;
        string s;
        
        //Read in input and amount in first stack to ans
        cin>>n>>d>>ans;
        
        //For each stack of hay or until can't move anymore
        for(int j = 1; j < n; ++j) {
            cin>>x;
            x = min(d / j, x);//Min of amount that can be moved from that index and amount at index
            d -= x * j;//Remove those days from d
            ans += x;//Add to ans
            if(j > d) {getline(cin, s); break;}//If can't move anymore then clear line and break loop
        }
        
        //Output ans
        cout<<ans<<"\n";
    }

    //A Sebastian Production
    return 0;
}