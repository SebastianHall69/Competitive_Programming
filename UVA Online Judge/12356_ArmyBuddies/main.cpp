//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=278&page=show_problem&problem=3778
#include <bits/stdc++.h>
using namespace std;

int main() {
    //Declare variables
    int n = 0, b = 0;

    while(scanf("%d%d", &n, &b), (n || b)) {
        //Initialize set of people
        set<int> s;
        for(int i = 1; i <= n; ++i) s.insert(s.end(), i);

        //Go through each report
        for(int i = 0; i < b; ++i) {
            int l = 0, r = 0;
            
            //Read in indices
            scanf("%d%d", &l, &r);

            //Remove indices
            set<int>::iterator start = lower_bound(s.begin(), s.end(), l), end = upper_bound(s.begin(), s.end(), r);
            while(start != end) {
                start = s.erase(start);
            }

            //Find new left and right
            end = upper_bound(s.begin(), s.end(), r);
            start = lower_bound(s.begin(), s.end(), l);

            //Output answer
            if(start == s.begin()) {
                if(end == s.end()) printf("* *\n");
                else printf("* %i\n", *end);
            } else {
                --start;
                if(end == s.end()) printf("%i *\n", *start);
                else printf("%i %i\n", *start, *end);
            }
        }

        //Output spacing between each case
        printf("-\n");
    }
    //A Sebastian Production
    return 0;
}
