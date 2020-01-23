/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 22, 2019, 2:38 AM
 * Purpose: Find the number of student who are above average in their class
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0, size = 0, *scores;
    double average = 0.0, amnt = 0.0;
    
    //Read in number of test cases
    cin>>n;
    
    //Loop for each test case
    for(int i = 0; i < n; ++i) {
        cin>>size;
        
        //Save class scores and calculate average
        scores = new int[size];
        for(int j = 0; j < size; ++j) {
            cin>>scores[j];
            average += scores[j];
        }
        average /= size;
        
        //Get percent below average
        for(int j = 0; j < size; ++j) {
            if(scores[j] > average) ++amnt;
        }
        amnt = amnt / size * 100;
        
        //Output results
        printf("%.3f%%\n", amnt);
        
        //Prepare for next iteration
        delete [] scores;
        average = 0.0;
        amnt = 0.0;
    }

    //A Sebastian Production
    return 0;
}