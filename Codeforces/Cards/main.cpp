/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 15, 2020, 10:03 PM
 * Purpose: https://codeforces.com/contest/701/problem/A
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0, low = 101, high = -1, sum = 0;
    vector<int> vec;
    
    //Read in vector size and resize vector
    cin>>n;
    vec.resize(n);
    
    //Read in values and find the highest and lowest values
    for(int i = 0; i < n; ++i) {
        cin>>vec[i];
        low = (vec[i] < low) ? vec[i] : low;
        high = (vec[i] > high) ? vec[i] : high;
    }
    
    //Calculate sum needed for each player
    sum = high + low;
    
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(vec[i] + vec[j] == sum) {
                cout<<(i + 1)<<" "<<(j + 1)<<endl;
                vec[i] = 0;
                vec[j] = 0;
            }
        }
    }
    

    //A Sebastian Production
    return 0;
}
