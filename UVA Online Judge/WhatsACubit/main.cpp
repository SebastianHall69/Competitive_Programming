#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

float cubitToMM(int);
float palmToMM(int);
float digitToMM(int);
float getConversion(int, char*);

int main(int argc, char** argv) {
    //Declare variables
    char input [81];
    
    //Loop and read in input
    while(cin.getline(input, 80, '\n')) {
        char * token;
        int mm = 0.0f;
        token = strtok(input, " ");
        int val = atoi(token);
        
        //Convert whole line to mm
        while(token != NULL) {
            token = strtok(NULL, " ");
            mm += getConversion(val, token);
            token = strtok(NULL, " ");
            if(token != NULL) val = atoi(token);
        }
        
        //Convert mm to meters and feet/inches
        float meters = mm / 1000.0f;
        float inches = mm / 25.4f;
        int feet = inches / 12;
        inches -= feet * 12;
        
        //Output line
        printf("%.3fm", meters);
        if(feet > 0) printf(" %i'",feet);
        printf(" %.2f\"\n", inches);
    }
    
    
    
    
    
    
    return 0;
}

float getConversion(int val, char * name) {
    float mm = 0.0f;
    if(strcmp(name, "cubit") == 0 || strcmp(name, "cubits") == 0)
        mm = cubitToMM(val);
    if(strcmp(name, "palm") == 0 || strcmp(name, "palms") == 0)
        mm = palmToMM(val);
    if(strcmp(name, "digit") == 0 || strcmp(name, "digits") == 0)
        mm = digitToMM(val);
    
    return mm;
}

float cubitToMM(int num) {
    float mm = 526.35;
    return mm * static_cast<float>(num);
}

float palmToMM(int num) {
    float mm = 526.35 / 7.0f;
    return mm * static_cast<float>(num);
}

float digitToMM(int num) {
    float mm = 526.35 / 28.0f;
    return mm * static_cast<float>(num);
}