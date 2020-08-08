#include <bits/stdc++.h>
using namespace std;

int main() {
    //Declare variables
    int a = 0, b = 0;

    while(scanf("%i%i", &a, &b), (a || b)) {
        int  one = 0, two = 0, three = 0, four = 0;
        char big[a][a], small[b][b];

        //Create and read in squares
        for(int i = 0; i < a; ++i) {
            scanf("%s", big[i]);
        }

        for(int i = 0; i < b; ++i) {
            scanf("%s", small[i]);
        }

        //Go through big square looking for small squares
        for(int i = 0; i <= a - b; ++i) {
            for(int j = 0; j <= a - b; ++j) {
                //Look for type one squares
                for(int row = 0; row < b; ++row) {
                    for(int col = 0; col < b; ++col) {
                        if(small[row][col] != big[i + row][j + col]) {
                            goto label_two;
                        }
                    }
                }
                ++one;

label_two:      //Look for type two squares
                for(int col = 0; col < b; ++col) {
                    for(int row = 0; row < b; ++row) {
                        if(small[b - row - 1][col]  != big[i + col][j + row]) {
                            goto label_three;
                        }
                    }
                }
                ++two;

label_three:    //Look for type three squares
                for(int row = 0; row < b; ++row) {
                    for(int col = 0; col < b; ++col) {
                        if(small[b - row - 1][b - col - 1]  != big[i + row][j + col]) {
                            goto label_four;
                        }
                    }
                }
                ++three;

label_four:     //Look for type four squares
                for(int col = 0; col < b; ++col) {
                    for(int row = 0; row < b; ++row) {
                        if(small[row][b - col - 1]  != big[i + col][j + row]) {
                            goto done;
                        }
                    }
                }
                ++four;
done:
                continue;
            }
        }

        //Output answer
        printf("%i %i %i %i\n", one, two, three, four);
    }
}
