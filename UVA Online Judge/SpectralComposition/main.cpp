/* 
 * File:   main.cpp
 * Author: sebastian
 *
 * Created on November 2, 2019, 7:19 PM
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> w;
    int x;
    char c;
    
    //Read in values and push into vector
    while(cin.peek() != '\n') {
        cin>>x;
        w.push_back(x);
        cin.get();
    }
    cin.get();
    
    while(cin>>c) {
        
        if(c == 'Q') {
            int i = 0, j = 0, k = 0;
            cin>>i>>j>>k;
            cin.get();
            
            vector<int> temp(w.begin() + i, w.begin() + j + 1);
            sort(temp.begin(), temp.end());
            cout<<temp[k]<<endl;
            
        } else if(c == 'A') {
            int index = 0;
            cin>>index;
            cin.get();
            int a = w[index];
            int b = w[index+1];
            w[index] = b;
            w[index+1] = a;
        }
    }
    
    
    
    
    return 0;
}