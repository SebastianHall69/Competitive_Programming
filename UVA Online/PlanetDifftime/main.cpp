/* 
 * File:   main.cpp
 * Author: Sebastian Hall
 *
 * Created on October 12, 2019, 2:32 PM
 */

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    int sec = 0, min = 0, hour = 0, mon = 0, *monLen, dateLen = 18;

    cin>>sec;
    while(sec != 0) {
        long numSecs = 0L;
        char start [dateLen + 1], end [dateLen + 1];
        int dYear = 0, dMon = 0, dDay = 0, dHour = 0, dMin = 0, dSec = 0;
        
        //Create calendar specifications
        cin>>min>>hour>>mon;
        monLen = new int[mon];
        for(int i = 0; i < mon; ++i)
            cin>>monLen[i];

        //Read in start/end date
        cin.get();//Remove empty space
        cin.get(start, dateLen,' ');
        cin.get();//Remove empty space
        cin.get(end, dateLen, '\n');

        //Get start time numbers
        char tmp [3];
        strncpy(tmp, start, 2);
        int sMon = atoi(tmp);
        strncpy(tmp, start + 3, 2);
        int sDay = atoi(tmp);
        strncpy(tmp, start + 6, 2);
        int sYear = atoi(tmp);
        strncpy(tmp, start + 9, 2);
        int sHour = atoi(tmp);
        strncpy(tmp, start + 12, 2);
        int sMin = atoi(tmp);
        strncpy(tmp, start + 15, 2);
        int sSec = atoi(tmp);

        //Get end time numbers
        strncpy(tmp, end, 2);
        int eMon = atoi(tmp);
        strncpy(tmp, end + 3, 2);
        int eDay = atoi(tmp);
        strncpy(tmp, end + 6, 2);
        int eYear = atoi(tmp);
        strncpy(tmp, end + 9, 2);
        int eHour = atoi(tmp);
        strncpy(tmp, end + 12, 2);
        int eMin = atoi(tmp);
        strncpy(tmp, end + 15, 2);
        int eSec = atoi(tmp);

        //Count days in a year
        int numDays = 0;
        for(int i = 0; i < mon; ++i) {
            numDays += monLen[i];
        }

        while((eYear != sYear) || (eMon != sMon) || (eDay != sDay) || (eHour != sHour) || (eMin != sMin) || (eSec != sSec)) {
            ++sSec;//Add 1 second
            if(sSec >= sec) {
                sSec = 0;
                ++sMin;
            }
            if(sMin >= min) {
                sMin = 0;
                ++sHour;
            }
            if(sHour >= hour) {
                sHour = 0;
                ++sDay;
            }
            if(sDay >= monLen[sMon]) {
                sDay = 1;
                ++sMon;
            }
            if(sMon > mon) {
                sMon = 1;
                ++sYear;
            }
            ++numSecs;
        }
        cout<<numSecs<<endl;
        cin>>sec;
    }
    return 0;
}