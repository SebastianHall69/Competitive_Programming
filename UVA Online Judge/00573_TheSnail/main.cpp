//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=514
#include <bits/stdc++.h>
using namespace std;

int main() {
    //Declare variables
    double h = 0.0, u = 0.0, d = 0.0, f = 0.0;

    while(cin>>h>>u>>d>>f) {
        //Test exit condition
        if(h == 0) break;

        //Declare variables
        double pos = 0.0, fallDist = u * (f / 100.0);
        int day = 0;

        //Simulate
        while(pos >= 0.0 && pos <= h) {
            ++day;
            pos += max(u, 0.0);
            if(pos > h) break;
            
            u -= fallDist;
            pos -= d;
        }

        //Output answer
        if(pos < 0) {
            printf("failure on day %i\n", day);
        } else {
            printf("success on day %i\n", day);
        }

    }

    //A Sebastian Production
    return 0;
}
