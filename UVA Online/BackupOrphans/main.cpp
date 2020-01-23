/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on July 16, 2019, 11:18 PM
 * Purpose: 2018 Problem 1 Backup Orphans
 */

//System libraries
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//Structure
struct Obj {
    string name;
    bool orphan = true;
};

bool nameSort(const Obj &l, const Obj &r) {
    return l.name < r.name;
}


int main(int argc, char** argv) {
    vector<Obj> files;
    vector<Obj> filenames;
    
    //Get files in vector
    while(cin.peek() != '\n') {
        Obj img;
        getline(cin, img.name);
        files.push_back(img);
    }
    cin.ignore();
    
    //Get filenames
    Obj fname;
    while(getline(cin, fname.name)) {
        filenames.push_back(fname);
    }
    
    //Check which are not orphans
    for(vector<Obj>::iterator i = files.begin(); i != files.end(); ++i) {
        for(vector<Obj>::iterator j = filenames.begin(); j != filenames.end(); ++j) {
            string x = j->name;
            int len = x.find("_");
            x = x.substr(0, len);
            if(i->name.compare(x) == 0) {
                i->orphan = false;
                j->orphan = false;
            }
        }
    }
    
    //Sort files and filenames
    sort(files.begin(), files.end(), nameSort);
    sort(filenames.begin(), filenames.end(), nameSort);
    
    //Output results
    for(Obj &obj : filenames) {
        if(obj.orphan)
            cout<<"F "<<obj.name<<endl; 
    }
    for(Obj &obj : files) {
        if(obj.orphan)
            cout<<"I "<<obj.name<<endl;
    }
    
    //A Sebastian Production
    return 0;
}