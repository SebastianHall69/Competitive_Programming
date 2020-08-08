/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 5, 2020, 4:12 AM
 * Purpose: https://codeforces.com/contest/1374/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0, two = 0, three = 0;
        
        cin>>n;
        
        //Count powers of two in number
        while(n % 2 == 0) {
            ++two;
            n /= 2;
        }
        
        //Count powers of three in number
        while(n % 3 == 0) {
            ++three;
            n /= 3;
        }
        
        //Output answer
        if(two > three || n > 1) {//If powers of three cannot catch up or a factor other than 2 and 3 is present
            cout<<-1<<endl;
        } else {
            cout<<(three + (three - two))<<endl;
        }
    }

    //A Sebastian Production
    return 0;
}