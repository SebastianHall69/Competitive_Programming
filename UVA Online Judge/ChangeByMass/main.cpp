/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sebastian
 *
 * Created on October 12, 2019, 10:15 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int change = 0, hd = 0;
    bool newline = false;
    
    
    //While change can be read in
    while(cin>>change>>hd) {
        int arr [5] = {0,0,0,0,0};//Array of coins returned
        //Create change amount
        while(change > 0) {
            if(hd > 0 && change >= 50) {
                --hd;
                arr[0]++;
                change -= 50;
            } else if(change >= 25) {
                arr[1]++;
                change -= 25;
            } else if(change >= 10) {
                arr[2]++;
                change -= 10;
            } else if(change >= 5) {
                arr[3]++;
                change -= 5;
            } else {
                arr[4]++;
                change -= 1;
            }
        }
    
        //Output amount
        bool flag = false;
        if(newline) cout<<endl;
        if(arr[0] > 0){
            cout<<arr[0]<<"x50";
            flag = true;
        } if(arr[1] > 0){
            cout<<((flag)?" ":"")<<arr[1]<<"x25";
            flag = true;
        } if(arr[2] > 0){
            cout<<((flag)?" ":"")<<arr[2]<<"x10";
            flag = true;
        } if(arr[3] > 0){
            cout<<((flag)?" ":"")<<arr[3]<<"x5";
            flag = true;
        } if(arr[4] > 0){
            cout<<((flag)?" ":"")<<arr[4]<<"x1";
        }
        newline = true;
    }
    return 0;
}