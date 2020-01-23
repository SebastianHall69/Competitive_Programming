/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on November 20, 2019, 10:57 AM
 * Purpose: Find and output the 1500th ugly number
 */

#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    set<long long> vals;
    
    //Generate set with about 12000 ugly numbers, definitely has first 1500 O(100^3)
    for(int i = 0; i < 100; ++i)
        for(int j = 0; j < 100; ++j)
            for(int k = 0; k < 100; ++k)
                vals.insert(((k > 0) ? pow(2, k) : 1LL) * ((j > 0) ? pow(3, j) : 1LL) * ((i > 0) ? pow(5, i) : 1LL));
    
    //Output 1500th element
    cout<<"The 1500'th ugly number is "<<*(next(vals.begin(), 1500))<<"."<<endl;
    
    //A Sebastian Production
    return 0;
}