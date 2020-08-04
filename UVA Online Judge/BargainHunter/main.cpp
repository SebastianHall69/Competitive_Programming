#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;


struct Pos {
    char name [4];
    char lat;
    float latPos [3];
    char lon;
    float lonPos [3];
};

float getDist(Pos,Pos);

int main(int argc, char** argv) {
    //Declare values
    vector<Pos> airports;//List of airports around the world
    Pos tmp;
    
    //Read in airport positions
    cin>>tmp.name;
    while(strcmp(tmp.name, "---") != 0) {
        //Get latitude
        cin>>tmp.latPos[0]>>tmp.latPos[1]>>tmp.latPos[2];//Get latitude numbers
        cin.get();
        cin.get(tmp.lat);//Get direction character
        
        //Get longitude
        cin>>tmp.lonPos[0]>>tmp.lonPos[1]>>tmp.lonPos[2];//Get longitude numbers
        cin.get();
        cin.get(tmp.lon);//Get direction character
        cin.ignore();//Ignore newline character
        
        //Add to list of airports
        airports.push_back(tmp);
        
        //Get next name
        cin>>tmp.name;
    }
    cin.ignore();
    
    //Read in flights and output distance
    char stop[4];
    while(cin.get(stop, 4, ' ')) {
        bool flag = false;
        vector<Pos> stops;
        float distance = 0;
        while(cin.peek() != '\n') {
            if(flag)
                cin.get(stop,4,' ');//Read in name of airport
            else flag = true;
            if(cin.peek() == ' ') cin.get();
            for(Pos a : airports) {
                if(strcmp(a.name, stop) == 0)
                    stops.push_back(a);
            }
        }
        cin.ignore();//Remove newline
        
        //Sum and output distance
        for(int i = 0; i < (stops.size() - 1); ++i) {
            distance += getDist(stops[i], stops[i+1]);
        }
        cout<<round(distance)<<endl;
        
    }
    return 0;
}

float getDist(Pos a, Pos b) {
    //Declare variables
    const float R = 3958.75;
    const float PI = 3.1415926535;
    
    //Convert degree/min/sec to radians
    float aLat = a.latPos[0] + a.latPos[1]/60 + a.latPos[2]/3600;//Lat to degree
    aLat *= PI / 180;//Degree to rad
    aLat *= (a.lat == 'N') ? 1 : -1;//Flip sign if south
    float aLon = a.lonPos[0] + a.lonPos[1]/60 + a.lonPos[2]/3600;//Lon to degree
    aLon *= PI / 180;//Degree to rad
    aLon *= (a.lon == 'E') ? 1 : -1;//flip sign if west
    
    float bLat = b.latPos[0] + b.latPos[1]/60 + b.latPos[2]/3600;//Lat to degree
    bLat *= PI / 180;//Degree to rad
    bLat *= (b.lat == 'N') ? 1 : -1;//Flip sign if north
    float bLon = b.lonPos[0] + b.lonPos[1]/60 + b.lonPos[2]/3600;//Lon to degree
    bLon *= PI / 180;//Degree to lon
    bLon *= (b.lon == 'E') ? 1 : -1;//Flip sign if west
    
    //Calculate distance with haversine formula
    float dist = 2*R*asin(sqrt(pow(sin((bLat - aLat) / 2), 2) + cos(aLat)*cos(bLat)*pow(sin((bLon - aLon) / 2), 2)));
    
    return dist;     
}