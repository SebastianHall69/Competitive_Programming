/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 4, 2020, 6:02 PM
 * Purpose: Codeforces practice http://codeforces.com/contest/734/problem/B
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int two = 0, three = 0, five = 0, six = 0;
    int sum = 0, val = 0;
    
    //Read in numbers
    cin>>two>>three>>five>>six;
    
    //Find max 256's that can be made
    val = min(two, min(five, six));
    sum += val * 256;
    two -= val;
    
    //Find max 32's that can be made
    val = min(two, three);
    sum += val * 32;
    
    //Output results
    cout<<sum<<endl;
    
    //A Sebastian Production
    return 0;
}