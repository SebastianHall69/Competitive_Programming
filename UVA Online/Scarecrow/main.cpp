/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on November 21, 2019, 10:08 PM
 * Purpose: Calculate the required number of scarecrows on the field
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int cases = 0, n = 0;
    char spot;
    
    cin>>cases;
    
    for(int i = 0; i < cases; ++i) {
        int consec = 0, crows = 0;
        cin>>n;
        cin.ignore();
        
        for(int j = 0; j < n; ++j) {
            cin>>spot;
            if(spot == '.') {
                ++consec;
            } else if(cin.peek() == '.' && consec % 3 == 1) {//Case of one infertile plot surrounded by two available fertile plots
                crows += ceil(consec / 3.0);
                consec = -1;//To take care of next plot already covered
            } else {
                crows += ceil(consec / 3.0);
                consec = 0;
            }
        }
        
        //Remaining plots after all infertile
        crows += ceil(consec / 3.0);
        
        cout<<"Case "<<i+1<<": "<<crows<<endl;
    }

    //A Sebastian Production
    return 0;
}