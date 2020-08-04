/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 20, 2019, 12:09 AM
 * Purpose:
 */

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

bool check(string);

int main(int argc, char** argv) {
    //Declare variables
    int cases = 0;
    string numstr;
    long long num = 0LL, revnum = 0LL;
    
    cin>>cases;
    cin.ignore();
    for(int i = 0; i < cases; ++i) {
        getline(cin, numstr);//Read in number
        int count = 0;
        
        do {
            num = atoll(&numstr[0]);//Convert to LL
            reverse(numstr.begin(), numstr.end());//Reverse number
            revnum = atoll(&numstr[0]);//Convert to ULL
            num += revnum;//Add numbers
            numstr = to_string(num);//Convert back to string
            ++count;//Increment count
        } while(!check(numstr));
        
        cout<<count<<" "<<numstr<<endl;
    }
    //A Sebastian Production
    return 0;
}

bool check(string str) {//Check if string is palindrome
    int half = str.size() / 2;
    string first = str.substr(0, half);
    string second = str.substr(str.size() - half, half);
    reverse(second.begin(), second.end());
    return (first == second);
}