/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 16, 2019, 5:40 PM
 * Purpose: 2018 Problem 10 ABC Conjecture
 */

//System libraries
#include <iostream>
#include <cmath>
#include <set>
using namespace std;

//Function prototypes
set<int> primeFactor(long long);
bool badVal(set<int>, set<int>);


int main(int argc, char** argv) {
    int a = 0, b = 0;
    
    while(cin>>a>>b) {
        long c = a + b;
        set<int> aFac = primeFactor(a);
        set<int> bFac = primeFactor(b);
        if(badVal(aFac, bFac)) {
            cout<<"bad"<<endl;
        } else {
            long long abc = a*b*c;
            set<int> abcFac = primeFactor(abc);
            long long prod = 1;
            for(set<int>::iterator i = abcFac.begin(); i != abcFac.end(); ++i) {
                prod *= *i;
            }
            if(prod > c) cout<<"greater"<<endl;
            else cout << "less"<<endl;
        }
    }
    
    //A Sebastian Production
    return 0;
}

bool badVal(set<int> aFac, set<int> bFac) {
    set<int>::const_iterator i;
    for(i = aFac.cbegin(); i != aFac.cend(); ++i) {
        if(bFac.count(*i))
            return true;
    }
    return false;
}

set<int> primeFactor(long long val) {
    set<int> factors;//Prime factors
    
    //Factor out all 2's
    while(val % 2 == 0) {
        factors.insert(2);
        val /= 2;
    }
    
    //Factor out all odds from 3 to sqrt(val)
    for(int i = 3; i <= sqrt(val); i += 2) {
        while(val % i == 0) {
            factors.insert(i);
            val /= i;
        }
    }
    
    //If final result is a prime > 2 add to factors
    if(val > 2) {
        factors.insert(val);
    }
    
    //Return set of prime factors
    return factors;
}