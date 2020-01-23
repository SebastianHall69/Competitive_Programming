/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on October 9, 2019, 5:18 PM
 * Purpose: Shift keys on keyboard right by one
 */

#include <iostream>
#include <string>

using namespace std;

//Function prototypes
char getChar(char);

int main() {
    do { cout<<getChar(cin.get()); } while(!cin.eof());
    return 0;
}

char getChar(char c) {
    char m;
    switch(c) {
        case 'W': m = 'Q';break;
        case 'E': m = 'W';break;
        case 'R': m = 'E';break;
        case 'T': m = 'R';break;
        case 'Y': m = 'T';break;
        case 'U': m = 'Y';break;
        case 'I': m = 'U';break;
        case 'O': m = 'I';break;
        case 'P': m = 'O';break;
        case '[': m = 'P';break;
        case ']': m = '[';break;
        case 'S': m = 'A';break;
        case 'D': m = 'S';break;
        case 'F': m = 'D';break;
        case 'G': m = 'F';break;
        case 'H': m = 'G';break;
        case 'J': m = 'H';break;
        case 'K': m = 'J';break;
        case 'L': m = 'K';break;
        case ';': m = 'L';break;
        case '\'': m = ';';break;
        case 'X': m = 'Z';break;
        case 'C': m = 'X';break;
        case 'V': m = 'C';break;
        case 'B': m = 'V';break;
        case 'N': m = 'B';break;
        case 'M': m = 'N';break;
        case ',': m = 'M';break;
        case '.': m = ',';break;
        case '/': m = '.';break;
        case '\\': m = ']';break;
        case '1': m = '`';break;
        case '2': m = '1';break;
        case '3': m = '2';break;
        case '4': m = '3';break;
        case '5': m = '4';break;
        case '6': m = '5';break;
        case '7': m = '6';break;
        case '8': m = '7';break;
        case '9': m = '8';break;
        case '0': m = '9';break;
        case '-': m = '0';break;
        case '=': m = '-';break;
        case ' ': m = ' ';break;
        case '\n': m = '\n';break;
    }
    return m;
}