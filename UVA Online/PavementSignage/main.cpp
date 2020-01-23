/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sebastian
 *
 * Created on October 12, 2019, 11:58 AM
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float d = 0, h = 0, a = 0;
    
    const float PI = 3.14159265358979;
    float x,y;
    
    //Read in distance, height, and angle
    cin>>h>>d>>a;
    
    //Read in coordinate
    while(cin>>x>>y){
        float phi = 0, theta = 0;
        
        if(x != -1 && y!= -1){
            //Calculate new y
            float z = atan(d/h);
            y = tan(z + (a*y)*PI/180) * h - d;


            //Round y
            y *= 100;
            y = roundf(y);
            unsigned tmp = y;
            y = tmp / 100.0f;

            //Output
            printf("%.2f %.2f\n",x,y);
        } else printf("\n");
    }
    return 0;
}

