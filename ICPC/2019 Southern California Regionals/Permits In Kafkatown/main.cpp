#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, ans = 1;
    
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; ++i) cin>>arr[i];
    for(int i = 0; i < n - 1; ++i) {
        if(arr[i + 1] < arr[i]) ++ans;
    }

    cout<<ans<<endl;

    //A Sebastian Production
    return 0;
}
