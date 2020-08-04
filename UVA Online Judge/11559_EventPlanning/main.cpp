//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=27&page=show_problem&problem=2595
#include <bits/stdc++.h>
using namespace std;

int main() {
    //Declare variables
    int n = 0, b = 0, h = 0, w = 0;

    //Read until end of file
    while(scanf("%i%i%i%i", &n, &b, &h, &w) != EOF) {
        int ans = 1e7, price = 0, rooms = 0;

        //For each hotel
        for(int i = 0; i < h; ++i) {
            scanf("%i", &price);
            
            //For each week
            for(int j = 0; j < w; ++j) {
                scanf("%i", &rooms);
                if(rooms >= n) ans = min(ans, price);
            }
        }

        //Output answer, if no room found or over budget 
        if(n * ans > b) {
            printf("stay home\n");
        } else {
            printf("%i\n", ans * n);
        }
    }

    //A Sebastian Production
    return 0;
}
