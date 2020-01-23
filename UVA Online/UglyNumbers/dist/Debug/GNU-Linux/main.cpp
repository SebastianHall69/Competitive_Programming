/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 20, 2019, 10:57 AM
 * Purpose:
 */

#include <iostream>
#include <set>
#include <cmath>
using namespace std;

set<int> getPrimes(long);

int main(int argc, char** argv) {
    //Declare variables
    int count = 11;
    unsigned long num = 16;
    set<int> facs;
    
    while(count < 1500) {
        facs = getPrimes(num);
        for(set<int>::const_iterator itr = facs.cbegin(); itr != facs.cend(); ++itr) {
            if(!(*itr == 2 || *itr == 3 || *itr == 5)) {
                ++count;
                itr = facs.cend();
            }
        }
        ++num;
        facs.clear();
        cout<<"num: "<<num<<"\tcount: "<<count<<endl;
        
    }
    
    cout<<"count: "<<count<<endl;
    
    //A Sebastian Production
    return 0;
}

set<int> getPrimes(long num) {
    set<int> facs;
    for(long val = 2; val <= num; ++val) {
        if((num / val) * val == num) {
            facs.insert(val);
            num /= val;
            --val;
        }
    }
    return facs;
}