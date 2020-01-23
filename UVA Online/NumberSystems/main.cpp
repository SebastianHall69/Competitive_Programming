/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 * Created on October 7, 2019, 1:38 PM
 * Purpose: Convert from base 10 to base 2-36.
 */

#include <cstdio>
#include <cstring>
using namespace std;

char getChar(short);
char* convert(unsigned, unsigned);

int main(){
    //Declare and initialize variables
    unsigned int num = 0, base = 0;
    char in_msg [] = "%u",//Input string for unsigned int
            base_num_msg [] = "Enter a number in base 10: ",//Prompt for number
            new_base_msg [] = "Enter a new base 2 - 36: ",//Prompt for base
            *new_num,//C-String for new number
            out_msg [] = "Base 10: %u\nBase %u: %s\n";
    
    //Read in base 10 number
    printf(base_num_msg);
    scanf(in_msg, &num);
    
    //Read in base to convert to
    do{
        //Read in new base
        printf(new_base_msg);
        scanf(in_msg, &base);
    } while(base < 2 || base > 36);
    
    //Convert to base
    new_num = convert(num,base);
    
    //Output base 10 and new base number
    printf(out_msg, num, base, new_num);
    
    //A Sebastian Production
    return 0;
}

char* convert(unsigned num, unsigned base) {
    char temp [33], *new_num;//Allocate
    temp[32] = '\0';
    short pos = 31;
    while(num >= base) {
        short rm = num % base;//Get remainder
        num /= base;//Divide number by base
        temp[pos] = getChar(rm);//Set character in number
        --pos;//Decrement position caret
    }
    temp[pos] = getChar(num);
    strcpy(new_num, temp + pos);
    return new_num;
}

char getChar(short num) {
    char chr;
    switch(num) {
        case 0: chr = '0';break;
        case 1: chr = '1';break;
        case 2: chr = '2';break;
        case 3: chr = '3';break;
        case 4: chr = '4';break;
        case 5: chr = '5';break;
        case 6: chr = '6';break;
        case 7: chr = '7';break;
        case 8: chr = '8';break;
        case 9: chr = '9';break;
        case 10: chr = 'A';break;
        case 11: chr = 'B';break;
        case 12: chr = 'C';break;
        case 13: chr = 'D';break;
        case 14: chr = 'E';break;
        case 15: chr = 'F';break;
        case 16: chr = 'G';break;
        case 17: chr = 'H';break;
        case 18: chr = 'I';break;
        case 19: chr = 'J';break;
        case 20: chr = 'K';break;
        case 21: chr = 'L';break;
        case 22: chr = 'M';break;
        case 23: chr = 'N';break;
        case 24: chr = 'O';break;
        case 25: chr = 'P';break;
        case 26: chr = 'Q';break;
        case 27: chr = 'R';break;
        case 28: chr = 'S';break;
        case 29: chr = 'T';break;
        case 30: chr = 'U';break;
        case 31: chr = 'V';break;
        case 32: chr = 'W';break;
        case 33: chr = 'X';break;
        case 34: chr = 'Y';break;
        case 35: chr = 'Z';break;
        default: chr = '?';
    }
    return chr;
}