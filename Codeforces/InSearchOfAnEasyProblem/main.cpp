/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 26, 2020, 11:10 AM
 * Purpose: http://codeforces.com/problemset/problem/1030/A
 */

#include <iostream>

using namespace std;
int main() {
    //Declare variables
    int size = 0, opinion = 0;
    bool hard = false;
    
    //Read in number of people to ask
    cin>>size;
    
    //For each person
    for(int i = 0; i < size; ++i) {
        //Read in their opinion
        cin>>opinion;
        
        //Check if hard or not
        if(opinion == 1) {
            hard = true;
        }
    }
    
    //Output the results
    if(hard) {
        cout<<"HARD"<<endl;
    } else {
        cout<<"EASY"<<endl;
    }

    //A Sebastian Production
    return 0;
}