/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on March 26, 2020, 11:36 AM
 * Purpose: http://codeforces.com/problemset/problem/705/A
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    //Fast IO
    ios::sync_with_stdio(false);

    //Declare variables
    int n = 0;
    
    //Read in the size
    cin>>n;
    
    //Do it for everyone except the last one
    for(int i = 0; i < n - 1; ++i) {
        cout<<((i % 2 == 1) ? "I love that " : "I hate that ");
    }
    
    //Output the last one
    if(n % 2 == 0)
        cout<<"I love it"<<endl;
    else
        cout<<"I hate it"<<endl;

    //A Sebastian Production
    return 0;
}