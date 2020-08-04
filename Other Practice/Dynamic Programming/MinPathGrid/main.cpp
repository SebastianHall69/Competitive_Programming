/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 28, 2020, 9:38 PM
 * Purpose: NOT A PROBLEM, JUST PRACTICE
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    //Declare variables
    int row = 0, col = 0;
    
    //Get row & col size
    cout<<"Enter row and col: ";
    cin>>row>>col;
    
    //Get weight map
    int weight[row + 1][col + 1], dp[row + 1][col + 1];
    cout<<"Enter array\n";
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            cin>>weight[i][j];
            dp[i][j] = 2e9;
        }
    }
    
    //Fill out dp table
    dp[0][0] = weight[0][0];
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + weight[i][j + 1]);//Right
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + weight[i + 1][j]);//Down
        }
    }
    
    //Output dp table
    cout<<"table\n";
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            cout<<setw(2)<<left<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //Output answer
    cout<<"answer: "<<dp[row - 1][col - 1]<<endl;

    //A Sebastian Production
    return 0;
}