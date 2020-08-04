/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 21, 2019, 11:58 PM
 * Purpose: Take number and sum all digits of that number, 
 *          repeat until num digits is less than 10
 */

#include <iostream>
#include <string>
using namespace std;

typedef unsigned long long ull;

int main(int argc, char** argv) {
    //Declare variables
    string input;
    
    getline(cin, input);
    while(input != "0") {
        //Declare variables
        ull sum = 0ULL;
        
        //Determine number to output
        while(input.size() > 1) {
            for(int i = 0; i < input.size(); ++i) {
                sum += (ull) input[i] - '0';
            }
            input = to_string(sum);
            sum = 0ULL;
        }
        
        //Output results
        cout<<input<<endl;
        
        getline(cin, input);
    }

    //A Sebastian Production
    return 0;
}