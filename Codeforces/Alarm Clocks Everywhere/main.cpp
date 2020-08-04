/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 18, 2020, 2:41 PM
 * Purpose: https://codeforces.com/problemset/problem/1155/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    ll n = 0, m = 0, evnt1 = 0, evnt2 = 0, gcd = 0, x = 0, ans1 = 0;

    cin>>n>>m;
    cin>>evnt1>>evnt2;
    gcd = abs(evnt2 - evnt1);
    ans1 = evnt1;
    
    for(ll i = 2; i < n; ++i) {
        evnt1 = evnt2;
        cin>>evnt2;
        gcd = __gcd(gcd, abs(evnt2 - evnt1));
    }


    for(ll i = 0; i < m; ++i) {
        cin>>x;
        if(gcd % x == 0) {
            cout<<"YES\n";
            cout<<ans1<<" "<<(i + 1)<<"\n";
            return 0;
        }
    }

    cout<<"NO\n";


    //A Sebastian Production
    return 0;
}
