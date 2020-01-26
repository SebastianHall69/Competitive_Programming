    /* 
     * File:   main.cpp
     * Author: sebastian
     * Created on January 23, 2020, 11:52 PM
     * Purpose: http://codeforces.com/contest/1076/problem/B
     */
     
    #include <iostream>
    #include <cmath>
    using namespace std;
     
    long long firstPrime(long long);
     
    int main(int argc, char** argv) {
        //Declare variables
        long long n = 0LL, sum = 0LL;
        cin>>n;
        
        while(n > 0) {
            if(n % 2 == 0) {
                cout<<sum + n / 2<<endl;
                return 0;
            }
            else {
                n -= firstPrime(n);
                ++sum;
            }
        }
        cout<<sum<<endl;
        
        //A Sebastian Production
        return 0;
    }
     
    long long firstPrime(long long n) {
        long long max = pow(n, 1.0 / 2);
        if(n % 2 == 0) return 2;
        for(long long i = 3; i <= max; i += 2) {
            if(n % i == 0) return i;
        }
        return n;
    }