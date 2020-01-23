/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on November 21, 2019, 11:13 PM
 * Purpose: Count the minimum number of bricks moved to make all wall 
 *          segemnts the same length, basically make all elements of array
 *          the same size.
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int size = 0, average = 0, moves = 0, count = 0;
    int *blocks;
    
    cin>>size;
    
    while(size > 0) {
        //Initialize
        moves = 0;
        blocks = new int[size];
        average = 0;
        
        //Read in block sizes, find average
        for(int i = 0; i < size; ++i) {
            cin>>blocks[i];
            average += blocks[i];
        }
        
        average /= size;
        
        for(int i = 0; i < size; ++i) {
            if(blocks[i] > average) moves += blocks[i] - average;
        }
        
        //Output
        cout<<"Set #"<<++count<<endl;
        cout<<"The minimum number of moves is "<<moves<<"."<<endl<<endl;
        
        //Prepare for next iteration
        delete [] blocks;
        cin>>size;
    }

    //A Sebastian Production
    return 0;
}

