/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on November 21, 2019, 11:34 PM
 * Purpose: Determine in which quadrant residents live given point of 
 *          division and point of residents housing
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0, ox = 0, oy = 0;//Number of cases, origin x, origin y
    int x = 0, y = 0;
    char loc[8];
    
    //Read in number of cases
    cin>>n;
    
    while(n != 0) {
        //Read in origin points
        cin>>ox>>oy;
        
        for(int i = 0; i < n; ++i) {
            //Read in house location
            cin>>x>>y;
            
            //Set country in
            if(x > ox && y > oy) strcpy(loc, "NE");
            else if(x > ox && y < oy) strcpy(loc, "SE");
            else if(x < ox && y > oy) strcpy(loc, "NO");
            else if(x < ox && y < oy) strcpy(loc, "SO");
            else strcpy(loc, "divisa");
            
            //Output results
            cout<<loc<<endl;
        }
        
        //Read in next number of cases
        cin>>n;
    }

    //A Sebastian Production
    return 0;
}

