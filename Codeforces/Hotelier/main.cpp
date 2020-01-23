/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 22, 2020, 8:54 PM
 * Purpose: https://codeforces.com/contest/738/problem/B
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    int row = 0, col = 0;//Rows and columns of stage
    int ** stage = nullptr;//Stage with positions
    int count = 0;//Count of lights

    //Create array of stage
    cin>>row>>col;
    stage = new int*[row];
    for(int i = 0; i < row; ++i) {
        stage[i] = new int[col];
    }

    //Read in array
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            cin>>stage[i][j];
        }
    }

    //For each spot on the stage
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            //If current position is an actor
            if(stage[i][j] == 1) {
                int r = i;//Starting on current row
                int c = j - 1;//Starting one left of actor

                //Check to left of actor
                while(c >= 0 && stage[r][c] != 1) {
                    ++count;
                    --c;
                }
                c = j + 1;//Starting one right of actor

                //Check to right of actor
                while(c < col && stage[r][c] != 1) {
                    ++count;
                    ++c;
                }
                c = j;//Reset col position
                r = i - 1;//One above actor

                //Check above actor
                while(r >= 0 && stage[r][c] != 1) {
                    ++count;
                    --r;
                }
                r = i + 1;//One below actor

                //Check below actor
                while(r < row && stage[r][c] != 1) {
                    ++count;
                    ++r;
                }
            }
        }
    }


    //Output results
    cout<<count<<endl;

    //Deallocate space
    for(int i = 0; i < row; ++i) { 
        delete [] stage[i];
    }
    delete [] stage;

    return 0;
}