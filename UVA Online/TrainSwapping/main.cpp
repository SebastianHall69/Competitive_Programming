/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 19, 2019, 11:46 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int cases = 0;
    int numTrains = 0;
    
    //Loop for each case
    cin>>cases;
    
    for(int i = 0; i < cases; ++i) {
        //Read in train numbers
        cin>>numTrains;
        int trains[numTrains];
        for(int i = 0; i < numTrains; ++i)
            cin>>trains[i];
        
        //Bubble sort trains
        bool swap = false;
        int temp = 0;
        int count = 0;
        
        do {
            swap = false;
            for(int i = 0; i < numTrains - 1; i++) {
                if(trains[i] > trains[i+1]) {
                    temp = trains[i];
                    trains[i] = trains[i+1];
                    trains[i+1] = temp;
                    swap = true;
                    ++count;
                }
            }
        } while(swap);
        
        //Output answers
        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }

    //A Sebastian Production
    return 0;
}

