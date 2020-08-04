/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on November 22, 2019, 2:28 AM
 * Purpose: Basically find the highest in each list
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0;
    int highest = 0;
    int val = 0;
    int student = 0;
    
    //Read in num cases
    cin>>n;
    
    
    for(int i = 0; i < n; ++i) {
        //Find highest
        cin>>student;
        for(int j = 0; j < student; ++j) {
            cin>>val;
            if(val > highest) highest = val;
        }
        
        //Output results
        cout<<"Case "<<i+1<<": "<<highest<<endl;
        
        //Prepare for next iteration
        highest = 0;
    }

    //A Sebastian Production
    return 0;
}

