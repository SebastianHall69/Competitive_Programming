/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 18, 2019, 8:02 PM
 * Purpose:
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int a = 0, b = 0;
    bool flag = true;
    
    cin>>a>>b;
    while(flag) {
        int count = 0;
        int carry = 0;
        int size = 0;
        string num1 = to_string(a);
        string num2 = to_string(b);
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        size = (num1.size() >= num2.size()) ? num1.size() : num2.size();
       
        for(int i = 0; i < size; ++i) {
            a = (i < num1.size()) ? num1[i] - 48 : 0;
            b = (i < num2.size()) ? num2[i] - 48 : 0;
            carry = (a + b + carry) / 10;
            if(carry > 0) ++count;
        }
        
        if(count == 0) {
            cout<<"No carry operation."<<endl;
        } else if(count > 1) {
            cout<<count<<" carry operations."<<endl;
        } else {
            cout<<"1 carry operation."<<endl;
        }
        
        cin>>a>>b;
        if(a == 0 && b == 0) flag = false;
    }
    
    //A Sebastian Production
    return 0;
}

