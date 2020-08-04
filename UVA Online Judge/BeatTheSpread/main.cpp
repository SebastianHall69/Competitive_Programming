/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 24, 2019, 12:13 PM
 * Purpose: Football stuff
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0;
    long long sum = 0LL, diff = 0LL, high = 0LL, low = 0LL;
    double x = 0.0;
    
    cin>>n;
    
    for(int i = 0; i < n; ++i) {
        cin>>sum>>diff;
        if(diff > sum) cout<<"impossible"<<endl;
        else {
            x = (sum - diff) / 2.0;
            low = static_cast<long long>(x);
            high = low + diff;
            if(x == low) {
                cout<<high<<" "<<low<<endl;
            } else
                cout<<"impossible"<<endl;
        }
    }

    //A Sebastian Production
    return 0;
}