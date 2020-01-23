/* 
 * File:   main.cpp
 * Author: sebastian
 *
 * Created on October 12, 2019, 11:02 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    int input = 0;
    
    
    //Loop while getting input
    while(cin>>input) {
        int sum = 1, count = 1;
        for(; sum < input; sum += ++count) {}
        if(sum == input)
            cout<<count;
        else
            cout<<"bad";
        cout<<endl;
    }
    return 0;
}

