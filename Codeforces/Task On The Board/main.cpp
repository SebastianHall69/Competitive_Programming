/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 18, 2020, 12:15 AM
 * Purpose: https://codeforces.com/contest/1367/problem/D
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        //Declare variables
        string s;
        int m = 0, *b = nullptr;
        char *ans = nullptr;
        bool *used = nullptr;
        map<char, int> freq;
        bool cont = true;

        //Read in input, create arrays
        cin>>s>>m;
        b = new int[m];
        ans = new char[m];
        used = new bool[m];
        for(int j = 0; j < m; ++j) cin>>b[j]; 
        fill(used, used + m, false);

        //Count letter frequency
        for(int j = 0; j < s.size(); ++j) ++freq[s[j]];
        
        //Construct string while string is not created
        map<char, int>::reverse_iterator cur = freq.rbegin();
        do {
            cont = accumulate(b, b + m, 0);//Update exit flag based on sum of b before updating
            vector<int> zeroInd;

            //Find number of zeroes, how many of highest letter
            for(int j = 0; j < m; ++j) if(b[j] == 0 && !used[j]) zeroInd.push_back(j);

            //Find first letter with enough characters to fill num zeroes
            while(cur->second < zeroInd.size()) { ++cur; }

            //Fill answer array with char at index of zeroes
            for(int j = 0; j < zeroInd.size(); ++j) {
                ans[zeroInd[j]] = cur->first;
                used[zeroInd[j]] = true;//Mark b[j] used so it won't be used again
            }

            //For each index with value 0 subtract distance from other indices
            for(int j = 0; j < zeroInd.size(); ++j) {
                for(int k = 0; k < m; ++k) {
                    if(!used[k]) b[k] -= abs(zeroInd[j] - k);
                }
            }
            
            //Move to next letter, can't use the same twice
            ++cur;
        } while(cont);

        //Output answer string
        for(int j = 0; j < m; ++j) cout<<ans[j];
        cout<<endl;

        //Deallocate memory
        delete [] b;
        delete [] ans;
        delete [] used;
    }



    //A Sebastian Production
    return 0;
}