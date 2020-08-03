/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 9, 2020, 10:21 AM
 * Purpose: http://codeforces.com/contest/550/problem/A
 */

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    char * str = new char[100001];
    int size = 0;
    vector<pair<int, int> > ab;
    vector<pair<int, int> > ba;
    
    //Read in string
    while(cin>>str[size++]) {}
    
    //Search for all AB and BA in string
    for(int i = 0; i < size; ++i) {
        if(str[i] == 'A' && i + 1 < size) {//Possible AB substring
            if(str[i + 1] == 'B')//If correct string
                ab.push_back(make_pair(i, i + 1));//Add to vector
        } else if(str[i] == 'B' && i + 1 < size) {//Possible BA substring
            if(str[i + 1] == 'A')//If correct string
                ba.push_back(make_pair(i, i + 1));//Add to vector
        }
    }
    
    //Delete string
    delete [] str;
    
    //Check combinations of substrings looking for non overlapping
    for(int i = 0; i < ab.size(); ++i) {
        for(int j = 0; j < ba.size(); ++j) {
            if((ab[i].first != ba[j].second) && (ab[i].second != ba[j].first)) {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    
    //Output no if none found
    cout<<"NO"<<endl;
    

    //A Sebastian Production
    return 0;
}