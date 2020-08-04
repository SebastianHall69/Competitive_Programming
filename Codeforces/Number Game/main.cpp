/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 21, 2020, 8:19 PM
 * Purpose: https://codeforces.com/contest/1370/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);

    //Declare variables
    int t = 0;
    set<ll> s;

    //Fill set with 2^n
    for(ll i = 2LL; i < 30LL; ++i) {
        s.insert(pow(2LL, i));
    }

    cin>>t;

    for(int i = 0; i < t; ++i) {
        //Declare variables
        ll n = 0;

        cin>>n;
       
        //Output answer
        if(n == 1LL) cout<<"FastestFinger\n";//Base case
        else if(n == 2LL) cout<<"Ashishgup\n";//base case
        else if(n & 1LL) cout<<"Ashishgup\n";//If odd then divide by n, make fastest lose;
        else if(s.count(n)) cout<<"FastestFinger\n";//If power of 2 then no odd to div by then -1 and other fastest div by n;
        else if(n % 4 == 0) cout<<"Ashishgup\n";//If more than one power of 2 then div by highest odd and have case above with other player;
        else {
            n /= 2;
            bool prime = true;
            for(int j = 2, max = sqrt(n); j <= max; ++j) {
                if(n % j == 0) {
                    prime = false;
                    break;
                }
            }

            cout<<(prime ? "FastestFinger\n" : "Ashishgup\n");
        }
    }

    return 0;
}
