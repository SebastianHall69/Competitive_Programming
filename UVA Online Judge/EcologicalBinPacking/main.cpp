/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 18, 2019, 2:58 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    long bin1[3], bin2[3], bin3[3];
    
    while(cin>>bin1[0]>>bin1[1]>>bin1[2]>>bin2[0]>>bin2[1]>>bin2[2]>>bin3[0]>>bin3[1]>>bin3[2]) {
        long least = 0;
        long moves = 0;
        string code;
        
        //Case bgc
        moves = bin1[1] + bin1[2] + bin2[0] + bin2[2] + bin3[0] + bin3[1];
        least = moves;
        code = "BGC";
        
        //Case bcg
        moves = bin1[1] + bin1[2] + bin2[0] + bin2[1] + bin3[0] + bin3[2];
        if(moves < least) {
            least = moves;
            code = "BCG";
        } else if(moves == least) {
            if(code > "BCG") code = "BCG";
        }
        
        //Case cbg
        moves = bin1[0] + bin1[1] + bin2[1] + bin2[2] + bin3[0] + bin3[2];
        if(moves < least) {
            least = moves;
            code = "CBG";
        } else if(moves == least) {
            if(code > "CBG") code = "CBG";
        }
        
        //Case cgb
        moves = bin1[0] + bin1[1] + bin2[0] + bin2[2] + bin3[1] + bin3[2];
        if(moves < least) {
            least = moves;
            code = "CGB";
        } else if(moves == least) {
            if(code > "CGB") code = "CGB";
        }
        
        //Case gbc
        moves = bin1[0] + bin1[2] + bin2[1] + bin2[2] + bin3[0] + bin3[1];
        if(moves < least) {
            least = moves;
            code = "GBC";
        } else if(moves == least) {
            if(code > "GBC") code = "GBC";
        }
        
        //Case gcb
        moves = bin1[0] + bin1[2] + bin2[0] + bin2[1] + bin3[1] + bin3[2];
        if(moves < least) {
            least = moves;
            code = "GCB";
        } else if(moves == least) {
            if(code > "GCB") code = "GCB";
        }
        
        //Output
        cout<<code<<" "<<least<<endl;
        
    }

    //A Sebastian Production
    return 0;
}

