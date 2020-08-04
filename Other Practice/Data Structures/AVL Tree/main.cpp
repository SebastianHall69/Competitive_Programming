/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on June 4, 2020, 10:34 AM
 * Purpose: 
 */

#include <iostream>
#include <limits>
#include "Tree.h"
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);

    //Declare variables
    Tree t;
    int choice = 0;
    
    //Driver program
    do {
        //Output choices
        cout << "1.) Insert\n" \
                "2.) Delete\n" \
                "3.) Size\n" \
                "4.) In Order Traversal\n" \
                "5.) Pre Order Traversal\n" \
                "6.) Post Order Traversal\n" \
                "7.) Level Order Traversal\n" \
                "8.) Quit\n\n";
                
        
        //Read in input
        do {
            cout<<"Choice: ";
            cin>>choice;
            cout<<endl;
            
            if(cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                choice = -1;
            }
        } while(choice < 1 || choice > 8);
        
        
        //Evaluate choice
        switch(choice) {
            case 1: {
                int x = 0;
                cout<<"Num To Insert: ";
                cin>>x;
                t.insert(x);
                cout<<"\n\n";
                break;
            }
            case 2: {
                int x = 0;
                cout<<"Num To Delete: ";
                cin>>x;
                t.erase(x);
                cout<<"\n\n";
                break;
            }
            case 3: {
                cout<<"Size: "<<t.getSize()<<"\n\n";
                break;
            }
            case 4: {
                cout<<"In Order: ";
                t.inOrderTraversal();
                cout<<"\n\n";
                break;
            } 
            case 5: {
                cout<<"Pre Order: ";
                t.preOrderTraversal();
                cout<<"\n\n";
                break;
            }
            case 6: {
                cout<<"Post Order: ";
                t.postOrderTraversal();
                cout<<"\n\n";
                break;
            }
            case 7: {
                cout<<"Level Order: ";
                t.levelOrderTraversal();
                cout<<"\n\n";
                break;
            }
            default: break;
        }
        
    } while(choice != 8);
    
    //A Sebastian Production
    return 0;
}