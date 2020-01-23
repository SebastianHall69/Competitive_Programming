#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

struct Company {
    char name [21];
    int minVol;
    float divisor;
};

int main(int argc, char** argv) {
    //Declare variables
    int numComp = 0;
    vector<Company> companies;
    int l = 0, w = 0, h = 0;
    int lbs = 0;
    
    
    //Read in companies
    cin>>numComp;
    cin.ignore();
    for(int i = 0; i < numComp; ++i) {
        Company a;
        cin.get(a.name, 20, ' ');
        cin>>a.minVol;
        cin>>a.divisor;
        cin.ignore();
        companies.push_back(a);
    }
    
    //For each line of input
    while(cin>>l>>w>>h>>lbs) {
        cin.get();
        float vol = l * w * h;
        float dimWeight = 0.0;
        int i = 0;
        int index = 0;
        float smallest = 999999;
        
        //For each company
        for(int i = 0; i < companies.size(); ++i) {
            //Find dim weight
            if(vol >= companies[i].minVol) {
                dimWeight = vol / companies[i].divisor;
                dimWeight = ceil(dimWeight);
            } else {
                dimWeight = lbs;
            }
            
            //Save weight and if smallest
            if(dimWeight < smallest) {
                smallest = dimWeight;
                index = i;
            }
        }
        
        //Output best company
        cout<<companies[index].name<<" "<<smallest<<endl;
    }
    
    
    
    return 0;
}

