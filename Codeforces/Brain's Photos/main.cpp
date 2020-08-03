/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 22, 2020, 8:01 PM
 * Purpose: https://codeforces.com/contest/707/problem/A
 */

    #include <iostream>
    using namespace std;
     
    int main(int argc, char** argv) {
        char c;
        int row = 0, col = 0;
        
        //Get row and col
        cin>>row>>col;
        
        for(int i = 0; i < row * col; ++i) {
            cin>>c;
            if(c == 'C' || c == 'Y' || c == 'M') {
                cout<<"#Color"<<endl;
                return 0;
            }
        }
        cout<<"#Black&White"<<endl;
        
        return 0;
    }