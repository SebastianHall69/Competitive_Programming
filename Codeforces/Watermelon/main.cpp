/* 
 * File:   main.cpp
 * Author: sebastian
 * Created on January 22, 2020, 7:56 PM
 * Purpose: https://codeforces.com/contest/4/problem/A
 */

    #include <cstdio>
    using namespace std;
     
    int main(int argc, char** argv) {
        short weightOfTheWatermelonThatIsToBeSplitInHalf = 0;
        scanf("%i", &weightOfTheWatermelonThatIsToBeSplitInHalf);
        if(weightOfTheWatermelonThatIsToBeSplitInHalf % 2 == 0 && weightOfTheWatermelonThatIsToBeSplitInHalf != 2) printf("YES\n");
        else printf("NO\n");
        return 0;
    }