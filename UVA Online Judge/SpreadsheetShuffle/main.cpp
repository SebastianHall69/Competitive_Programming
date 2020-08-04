#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Col {
    char title [81];
    int order;
    vector<string> data;
};

bool sortCol(Col a, Col b) {
    return a.order < b.order;
}

int main(int argc, char** argv) {
    //Declare and initialize variables
    vector<Col> columns;
    const int SIZE = 81;
    char arr [SIZE];
    char *tmp;
    int rowSize = 0;
    
    //Read in titles
    cin.getline(arr, SIZE, '\n');
    tmp = strtok(arr, ",");
    while(tmp != NULL) {
        Col a;
        strcpy(a.title, tmp);
        columns.push_back(a);
        tmp = strtok(NULL, ",");
    }
    
    //Read in order to display
    cin.getline(arr, SIZE, '\n');
    tmp = strtok(arr, ",");
    for(int i = 0; i < columns.size(); ++i) {
        columns[i].order = atoi(tmp);
        tmp = strtok(NULL, ",");
    }
    
    //Read in rows of data
    cin.getline(arr, 81, '\n');//Remove old col headers
    while(cin.getline(arr, SIZE, '\n')) {
        tmp = strtok(arr, ",");
        for(int i = 0; i < columns.size(); ++i) {
            string s(tmp);
            columns[i].data.push_back(s);
            tmp = strtok(NULL, ",");
        }
        rowSize++;
    }
    
    //Sort and remove 0 columns
    for(int i = 0; i < columns.size(); ++i) {
        if(columns[i].order == 0)
            columns.erase(columns.begin() + i);
    }
    sort(columns.begin(), columns.end(), sortCol);
    
    //Output col headers
    for(int i = 0; i < columns.size(); ++i)
        cout<<columns[i].title<<(i+1<columns.size()?",":"");
    cout<<endl;
    
    //Output col data
    for(int i = 0; i < rowSize; ++i) {
        for(int j = 0; j < columns.size(); ++j) {
            cout<<columns[j].data[i]<<(j+1<columns.size()?",":"");
        }
        cout<<endl;
    }
    
    return 0;
}