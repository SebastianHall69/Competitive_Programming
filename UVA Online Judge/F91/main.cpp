/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 24, 2019, 11:15 AM
 * Purpose: Implement the F91 recursive function
 */

#include <iostream>
using namespace std;

int f91(int n);

int main(int argc, char** argv) {
    //Declare variables
    int n = 0;
    
    cin>>n;
    
    while(n != 0) {
        cout<<"f91("<<n<<") = "<<f91(n)<<endl;
        cin>>n;
    }

    //A Sebastian Production
    return 0;
}

int f91(int n) {
    if(n <= 100) return f91(f91(n + 11));
    else return n - 10;
}