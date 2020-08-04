/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 8, 2020, 2:02 PM
 * Purpose: https://codeforces.com/contest/1365/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int t = 0, n = 0, m = 0, x = 0;;

    cin>>t;

    for(int i = 0; i < t; ++i) {
        //Read in row and col size
        cin>>n>>m;
        int row[n], col[m];//Arrays to indicate available row/col
        fill(row, row + n, 1), fill(col, col + m, 1);//Fill with 1 to show available

        //Read in matrix
        for(int j = 0; j < n; ++j)
            for(int k = 0; k < m; ++k) {
                cin>>x;
                if(x) row[j] = col[k] = 0;//If x != 0 then set row and col to 0 to say used
            }
        
        //Add up open rows and columns, take min, if odd ashish wins, else vivek wins
        cout<<(min(accumulate(row, row + n, 0), accumulate(col, col + m, 0)) & 1 ? "Ashish\n" : "Vivek\n");
    }

    //A Sebastian Production
    return 0;
}
