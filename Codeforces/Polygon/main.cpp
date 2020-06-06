/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 26, 2020, 3:43 PM
 * Purpose: http://codeforces.com/contest/1360/problem/E
 */

#include <bits/stdc++.h>
using namespace std;


int main() {
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        int n = 0;
        bool ans = true;
        cin>>n;
        
        //Create matrix
        char **arr = new char*[n];
        for(int j = 0; j < n; ++j) arr[j] = new char[n];
        
        //Fill matrix
        for(int j = 0; j < n; ++j)
            for(int k = 0; k < n; ++k)
                cin>>arr[j][k];
        
        
        //Go through each cell
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                
                //If cell has cannon ball, else ignore
                if(arr[j][k] == '1') {
                    bool below = true, right = true;
                    
                    //Check if below does not have ball
                    if(j + 1 < n && arr[j + 1][k] == '0') below = false;
                    
                    //Check if right does not have ball
                    if(k + 1 < n && arr[j][k + 1] == '0') right = false;
                    
                    //If has neither then bad matrix, end search
                    if(!(below || right)) {
                        ans = false;
                        goto placeWhereIOutputTheAnswer;
                    }
                }
            }
        }
        
placeWhereIOutputTheAnswer:
        
        //Output answer
        cout<<(ans ? "YES\n" : "NO\n");
        
        //Delete matrix
        for(int j = 0; j < n; ++j) delete [] arr[j];
        delete [] arr;
    }
    
    //A Sebastian Production
    return 0;
}