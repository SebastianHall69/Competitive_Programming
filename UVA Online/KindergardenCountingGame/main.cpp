/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 18, 2019, 4:37 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    string line;
    bool start = false;
    
    while(getline(cin, line)) {
        int count = 0;
        for(int i = 0; i < line.size(); ++i) {
            char a = line[i];
            if(a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z') {
                if(!start) {
                    ++count;
                    start = true;
                }
            } else {
                start = false;
            }
        }
        cout<<count<<endl;
    }

    //A Sebastian Production
    return 0;
}

