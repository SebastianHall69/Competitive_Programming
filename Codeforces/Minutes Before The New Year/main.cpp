/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 4, 2020, 6:46 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0, hour = 0, min = 0;
    
    //Read in num test cases
    cin>>n;
    
    for(int i = 0; i < n; ++i) {
        cin>>hour>>min;
        cout<<(23-hour) * 60 + (60-min)<<endl;
    }
    //A Sebastian Production
    return 0;
}