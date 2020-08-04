/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 23, 2020, 12:08 AM
 * Purpose: https://codeforces.com/contest/1367/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    //Declare variables
    int t = 0; 

    cin>>t;

    for(int i = 0; i < t; ++i) {
        int n = 0, badEven = 0, badOdd = 0, x = 0;

        cin>>n;

        //Read in each num and see if it is in correct place
        for(int j = 0; j < n; ++j) {
            cin>>x;
            if(j & 1) {//Supposed to be odd case
                if(!(x & 1)) ++badOdd;//If even increment
            } else {//Supposed to be even case
                if(x & 1) ++badEven;//If odd increment
            }
        }

        //Output answer
        cout<<(badOdd == badEven ? badOdd : -1)<<endl;//If everything that needs swapped has a place to go
    }
    //A Sebastian Production
    return 0;
}
