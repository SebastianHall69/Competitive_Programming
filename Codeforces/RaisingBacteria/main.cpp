    /* 
     * File:   main.cpp
     * Author: Sebastian Hall
     * Created on January 8, 2020, 11:10 AM
     * Purpose: https://codeforces.com/contest/579/problem/A
     */
     
    #include <iostream>
    #include <cmath>
    using namespace std;
     
    typedef long long ll;
     
    int main(int argc, char** argv) {
        ll n, count = 0LL;
        
        cin>>n;
        
        while(n > 0) {
            ll a = 1LL, b = 1LL;
            ++count;
            while(b < n) {
                b *= 2;
                if(b <= n) a = b;
            }
            n -= a;
        }
        
        cout<<count<<endl;
        
        return 0;
    }