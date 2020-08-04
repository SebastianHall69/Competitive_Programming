//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=609&page=show_problem&problem=1082
#include <bits/stdc++.h>
using namespace std;

int main() {
    //Declare variables
    int n = 0, p = 0, ind = 0;

    while(cin>>n>>p) {
        //Break condition
        if(!(n || p)) break;
        
        //Declare variables
        string s, name;
        int comp = 0;
        double price = 0.0;
        
        //Read in product names
        if(ind == 0) cin.ignore();
        for(int i = 0; i < n; ++i) {
            getline(cin, s);
//            cout<<"product: "<<s<<endl;
        }
        
        //For each form
        for(int i = 0; i < p; ++i) {
            double a, b;
            getline(cin, s);
            cin>>a>>b;
            cin.ignore();
//            cout<<"name: "<<s<<"\tp: "<<a<<"\tnum: "<<b<<endl;
            
            //Find optimum
            if(b > comp) {
                comp = b;
                name = s;
                price = a;
            } else if(comp == b && a < price) {
                price = a;
                name = s;
            }
            
            //Read in all products for manufacturer
            for(int j = 0; j < b; ++j) {
                getline(cin, s);
//                cout<<"prod for "<<name<<": "<<s<<endl;
            }
        }
        
        //Output answer
        if(ind) cout<<endl;
        cout<<"RFP #"<<(++ind)<<endl<<name<<endl;
    }
    
    //A Sebastian Production
    return 0;
}
