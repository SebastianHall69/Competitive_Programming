/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 16, 2019, 3:28 PM
 * Purpose: 2018 Problem 9 Swamp County Roads Toll Roads
 */

//System libraries
#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    bool flag = true;//While first input still taking effect
    short index = 0;
    const short SIZE = 37;//Num possible alphanumerical chars
    const short LIC_LEN = 9;//Length of license + \0
    char chars [SIZE] = {};//Given chars
    float probs [SIZE] = {};//Given probability
    char license [9];//License read in
    
    //Read in characters and probabilities
    while(flag) {
        cin>>chars[index];//Get char
        chars[index] = toupper(chars[index]);//Uppercase in case it isn't
        cin>>probs[index];//Get probability
        cin.ignore();//Remove end of line
        ++index;//Increment index
        
        //If next line is empty break from loop
        if(cin.peek() == '\n')flag=false;
    }
    cin.ignore();
    
    //Read each license and print probability
    short listLen = strlen(chars);//Length of chars to test against
    while(cin.getline(license, LIC_LEN)) {
        float prob = 1.0f;
        for(short i = 0; i < strlen(license); ++i) {
            float mult = 1.0f;
            for(short j = 0; j < listLen; ++j) {
                if(license[i] == chars[j]) {
                    mult = probs[j];
                    j = listLen;
                }
            }
            prob *= mult;
        }
        cout<<fixed<<setprecision(3)<<prob<<endl;
    }
    
    //A Sebastian Production
    return 0;
}