/*
 * Author: Sebastian Hall
 * Problem: Archives problem 2007-2008
 */
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

struct Line {
    char pId [10];
    char dType [4];
    unsigned int numDoc;
};

bool sortFunction(Line a, Line b) {
    int aPId = atoi(a.pId);
    int bPId = atoi(b.pId);
    int aDType = atoi(a.dType);
    int bDType = atoi(b.dType);

    if(aPId < bPId) return true;
    if(aPId > bPId) return false;
    if(aDType < bDType) return true;
    else return false;
}

int main() {
    //Declare variables
    int ignoredSize = 17, typeSize = 4, parIdSize = 10;
    vector<Line> output;
    char ignored [ignoredSize];

    while(!cin.eof()) {
        //Declare variables
        bool newDoc = true;
        Line l;

        //Read index file from standard input into vector
        cin.get(ignored, ignoredSize);//Remove unneeded document id
        cin.get(l.dType, typeSize);//Get doc type
        cin.get();//Remove colon
        cin.get(l.pId, parIdSize);//Get participant id
        cin.ignore(10000, '\n');//Ignore rest, not needed

        //Add to output vector
        for(vector<Line>::iterator itr = output.begin(); itr != output.end(); ++itr) {
            if(!strcmp(itr->pId, l.pId) && !strcmp(itr->dType, l.dType)) {//If id's and doc type are same
                itr->numDoc++;
                newDoc = false;
            }
        }

        //Add document to output vector if it is a new document
        if(newDoc) {
            l.numDoc = 1;
            output.push_back(l);
        }
    }

    //Sort vector
    sort(output.begin(), output.end(), sortFunction);

    //Output
    for(Line l : output) {
        cout<<l.pId<<" "<<l.dType<<" "<<l.numDoc<<endl;
    }
    
    //A Sebastian Production
    return 0;
}