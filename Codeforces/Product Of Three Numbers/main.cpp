/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 22, 2020, 7:21 AM
 * Purpose: http://codeforces.com/contest/1294/problem/C
 */

#include <iostream>
#include <cstdio>
#include <set>
#include <cmath>
using namespace std;

set<long long> getFacs(long long);

int main(int argc, char** argv) {
    //Declare variables
    int q = 0;
    long long x = 0;
    
    cin>>q;
    
    for(int i = 0; i < q; ++i) {
        cin>>x;
        set<long long> facs = getFacs(x);
        
        
        if(facs.size() >= 3) {
            set<long long>::iterator itr = facs.begin();
            long long a = (*itr++);
            long long b = (*itr++);
            
            long long sum = 0;
            for(; itr != facs.end(); ++itr) {
                sum += (*itr);
            }
            printf("YES\n%lli %lli %lli\n", a, b, sum);
        } else {
            cout<<"NO"<<endl;
        }
    }

    //A Sebastian Production
    return 0;
}

set<long long> getFacs(long long n) {
    long long max = pow(n, 1.0/2.0);
    set<long long> facs;
    
    for(int i = 2; i <= max; ++i) {
        if(n % i == 0) {
            facs.insert(i);
            n /= i;
        }
    }
    if(n > 1) facs.insert(n);
    return facs;
}