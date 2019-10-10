/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on October 9, 2019, 5:57 PM
 * Purpose: Read in and score Yahtzee game
 */

#include <iostream>

using namespace std;

int main() {
    //Declare variables
    int numRolls = 13, len = 6;//13 rolls, 5 dice per roll plus flag for roll used
    int rolls[numRolls][len];
    int scorecard[2][15];//Scorecard
    
    
    //Read in lines
    for(int i = 0; i < numRolls; ++i) {
        cin>>rolls[i][0]>>rolls[i][1]>>rolls[i][2]>>rolls[i][3]>>rolls[i][4];//Read in five dice
        rolls[i][5] = 0;//Set roll used flag to false
    }
    
    
    //Judge rolls
    for(int i = 0; i < numRolls; ++i) {
        int numDice[] = {0,0,0,0,0,0};//Counts the number of each face that occurs
        
        //Check for 5 of kind, 4 of kind, 3 of kind, full house
        for(int j = 0; j < len -1; ++j) {//For each value excluding flag
            numDice[rolls[i][j] - 1]++;//Increment element in numDice array that corresponds to value in rolls
        }
        
        
    }
    
    
    //Output results
    for(int i = 0; i < numRolls; ++i) {
        for(int j = 0; j < len; ++j)
            cout<<rolls[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}