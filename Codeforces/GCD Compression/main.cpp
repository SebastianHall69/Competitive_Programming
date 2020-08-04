/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 21, 2020, 3:41 PM
 * Purpose: https://codeforces.com/contest/1370/problem/B
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    //Declare variables
    int t = 0;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        int n = 0, x = 0;//Size and var to read in 
        vector<int> even, odd;//Save even and odd num indices

        //Read in size and create array
        cin>>n;

        //Read in 2n data and sort indices for even and odd
        for(int j = 0; j < 2 * n; ++j) {
            cin>>x;
            if(x & 1) odd.push_back(j + 1);//One based index
            else even.push_back(j + 1);
        }

        //Delete two elements
        if(odd.size() & 1) {//If an odd amount of odds and even
            odd.pop_back();
            even.pop_back();
        } else {//Else delete from whichever has more than one element
            if(odd.size() > 1) {//Determine which has two to delete from
                odd.pop_back();
                odd.pop_back();
            } else {
                even.pop_back();
                even.pop_back();
            }
        }

        //Output answer, all have base of two
        for(int j = 0; j < even.size(); j += 2) {//Even pairs
            cout<<even[j]<<" "<<even[j + 1]<<endl;
        }
        
        for(int j = 0; j < odd.size(); j += 2) {//Odd pairs
            cout<<odd[j]<<" "<<odd[j + 1]<<endl;
        }
    }

    return 0;
}
