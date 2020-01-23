#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    int numPosts = 0;
    int numComm = 0;
    int post = 0;
    int comm = 0;
    int current = 1;
    int postCount = 0;
    
    //Read in initial input
    cin>>numPosts>>numComm>>post;
    
    //Loop numComm times
    for(int i = 0; i < numComm; ++i) {
        cin>>comm;
        current += comm;
        if(current == post) postCount++;
    }
    
    //Output answer
    cout<<postCount;
    
    return 0;
}