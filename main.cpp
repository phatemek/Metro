#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <math.h>
#include <vector>

using namespace std;

const string METRO_STATIONS_FILE = "./MetroStations.csv";

class MetroStation {
private:
    string name;
    double latitude;
    double longitude;
public:
    MetroStation(string _name, double _latitude, double _longitude);
    string getName();
    double calcDistance(double x, double y);
};

MetroStation::MetroStation(string _name, double _latitude, double _longitude)
    : name(_name), latitude(_latitude), longitude(_longitude) {}


string MetroStation::getName() { return name; }

double MetroStation::calcDistance(double x, double y) {
    return sqrt(pow((latitude - x), 2) + pow((longitude - y), 2));
}

vector<MetroStation*> addLocations() {
    vector<MetroStation*> metroStations;
    string name;
    double latitude, longitude;
    ifstream inputFile(METRO_STATIONS_FILE);

    while (inputFile >> name >> latitude >> longitude) 
        metroStations.push_back(new MetroStation(name, latitude, longitude));
    
    inputFile.close();
    return metroStations;
}

void run(const vector<MetroStation*>& metroStations) {

    while(true) {
        double latitude, longitude, distance, shortestDistance = 10;
        MetroStation* closestStation = NULL;
        cout << "Latitude: ";
        cin >> latitude;
        cout << "Longitude: ";
        cin >> longitude;

        for(auto& station : metroStations) {
            distance = station->calcDistance(latitude, longitude);
            if(distance < shortestDistance){
                shortestDistance = distance;
                closestStation = station;
            }
        }

        cout << "Closest Station: " << closestStation->getName();
        cout << endl << "**************************************************************" << endl;
    }
}

int main() {
    vector<MetroStation*> metroStations = addLocations();
    run(metroStations);
    return 0;
}