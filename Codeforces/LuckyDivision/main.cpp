/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 4, 2020, 7:30 PM
 * Purpose: http://codeforces.com/problemset/problem/122/A
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int size = 14;
    int badIdea [size] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int num = 0;
    bool flag = true;
    
    //Get number
    cin>>num;
    
    //See if almost lucky
    for(int i = 0; i < size; ++i)
        if(num % badIdea[i] == 0) {
            cout<<"YES"<<endl;
            flag = false;
            i = size;
        }
    
    //Output if not
    if(flag) cout<<"NO"<<endl;
    //A Sebastian Production
    return 0;
}