/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on May 27, 2020, 1:35 AM
 * Purpose: To make us look less bad at last years icpc (2019 Southern California Regional)
 */

#include <bits/stdc++.h>
using namespace std;


int main() {
    //Declare variables
    int arr[28],    //Array to hold alphabet   7 * (7 + 1) / 2
            ind = 0,//Index of alphabet array
            count = 0;//Count of letters
    string input;//Input string given
    long long ans = 0;//Calculated answer
    memset(arr, 0, 28 * sizeof(int));//Clear array
    
    //Read input
    getline(cin, input);
    
    //Count frequencies of letters
    for(int i = 0; i < input.size(); ++i) {
        if(isalpha(input[i])) {
            ++count;
            ++arr[tolower(input[i]) - 'a'];
        }
    }
    
    //Add 3 for each space between letter
    ans += max((count - 1) * 3, 0);
    
    //Sort frequencies to get most commonly occurring number first
    sort(arr, arr + 28, greater<int>());
    
    //Do the pattern stuff that I found
    for(int i = 1; i <= 7; ++i)
        for(int j = 0; j < i; ++j)
            ans += (2 * i - 1) * arr[ind++];
    
    //Output answer
    cout<<ans<<endl;
    
    //A Sebastian Production
    return 0;
}