/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on November 21, 2019, 1:25 PM
 * Purpose: Calculate the total degrees of a combination 
 *          lock turned given starting position and numbers
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int start = 0, one = 0, two = 0, three = 0;
    bool flag = true;
    const int INC = 9;
    
    cin>>start>>one>>two>>three;
    while(flag) {
        int sum = 1080;
        sum += INC * ((start >= one) ? start - one : start - one + 40);
        sum += INC * ((one > two) ? 40 - one + two : (one == two) ? 0 : two - one);
        sum += INC * ((two >= three) ? two - three : two - three + 40);
        cout<<sum<<endl;
        cin>>start>>one>>two>>three;
        if(start == 0 && one == 0 && two == 0 && three == 0)
            flag = false;
    }
    
    return 0;
}

