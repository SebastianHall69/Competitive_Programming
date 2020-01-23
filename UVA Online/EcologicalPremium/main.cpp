/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on November 18, 2019, 2:33 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n = 0;
    cin>>n;
    for(int i = 0; i < n; ++i) {
        long long sum = 0;
        int m = 0;
        cin>>m;
        for(int j = 0; j < m; ++j) {
            long long a = 0, b = 0, c = 0;
            cin>>a>>b>>c;
            sum += (b == 0) ? 0 : a * c;
        }
        cout<<sum<<endl;
    }
    //A Sebastian Production
    return 0;
}