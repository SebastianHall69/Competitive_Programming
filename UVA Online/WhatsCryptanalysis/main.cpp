/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on December 3, 2019, 1:26 PM
 * Purpose: Count number of each letter in the input
 */

#include <iostream>
#include <utility>//For pair
#include <set>//For set
#include <cctype>//For tolower
using namespace std;

/* 
 * Notes:
 *      -Set values cannot be modified so I only use set to sort after counting num of each letter
 *      -Map can only sort based on key and not value so I could not sort properly using that
 *      -Using a vector beforehand to store pairs was a lot more complicated than counting 
 *          and then just adding to container, but since it needed to be sorted it was easier
 *          to use a container that already sorts like a set
 *      -Also I ignored reading in number of lines because that doesn't really matter
 */



typedef pair<char, int> p;//Because I am cool

//Functor for set comparator
struct comp {
    bool operator() (const p &a, const p &b) {
        return (a.second > b.second) ? true : (a.second == b.second) ? (a.first < b.first) : false;
    }
};

typedef set<p, comp> sp;//Because I am double cool


int main(int argc, char** argv) {
    //Declare variables
    char c;//A character
    int count[26];//Count for each letter
    int index = 0;//Index for count
    for(int i = 0; i < 26; ++i)//Initialize array to 0
        count[i] = 0;
    
    //Read in every character
    while(cin>>c) {
        index = tolower(c) - 'a';//Convert from ascii to int
        if(index >= 0 && index <= 26)//If it is a letter
            ++count[index];//Increment its count
    }
    
    //Create set and fill with pairs if count > 0
    sp vals;
    char x = 'A';
    for(int i = 0; i < 26; ++i) {
        if(count[i] > 0)
            vals.insert(make_pair(x, count[i]));//Fill with character and count
        ++x;//Increment to next character
    }
    
    //Output each pair in set, already sorted
    for(p a : vals) {
        cout<<a.first<<" "<<a.second<<endl;
    }
    
    //A Sebastian Production
    return 0;
}