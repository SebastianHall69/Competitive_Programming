/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 22, 2020, 7:52 PM
 * Purpose: https://codeforces.com/contest/119/problem/A
 */

    #include <iostream>
    using namespace std;
     
    typedef int longshort;
    typedef long long longer;
     
    longshort gcd(longshort, longshort);
     
    longshort main() {
        longshort a = 0, b = a, pileOfRocks = b, gcdA = 0, gcdB = 0;
        cin>>a>>b>>pileOfRocks;
        while(pileOfRocks > 0) {
            gcdA = gcd(a, pileOfRocks);
            pileOfRocks -= gcdA;
            if(pileOfRocks <= 0) {
                cout<<"0"<<endl;
                return 0;
            }
            gcdB = gcd(b, pileOfRocks);
            pileOfRocks -= gcdB;
            if(pileOfRocks <= 0) {
                cout<<"1"<<endl;
                return 0;
            }
        }
    }
     
    int gcd(longshort a,longshort b) {
        if(b == 0) return a;
        else return gcd(b, a % b);
    }