/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 18, 2019, 9:54 AM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    string line;
    int index = 0;
    bool open = true;
    
    while(getline(cin, line)) {
        index = line.find("\"");
        while(index != string::npos) {
            line.replace(index, 1, (open) ? "``" : "''");
            open = !open;
            index = line.find("\"");
        }
        cout<<line<<endl;
    }

    //A Sebastian Production
    return 0;
}

