/*
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on October 9, 2019, 2:06 PM
 * Purpose: minesweeper
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    //Declare variables
    unsigned int row = 0, col = 0, count = 0;
    char **minefield;

    //Initial reading of row and columns of minefield
    cin>>row>>col;
    cin.ignore();//Flush newline from input buffer

    //Do while row and col =/= 0
    do{
        //Create minefield and read in data
        minefield = new char*[row];//Create array that points to char pointers
        for(int i = 0; i < row; ++i) {
            minefield[i] = new char[col + 1];//Fill each element of array with char array of size col + 1 for newline
            cin.getline(minefield[i], col + 1, '\n');//Read in minefield a line at a time
        }

        //Set numbers in field
        for(int i = 0; i < row; ++i) {//For each row
            for(int j = 0; j < col; ++j) {//For each element in each row excluding newline
                unsigned int numMines = 0;//Number of mines found

                //Count mines
                for(int testRow = (i>0)?i-1:0; (testRow <= (i+1)) && (testRow < row); ++testRow) {
                    for(int testCol = (j>0)?j-1:0; (testCol <= (j+1)) && (testCol < col);++testCol) {
                        if(minefield[testRow][testCol] == '*')
                            ++numMines;
                    }
                }

                //Put number in minefield if current element is not a mine
                if(minefield[i][j] != '*')
                    minefield[i][j] = '0' + numMines;
            }
        }

        //Output field
        printf("Field #%u:\n", ++count);
        for(int i = 0; i < row; ++i) {
            cout<<minefield[i]<<endl;
        }

        //Deallocate data
        for(int i = 0; i < row; ++i) {
            delete [] minefield[i];
        }
        delete [] minefield;

        //Read in next row and column
        cin>>row>>col;
        cin.ignore();//Flush newline from input buffer

	//Because of strange required formatting reasons
        if(row != 0 && col != 0)
            cout<<endl;

    } while(row != 0 && col != 0);

    //A Sebastian Production
    return 0;
}
