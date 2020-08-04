/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on October 23, 2019, 5:29 PM
 */

#include <iostream>
using namespace std;

int numSteps(int,int);

int main(){
    //Declare variables
    int numCases = 0;
    int x = 0;
    int y = 0;
    
    //Read in num cases
    cin>>numCases;
    
    //Find and output step length for each
    for(int i = 0; i < numCases; ++i) {
        cin>>x>>y;
        cout<<numSteps(x,y)<<endl;
    }
    
    //A Sebastian Production
    return 0;
}

int numSteps(int x, int y) {
    //Declare variables
    int stepLen = 1;
    int numSteps = 0;
    int sum = 0;
    
    //Swap numbers if given in bad order
    if(x > y) {
        int temp = x;
        x = y;
        y = x;
    }
    
    //Count number of steps
    while(x < y) {
        x += stepLen;
        ++numSteps;
        
        sum = (stepLen+1)*(stepLen+2)/2;//Sum if stepLen is incremented for next iteration
        if(sum <= (y-x))//If sum is less than or equal to remaining amount then increment it
            ++stepLen;
        
        sum = (stepLen)*(stepLen+1)/2;//Sum of stepLen for next iteration without incrementing
        if(sum > (y-x))//If sum of greater than remaining then decrement it
            --stepLen;
    }
    
    //Return value
    return numSteps;
}