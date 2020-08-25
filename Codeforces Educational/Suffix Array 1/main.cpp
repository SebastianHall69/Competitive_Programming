/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on August 17, 2020, 5:17 PM
 * Purpose: ITMO course pilot on codeforces https://codeforces.com/edu/course/2/lesson/2/1
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    string str;
    int k = 0;
    
    //Read in string
    cin>>str;
    
    //Add ending character
    str += "$";
    
    //Create equivalence classes and suffix array
    vector<int> eq(str.size()), suffix(str.size());
    
    
    {
        //Sort each character in string and keep index with it
        vector<pair<char, int> > v(str.size());
        for(int i = 0; i < str.size(); ++i) v[i] = {str[i], i};
        sort(v.begin(), v.end());
        
        //Assign sorted order of each char to suffix as with their indices
        for(int i = 0; i < str.size(); ++i) suffix[i] = v[i].second;
        
        //Assign equivalences classes
        eq[suffix[0]] = 0;
        for(int i = 1; i < str.size(); ++i) {
            //If last character is the same as the current character
            if(v[i].first == v[i - 1].first) {
                eq[suffix[i]] = eq[suffix[i - 1]];//Equivalence class of current character is same as last character
            } else {
                eq[suffix[i]] = eq[suffix[i - 1]] + 1;//Same as last character plus one
            }
        }
    }
    
    //Build table for strings
    while((1 << k) < str.size()) {
        //Build vector that tells equivalence classes for left and right halfs of substring of length 1<<k starting at i and the index i
        vector<pair<pair<int, int>, int> > v(str.size());
        for(int i = 0; i < str.size(); ++i) {
            v[i] = {{eq[i], eq[(i + (1 << k)) % str.size()]}, i};
        }
        
        //Sort according to equivalence classes
        sort(v.begin(), v.end());
        
        //Assign sorted order of each char to suffix as with their indices
        for(int i = 0; i < str.size(); ++i) suffix[i] = v[i].second;
        
        //Assign equivalences classes
        eq[suffix[0]] = 0;
        for(int i = 1; i < str.size(); ++i) {
            //If last character is the same as the current character
            if(v[i].first == v[i - 1].first) {
                eq[suffix[i]] = eq[suffix[i - 1]];//Equivalence class of current character is same as last character
            } else {
                eq[suffix[i]] = eq[suffix[i - 1]] + 1;//Same as last character plus one
            }
        }
        
        //Increment k for next round
        ++k;
    }
    
    //Output answers
    for(int i = 0; i < str.size(); ++i) {
        cout<<suffix[i]<<" ";
    }
    
    
    //A Sebastian Production
    return 0;
}