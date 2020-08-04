/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 26, 2020, 3:02 AM
 * Purpose: https://www.codechef.com/MARCH19B/problems/JAIN/
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;
    
    cin>>t;
    
    for(int i = 0; i < t; ++i) {
        //Declare variables
        int n = 0;
        
        //Read in number of strings
        cin>>n;
        
        //Create and initialize array to represent count frequency of bit representation of numbers
        int arr[32];
        fill(arr, arr + 32, 0);
        
        //Read in each string
        for(int j = 0; j < n; ++j) {
            int rep = 0;//Bit representation
            string str;
            
            cin>>str;
            
            //For each character set its bit until no more characters or all 5 bits are set
            for(int k = 0; k < str.size() && rep != 31; ++k) {
                switch(str[k]) {
                    case 'a': rep |= 1; break;
                    case 'e': rep |= 2; break;
                    case 'i': rep |= 4; break;
                    case 'o': rep |= 8; break;
                    case 'u': rep |= 16; break;
                    default: break;
                }
            }
            
            //Add to frequency
            ++arr[rep];
        }
        
        //Count total that have all 5 bits set
        int total = 0;
        for(int j = 0; j < 31; ++j) {
            for(int k = j + 1; k < 32; ++k) {
                if((j | k) == 31) total += arr[j] * arr[k];
            }
        }
        
        //Last combination, all full bits, can be added to each other
        total += (arr[31] * arr[31] - 1) / 2;
        
        
        //Output answer
        cout<<total<<endl;
    }

    //A Sebastian Production
    return 0;
}