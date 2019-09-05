/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 *
 * Created on September 4, 2019, 5:15 PM
 */
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Set seed
    srand(static_cast<unsigned>(time(0)));
   
    //Declare Variables
    short n = 0, m = 0, max = 256;
    
    //Get n and m from user
    cout<<"Enter size of N x N array: ";
    cin>>n;
    cout<<"Enter odd size of M x M window: ";
    cin>>m;
    cout<<endl;
   
    //Create array
    short arr[n][n], modArr[n][n];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            arr[i][j] = rand() % max;//0-255
        }
    }
   
    //Smooth array
    for(int row = 0; row < n; ++row) {//For each row in n x n
        for(int col = 0; col < n; ++col) {//For each col in each row
            short divisor = 0, sum = 0,avg = 0;//Declare variables
            for(short newRow = row - m / 2; newRow <= (row + m / 2); ++newRow) {//For each row of m x m window
                for(short newCol = col - m / 2; newCol <= (col + m / 2); ++newCol) {//For each column of each row
                    if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < n) {//If in bounds of n x n array
                        sum += arr[newRow][newCol];//Add that value to sum
                        divisor++;//Increment divisor
                    }
                }
            }
            avg = sum / divisor;//Get average
            modArr[row][col] = avg;//Set average in modified array
        }
    }
   
    //Display original array
    cout<<"Original Array"<<endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout<<setw(4)<<left<<arr[i][j];
        }
        cout<<endl;
    }
    
    //Display smoothed array
    cout<<endl<<endl<<"Smoothed Array"<<endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout<<setw(4)<<left<<modArr[i][j];
        }
        cout<<endl;
    }
    return 0;
}